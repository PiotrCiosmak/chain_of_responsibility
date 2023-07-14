cmake_minimum_required(VERSION 3.25)
project(chain_of_responsibility)

set(CMAKE_CXX_STANDARD 23)

add_executable(chain_of_responsibility main.cpp include/Handler.hpp src/AbstractHandler.cpp include/AbstractHandler.hpp src/MonkeyHandler.cpp include/MonkeyHandler.hpp src/SquirrelHandler.cpp include/SquirrelHandler.hpp src/DogHandler.cpp include/DogHandler.hpp)
