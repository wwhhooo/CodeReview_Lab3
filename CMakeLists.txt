cmake_minimum_required(VERSION 3.30)
project(Task01)

set(CMAKE_CXX_STANDARD 20)

add_executable(Task01
        main.cpp
        converter.cpp
        DeepSeek.cpp
        MistralAI.cpp
        ChatGPT.cpp
)
