#ifndef _BOARD_HPP_
#define _BOARD_HPP_
#include "cell.hpp"
#include "player.hpp"
#include <iostream>

class Board
{
private:
  Cell *cell[8][8];
  Player *player[2];
  int playernum = 0;
  std::string x_label[8] = {" a"," b"," c"," d",
			    " e"," f"," g"," h"};
  std::string y_label[8] = {" 1"," 2"," 3"," 4",
			    " 5"," 6"," 7"," 8"};
public:
  Board();
  ~Board();
  void ShowBoard();
  bool CheckBoard();//if return false is game-end
  void PlayerTurn();
};
#endif
