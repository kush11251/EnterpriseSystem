#ifndef USERSERVICE_HPP
#define USERSERVICE_HPP
#include "models/User.hpp"
class UserService {
public:
    void createUser(const std::string& name);
private:
    User user;
};
#endif