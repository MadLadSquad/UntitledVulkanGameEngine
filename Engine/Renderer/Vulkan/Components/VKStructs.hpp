// VKStructs.hpp
// Last update 27/5/2021 by Madman10K
#pragma once
#include <vulkan/vulkan.h>

namespace UVK
{
    constexpr std::array<const char*, 1> deviceExtensions = { VK_KHR_SWAPCHAIN_EXTENSION_NAME };
    struct VKDevice
    {
        VkPhysicalDevice physicalDevice;
        VkDevice logicalDevice;
    };

    struct VKQueueFamilyLocation
    {
        int graphicsFamily = -1;
        int presentationFamily = -1;

        [[nodiscard]] bool isValid() const
        {
            return graphicsFamily >= 0 && presentationFamily >= 0;
        }
    };

    struct VKSwapchainSettings
    {
        VkSurfaceCapabilitiesKHR surfaceCapabilities{};
        std::vector<VkSurfaceFormatKHR> formats{};
        std::vector<VkPresentModeKHR> presentationModes{};
    };
}