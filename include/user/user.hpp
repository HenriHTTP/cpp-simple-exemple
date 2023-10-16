#ifndef _USER_H
#define _USER_H
#include <stdlib.h>

#include <iostream>
#include <string>

namespace user {

class userInterfaces {
 public:
  virtual void setName(const std::string &name) = 0;
  virtual void setType(const std::string &type) = 0;
  virtual void setState(const bool &state) = 0;
  virtual std::string getName() = 0;
  virtual std::string getType() = 0;
  virtual bool getState() = 0;
};

class userClass : public userInterfaces {
 public:
  userClass(){};
  userClass(std::string name) : userName(name){};

  void setName(const std::string &name) override;
  void setType(const std::string &type) override;
  void setState(const bool &tyoe) override;
  std::string getName() override;
  std::string getType() override;
  bool getState() override;

 private:
  std::string userName{};
  std::string userType{};
  bool userState{};
};
}  // namespace user

#endif  // _USER_H
