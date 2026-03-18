#include "UserRepository.hpp"
#include <iostream>
void UserRepository::saveUser(const User& user) {
    std::cout << "Saving user: " << user.getName() << std::endl;
}