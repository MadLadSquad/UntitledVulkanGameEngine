// WorldSettings.cpp
// Last update 2/7/2021 by Madman10K
#include "WorldSettings.hpp"

#ifndef PRODUCTION
void WorldSettings::display(UVK::FVector4& colour, UVK::FVector4& ambientLight, std::string& name, bool& bShow, UVK::Texture& insert, const std::string& cpFileLoc)
{
    ImGui::Begin("World Settings", &bShow);

    ImGui::InputText("Level Name", &name);
    ImGui::SameLine();
    if (ImGui::ImageButton((void*)(intptr_t)insert.getImage(), ImVec2(10.0f, 10.0f)))
    {
        name = cpFileLoc;
    }

    ImGui::ColorEdit4("Colour background", (float*)&colour);
    ImGui::ColorEdit4("Ambient Light", (float*)&ambientLight); // W is for ambient light intensity

    ImGui::End();
}
#endif