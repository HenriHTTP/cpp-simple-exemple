#include <iostream>

#include "../include/hello/hello.hpp"
#include "../include/player/player.hpp"
#include "../include/user/user.hpp"

int main() {
  std::cout << hello::hello_world() << std::endl;
  std::cout << "my rina not like me too , i wanna cry" << std::endl;

  user::userClass user{};
  user.setName("rina_wilk");

  std::cout << user.getName() << std::endl;

  player::playerClass player{};
  std::cout << "position:" << player.getPositionPlayer() << std::endl;
  player.moveLeft(10);
  std::cout << "position:" << player.getPositionPlayer() << std::endl;
  player.moveRight(20);
  std::cout << "position:" << player.getPositionPlayer() << std::endl;

  if(player.getPositionPlayer() > 0){ 
    std::cout<< "position player is right"<<std::endl;
  }else{ 
    std::cout<< "position player is left"<<std::endl;
  }

  return 0;
}