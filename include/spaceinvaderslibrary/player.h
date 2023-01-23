//
// Created by Jonathan He on 4/21/20.
//

#ifndef FINALPROJECT_PLAYER_H
#define FINALPROJECT_PLAYER_H

#include <string>
#include <Box2D/Box2D.h>

namespace spaceinvaderslibrary {

class Player {
 public:
  Player() = default;
  Player(const std::string& name, size_t score) : name(name), score(score) {}
  void SetBody(b2World *world, int player_x, int player_y);
  b2Body* GetBody();
  
  std::string name;
  size_t score;
 private:
  b2Body* player_body_;
  const float kPlayerSize = 15;
};

}  // namespace spaceinvaderslibrary

#endif  // FINALPROJECT_PLAYER_H
