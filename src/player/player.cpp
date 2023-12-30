#include "../../include/player/player.hpp"

namespace player
{
void player::move_left(const int &position)
{
    if (this->x >= 0 && this->x != 0)
    {
        this->x -= position;
    }
    this->x;
}

void player::move_right(const int &position)
{
    if (this->x >= 0)
    {
        this->x += position;
    }
    this->x;
}

void player::move_jump(const int &jump_height)
{
    if (this->y == 0)
    {
        this->y = jump_height;
    }
    this->x;
}

void player::set_speed(const float &speed)
{
    this->speed = speed;
}

auto player::get_position_x() -> const int
{
    return this->x;
}
auto player::get_positon_y() -> const int
{
    return this->y;
}
auto player::get_speed() -> const float
{
    return this->speed;
}

} // namespace player
