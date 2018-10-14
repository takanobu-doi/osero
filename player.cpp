#include "player.hpp"
#include "cell.hpp"
#include <iostream>
#include <cstdlib>

Player::Player(int col)
{
  color = col;
}

Player::~Player()
{
}

void Player::PutStone(Cell* cell[8][8])
{
  CheckBoard();
  
  int x[2] = *(locate.begin()+rand()%locate.size());
  cell[x[0]][x[1]]->PutStone(color);
  locate.erase(locate.begin(),locate.end());
}

void Player::CheckBoard()
{
  int vec[2] = [0,0];
}
