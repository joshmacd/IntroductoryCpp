cmake_minimum_required(VERSION 4.3)
project(Introduction)

set(CMAKE_CXX_STANDARD 20)

add_executable(Introduction main.cpp)
add_executable(Integers_doubles Integers_doubles.cpp)
add_executable(Ex1_Swap_Variable_Values Ex1_Swap_Variable_Values.cpp)
 add_executable(Constants Constants.cpp)

target_include_directories(Introduction SYSTEM PRIVATE
        /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1
)

target_include_directories(Integers_doubles SYSTEM PRIVATE
        /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1
)
target_include_directories(Ex1_Swap_Variable_Values SYSTEM PRIVATE
        /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1
)

target_include_directories(Constants SYSTEM PRIVATE
        /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1)