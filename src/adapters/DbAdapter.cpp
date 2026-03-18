#include "DbAdapter.hpp"
#include <iostream>
void DbAdapter::connect(const std::string& connectionString) {
    std::cout << "Connecting to database: " << connectionString << std::endl;
}