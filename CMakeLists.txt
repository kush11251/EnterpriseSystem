cmake_minimum_required(VERSION 3.10)
project(EnterpriseSystem)
set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES
    src/main/cpp/Main.cpp
    src/controllers/UserController.cpp
    src/services/UserService.cpp
    src/models/User.cpp
    src/repositories/UserRepository.cpp
    src/utils/Logger.cpp
    src/adapters/DbAdapter.cpp
)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})