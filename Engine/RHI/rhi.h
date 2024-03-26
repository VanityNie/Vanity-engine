//
// Created by win111 on 2024/3/26.
//

#ifndef VANITY_ENGINE_RHI_H
#define VANITY_ENGINE_RHI_H

#include "vulkan/vulkan.hpp"
#include "magic_enum_all.hpp"
#include<iostream>
void test()
{vk::ApplicationInfo appInfo("Vulkan Test", VK_MAKE_VERSION(1, 0, 0), "No Engine",
                             VK_MAKE_VERSION(1, 0, 0), VK_API_VERSION_1_0);

    uint32_t instanceExtensionCount = 0;
    std::vector<vk::ExtensionProperties> instanceExtensions;

    // 枚举所有可用的实例扩展
    vk::enumerateInstanceExtensionProperties(nullptr, &instanceExtensionCount, nullptr);
    instanceExtensions.resize(instanceExtensionCount);
    vk::enumerateInstanceExtensionProperties(nullptr, &instanceExtensionCount, instanceExtensions.data());

    std::cout << "Available Instance Extensions:" << std::endl;
    for (const auto& extension : instanceExtensions) {
        std::cout << "\t" << extension.extensionName << std::endl;
    }

    vk::InstanceCreateInfo instanceCreateInfo({}, &appInfo);


    auto v =  magic_enum::enum_names<VkAccessFlagBits>();

    for(auto n:v)
    {
        std::cout<<n<<std::endl;
    }


    // 创建实例
    vk::Instance instance;
    try {
        instance = vk::createInstance(instanceCreateInfo);
    } catch (vk::SystemError& err) {
        std::cout << "Failed to create Vulkan instance: " << err.what() << std::endl;

    }

    std::cout << "Vulkan instance created successfully!" << std::endl;

    // 清理实例
    instance.destroy();
    printf("RHI function");
}

#endif //VANITY_ENGINE_RHI_H
