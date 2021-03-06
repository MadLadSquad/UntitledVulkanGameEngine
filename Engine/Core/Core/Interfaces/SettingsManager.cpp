// SettingsManager.cpp
// Last update 18/7/2021 by Madman10K
#include "SettingsManager.hpp"
#include <Core/Global.hpp>

void UVK::SettingsManager::saveSettings()
{
    saveRendererSettings();
    saveEditorKeybindSettings();
    saveKeybindSettings();
}

void UVK::SettingsManager::saveRendererSettings()
{
    global.rendererSettings.saveSettings();
}

void UVK::SettingsManager::saveEditorKeybindSettings()
{
    UVK::WindowInternal::saveEditorKeybinds();
}

void UVK::SettingsManager::saveKeybindSettings()
{
    UVK::WindowInternal::saveGameKeybinds();
}

UVK::RendererSettings& UVK::SettingsManager::getRendererSettings()
{
    return global.rendererSettings;
}

void UVK::SettingsManager::saveWindowSettings()
{
    global.window.saveWindowSettings();
}

void UVK::SettingsManager::saveWindowAndKeybindSettings()
{
    global.window.dumpConfig();
}
