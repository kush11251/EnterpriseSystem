#ifndef DBADAPTER_HPP
#define DBADAPTER_HPP
#include <string>
class DbAdapter {
public:
    void connect(const std::string& connectionString);
};
#endif