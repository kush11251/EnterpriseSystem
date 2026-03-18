#include "UserService.hpp"
#include "repositories/UserRepository.hpp"
void UserService::createUser(const std::string& name) {
    UserRepository userRepository;
    userRepository.saveUser(User(name));
}