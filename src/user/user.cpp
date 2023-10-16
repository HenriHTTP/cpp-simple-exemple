#include "../../include/user/user.hpp"

void user::userClass::setName(const std::string &name) { userName = name; }
void user::userClass::setType(const std::string &type) { userType = type; }
void user::userClass::setState(const bool &state) { userState = state; }

std::string user::userClass::getName() { return userName; }
std::string user::userClass::getType() { return userType; }
bool user::userClass::getState() { return userState; }
