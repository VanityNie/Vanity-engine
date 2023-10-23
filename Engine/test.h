//
// Created by win111 on 2023/10/19.
//

#ifndef VULKANENGINE_TEST_H
#define VULKANENGINE_TEST_H
#include<iostream>
#include "spdlog/spdlog.h"
#include "spdlog/cfg/env.h"   // support for loading levels from the environment variable
#include "spdlog/fmt/ostr.h"  // support for user defined types
void print()
{
    spdlog::info("Welcome to spdlog version {}.{}.{}  !", SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR,
                 SPDLOG_VER_PATCH);

}


#endif //VULKANENGINE_TEST_H
