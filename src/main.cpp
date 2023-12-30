#include <iostream>

#include "../include/hello/hello.hpp"
#include "../include/player/player.hpp"
#include "../include/user/user.hpp"
#include <memory>

int main()
{

    auto player = std::make_shared<player::player>();

    std::cout << "position:" << player->get_position_x() << std::endl;

    player->move_left(20);
    std::cout << "position:" << player->get_position_x() << std::endl;

    player->move_right(20);
    std::cout << "position:" << player->get_position_x() << std::endl;

    player->set_speed(3.16f);
    std::cout << "speed:" << player->get_speed() << std::endl;
    
    return 0;
}