#include "Window.hpp"
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>



void UVK::Window::doCallBacks()
{
    glfwSetFramebufferSizeCallback(windowMain, framebufferSizeCallback);
}

void UVK::Window::framebufferSizeCallback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void UVK::Window::createWindow()
{
    auto out = YAML::LoadFile("Config/Settings/Window.yaml");



    if (out["image"])
    {
        image = out["image"].as<std::string>();
    }

    if (out["width"] && out["height"])
    {
        width = out["width"].as<int>();
        height = out["height"].as<int>();
    }

    if (out["fullscreen"])
    {
        bIsFullScreen = out["fullscreen"].as<bool>();
    }

    if (!glfwInit())
    {
        logger.consoleLog("GLFW initialisation failed!", ERROR);
        glfwTerminate();
        return;
    }
    logger.consoleLog("Setting up the window", NOTE);
    glewExperimental = GL_TRUE;
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_SAMPLES, 16);
    glEnable(GL_MULTISAMPLE);
    glEnable(GL_DEPTH_TEST);
    if (bIsFullScreen)
    {
        windowMain = glfwCreateWindow(width, height, "Test Window", glfwGetPrimaryMonitor(), NULL);
    }
    else
    {
        windowMain = glfwCreateWindow(width, height, "Test Window", NULL, NULL);
    }
    GLFWimage images[1];
    images[0].pixels = stbi_load(image.c_str(), &images[0].width, &images[0].height, 0, 4);
    glfwSetWindowIcon(windowMain, 1, images);
    stbi_image_free(images[0].pixels);

    if (!windowMain)
    {
        logger.consoleLog("GLFW window creation failed!", ERROR);
        glfwTerminate();
        return;
    }
    logger.consoleLog("Window was created successfully", SUCCESS);

    int bufferWidth, bufferHeight;
    glfwGetFramebufferSize(windowMain, &bufferWidth, &bufferHeight);

    glfwMakeContextCurrent(windowMain);

    doCallBacks();



    if (glewInit() != GLEW_OK)
    {
        logger.consoleLog("GLEW initialisation failed!", ERROR);

        glfwDestroyWindow(windowMain);
        glfwTerminate();
        return;
    }

    glViewport(0, 0, bufferWidth, bufferHeight);
}

void UVK::Window::destroyWindow()
{
    glfwDestroyWindow(windowMain);
    glfwTerminate();
}

void UVK::Window::dumpConfig()
{
    YAML::Emitter out;
    out << YAML::BeginMap<< YAML::Key << "image" << YAML::Value << image;
    out << YAML::Key << "width" << YAML::Value << width;
    out << YAML::Key << "height" << YAML::Value << height;
    out << YAML::Key << "fullscreen" << YAML::Value << bIsFullScreen;

    std::ofstream fileout("Config/Settings/Window.yaml");
    fileout << out.c_str();
}