#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include "cell.hpp"

class Player
{
private:
  int color;
  vector<int [2]> locate;
public:
  Player(int col);
  ~Player();
  void PutStone(Cell* cell[8][8]);
  void CheckBoard();
}

#endif _PLAYER_HPP_
