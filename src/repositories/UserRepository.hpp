#ifndef USERREPOSITORY_HPP
#define USERREPOSITORY_HPP
#include "models/User.hpp"
class UserRepository {
public:
    void saveUser(const User& user);
};
#endif