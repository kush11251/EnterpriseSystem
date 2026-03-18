#ifndef USER_HPP
#define USER_HPP
#include <string>
class User {
public:
    User(const std::string& name) : name_(name) {}
    std::string getName() const { return name_; }
private:
    std::string name_;
};
#endif