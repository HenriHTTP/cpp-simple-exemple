#include <iostream>

#include "../include/hello/hello.hpp"
#include "../include/player/player.hpp"
#include "../include/user/user.hpp"

int main() {
  // std::cout << hello::hello_world() << std::endl;
  // std::cout << "my rina not like me too , i wanna cry" << std::endl;

  // user::userClass user{};
  // user.setName("rina_wilk");

  // std::cout << user.getName() << std::endl;

  player::player *player = new player::player;

  std::cout << "position:" << player->get_position_x() << std::endl;

  player->move_left(20);
  std::cout << "position:" << player->get_position_x() << std::endl;

  player->move_right(20);
  std::cout << "position:" << player->get_position_x() << std::endl;

  player->set_speed(3.16f);
  std::cout << "speed:" << player->get_speed() << std::endl;

  delete player;
  return 0;
}