#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "cell.hpp"
#include <vector>

class Player
{
private:
  int color;
  std::vector<int [2]> locate;
public:
  Player(int col);
  ~Player();
  void PutStone(Cell* cell[8][8]);
  void CheckBoard();
};

#endif
