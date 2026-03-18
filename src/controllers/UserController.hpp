#ifndef USERCONTROLLER_HPP
#define USERCONTROLLER_HPP
#include "services/UserService.hpp"
class UserController {
public:
    void run();
private:
    UserService userService;
};
#endif