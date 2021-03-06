// RemoveFile.cpp
// Last update 6/7/2021 by Madman10K
#include "RemoveFile.hpp"
#include <Core.hpp>
#include <imgui.h>
#include <cpp/imgui_stdlib.h>

#ifndef PRODUCTION
void RemoveFile::display(bool& bShow, UVK::Texture& insert, const std::string& cpFileLoc)
{
    ImGui::Begin("RemoveFile", &bShow);

    static std::string in;
    bool bSO = false;

    ImGui::Checkbox("Scriptable Object?", &bSO);
    ImGui::InputTextWithHint("File to delete", "Location starts from the source folder, do not specify the file's extension, only the name", &in);
    ImGui::SameLine();
    if (ImGui::ImageButton((void*)(intptr_t)insert.getImage(), ImVec2(10.0f, 10.0f)))
    {
        in = cpFileLoc;
    }

    if (ImGui::Button("Close##delete"))
    {
        bShow = false;
    }

    ImGui::SameLine();

    if (ImGui::Button("Delete##delete"))
    {
        int8_t lnt = 0;
        bool error = false;
        if (bSO)
        {

#ifndef __MINGW32__

            try
            {
#ifndef _WIN32
                lnt = system(static_cast<std::string>("cd ../UVKBuildTool/build/ && ./UVKBuildTool --actor " + in + " --remove").c_str());
#else
                lnt = system(static_cast<std::string>("cd ../UVKBuildTool/build/ && UVKBuildTool.exe --actor " + in + " --remove").c_str());
#endif
                std_filesystem::remove("../../Source/" + in + ".hpp");
                std_filesystem::remove("../../Source/" + in + ".cpp");
            }
            catch (std_filesystem::filesystem_error&)
            {
                logger.consoleLog("Failed to delete files", UVK_LOG_TYPE_ERROR);
                error = true;
            }

            if (!error)
            {
                bShow = false;
            }
#endif
        }
        else
        {
#ifndef __MINGW32__
            try
            {
                std_filesystem::remove("../../Source/" + in + ".hpp");
                std_filesystem::remove("../../Source/" + in + ".cpp");
            }
            catch (std_filesystem::filesystem_error&)
            {
                logger.consoleLog("Failed to delete files", UVK_LOG_TYPE_ERROR);
                error = true;
            }

            if (!error)
            {
                bShow = false;
            }
#endif
        }
        if (lnt)
        {

        }
    }


    ImGui::End();
}
#endif