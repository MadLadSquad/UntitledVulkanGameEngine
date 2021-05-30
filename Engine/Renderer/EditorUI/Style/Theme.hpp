// Theme.hpp
// Last update 5/04/2021 by Madman10K
#pragma once
#include <iostream>
#include <imgui.h>

namespace UVK
{
    class EditorTheme
    {
    public:
        explicit EditorTheme(const std::string& theme)
        {
            setTheme(theme);
        }

        void setTheme(const std::string& theme);

        void useTheme();

        std::pair<std::string, int> getFont()
        {
            return std::make_pair(fontLoc, fontSize);
        }

        [[nodiscard]] float getWindowRounding() const
        {
            return windowRounding;
        }
    private:
        ImVec4 textCol = ImVec4(1.0, 1.0, 1.0, 1.0);

        ImVec4 windowBg = ImVec4(0.1, 0.1, 0.1, 1.0);

        ImVec4 header = ImVec4(0.2, 0.2, 0.2, 1.0);
        ImVec4 headerHovered = ImVec4(0.3, 0.3, 0.3, 1.0);
        ImVec4 headerActive = ImVec4(0.15, 0.15, 0.15, 1.0);

        ImVec4 button = ImVec4(0.2, 0.2, 0.2, 1.0);
        ImVec4 buttonHovered = ImVec4(0.3, 0.3, 0.3, 1.0);
        ImVec4 buttonActive = ImVec4(0.15, 0.15, 0.15, 1.0);

        ImVec4 frame = ImVec4(0.2, 0.2, 0.2, 1.0);
        ImVec4 frameHovered = ImVec4(0.3, 0.3, 0.3, 1.0);
        ImVec4 frameActive = ImVec4(0.15, 0.15, 0.15, 1.0);

        ImVec4 tab = ImVec4(0.15, 0.15, 0.15, 1.0);
        ImVec4 tabHovered = ImVec4(0.4, 0.4, 0.4, 1.0);
        ImVec4 tabActive = ImVec4(0.3, 0.3, 0.3, 1.0);
        ImVec4 tabUnfocused = ImVec4(0.15, 0.15, 0.15, 1.0);
        ImVec4 tabUnfocusedActive = ImVec4(0.2, 0.2, 0.2, 1.0);

        ImVec4 titleBg = ImVec4(0.15, 0.15, 0.15, 1.0);
        ImVec4 titleBgCollapsed = ImVec4(0.95, 0.15, 0.95, 1.0);
        ImVec4 titleBgActive = ImVec4(0.15, 0.15, 0.15, 1.0);

        ImVec4 menubarBG = ImVec4(0.01, 0.01, 0.01, 1.0);

        std::string fontLoc;
        int fontSize = 12;
        float windowRounding = 1.0f;
    };
}