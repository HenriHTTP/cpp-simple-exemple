#include "../../include/user/user.hpp"
namespace user {
void user::set_name(const std::string &name) { this->userName = name; }
void user::set_type(const std::string &type) { this->userType = type; }
void user::set_state(const bool &state) { this->userState = state; }

auto user::get_name() const -> std::string { return this->userName; }
auto user::get_type() const -> std::string { return this->userType; }
auto user::get_state() const -> bool { return this->userState; }
}  // namespace user
