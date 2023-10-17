#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>

namespace player {

class playerInterfaces {
  virtual void moveLeft(const int &position) = 0;
  virtual void moveRight(const int &position) = 0;
  virtual int getPositionPlayer() = 0;
};

class playerClass : public playerInterfaces {
 public:
  playerClass(int startX = 0) : x(startX){};

  void moveLeft(const int &position) override;
  void moveRight(const int &position) override;

  int getPositionPlayer() override;

 private:
  int x{};
  int y{};
};
}  // namespace player
#endif  // _PLAYER_H
