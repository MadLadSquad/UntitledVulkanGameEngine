// OpenLevelWidget.cpp
// Last update 30/6/2021 by Madman10K
#include <GL/glew.h>
#include "OpenLevelWidget.hpp"
#include "../../GameFramework/GameplayClasses/Level/Level.hpp"
#include <imgui.h>
#include <cpp/imgui_stdlib.h>

#ifndef PRODUCTION
void OpenLevelWidget::display(std::string &openLevel, bool &bShowOpenLevelWidget, double& dr, UVK::FVector4& colour, std::string& name)
{
    ImGui::Begin("Open Level");

    ImGui::InputText("File location", &openLevel);

    ImGui::Text("Keep in mind that clicking Submit WILL NOT SAVE any changes made to the level you are editing");
    if (ImGui::Button("Cancel"))
    {
        bShowOpenLevelWidget = false;
    }

    ImGui::SameLine();

    if (ImGui::Button("Submit"))
    {
        Timer tm;
        tm.startRecording();

        UVK::Level::open(openLevel.c_str());
        tm.stopRecording();
        dr = tm.getDuration();

        bShowOpenLevelWidget = false;
    }

    ImGui::End();
}
#endif