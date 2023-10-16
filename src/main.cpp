#include <iostream>

#include "../include/hello/hello.hpp"
#include "../include/user/user.hpp"

int main() {
  std::cout << hello::hello_world() << std::endl;
  std::cout << "my rina not like me too , i wanna cry" << std::endl;

  user::userClass user{};
  user.setName("rina_wilk");

  std::cout << user.getName() << std::endl;

  return 0;
}