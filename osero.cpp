#include "board.hpp"
#include "player.hpp"
#include "cell.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
  Board *board = new Board();

  std::cout << "Let's start OSERO" << std::endl << std::endl;

  while(board->CheckBoard()){
    board->PlayerTurn();
  }

  delete board;
}
