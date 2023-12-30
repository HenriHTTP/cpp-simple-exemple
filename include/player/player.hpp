#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>

namespace player
{

class player
{
  public:
    player() = default;
    player(unsigned int x, unsigned int y, float speed) : x(x), y(y), speed(speed){};

    void move_left(const int &position);
    void move_right(const int &position);
    void move_jump(const int &jump_height);
    void set_speed(const float &speed);

    auto get_position_x() -> const int;
    auto get_positon_y() -> const int;
    auto get_speed() -> const float;

  private:
    unsigned int x{};
    unsigned int y{};
    float speed{};
};
} // namespace player
#endif // _PLAYER_H
