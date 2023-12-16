#ifndef _USER_H
#define _USER_H
#include <stdlib.h>

#include <iostream>
#include <string>

namespace user {
class user {
 public:
  user() = default;
  user(std::string userName, std::string userType, bool userState)
      : userName(userName), userType(userType), userState(userState){};

  void set_name(const std::string &name);
  void set_type(const std::string &type);
  void set_state(const bool &tyoe);

  auto get_name() const -> std::string;
  auto get_type() const -> std::string;
  auto get_state() const -> bool;

 private:
  std::string userName{};
  std::string userType{};
  bool userState{};
};

}  // namespace user

#endif  // _USER_H
