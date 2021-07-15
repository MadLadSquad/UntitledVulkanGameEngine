// Filesystem.hpp
// Last update 15/6/2021 by Madman10K
#pragma once
#include <Core.hpp>
#include "Engine/Renderer/Textures/Texture.hpp"
#include <imgui.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_glfw.h>
#include <cpp/imgui_stdlib.h>
#ifndef PRODUCTION
#ifndef __MINGW32__

/**
 * @brief A filesystem widget with formatting for different file types
 */
namespace Filesystem
{
    void display(std_filesystem::path& pt, std::array<UVK::Texture, 8>& textures, std::string& cpLoc, bool& bShow);
}
#endif
#endif