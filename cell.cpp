#include "cell.hpp"
#include <iostream>
#include <cstdlib>

Cell::Cell(int x,int y)
{
  locate[0] = x;
  locate[1] = y;
}

void Cell::PutStone(int color)
{
  can_you_put = false;
  stone = color;
}

void Cell::ChangeStone()
{
  stone = stone*(-1);
}

int Cell::SeeStone()
{
  return stone;
}

void Cell::SeeLocate(int loc[2])
{
  loc[0] = locate[0];
  loc[1] = locate[1];
}

bool Cell::Can_You_Put()
{
  return can_you_put;
}
