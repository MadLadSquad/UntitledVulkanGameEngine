// SaveLevel.hpp
// Last update 3/6/2021 by Madman10K
#pragma once
#include <Core.hpp>
#include <imgui.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_glfw.h>
#include <cpp/imgui_stdlib.h>

namespace UVK
{
    class Level;
}

namespace SaveLevel
{
    // Displays the SaveLevel widget
    void display(bool& bOpen, std::string& location, std::string& name, UVK::FVector4& colour);
}