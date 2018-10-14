#include "board.hpp"
#include "player.hpp"
#include "cell.hpp"
#include <iostream>
#include <cstdlib>

Board::Board()
{
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      cell[i][j] = new Cell(i,j);
    }
  }
  player[0] = new Player(1);
  player[1] = new Player(-1);
}

Board::~Board()
{
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      delete cell[i][j];
    }
  }
  delete player[0];
  delete player[1];
}

void Board::ShowBoard()
{
  string str;

  str = " |";
  for(int i=0;i<8;i++){
    str = str + x_label[i] + "|";
  }
  std::cout << str << std::endl;

  str = "--+";
  for(int i=0;i<8;i++){
    str = str + "--" + "|";
  }
  std::cout << str << std::endl;

  for(int j=0;j<8;j++){
    str = y_label[j] + "|";
    for(int i=0;i<8;i++){
      switch(cell[i][j].SeeStone()){
      case 1:
	str = "○" + "|";
      case -1:
	str = "●" + "|";
      case 0:
	if(cell[i][j].Can_You_Put()==true){
	  str = " *" + "|";
	}else{
	  str = "  " + "|";
	}
      default:
	exit(EXIT_FAILURE);
      }
    }
    std::cout << str << std::endl;
    str = "--+";
    for(int i=0;i<8;i++){
      str = str + "--" + "|";
    }
    std::cout << str << std::endl;
  }
}

bool Board::CheckBoard()
{
  int sum = 0;
  bool flag = false;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      sum = sum + cell[i][j]->SeeStone();
      if(cell[i][j]->SeeStone()==0){
	flag = true;
      }
    }
  }
  if(flag == false){
    std::cout << "This game was finished." << std::endl;
    if(sum>0){
      std::cout << "The winner is white!" << std::endl;
    }else if(sum<0){
      std::cout << "The winner is black!" << std::endl;
    }else{
      std::cout << "This game is draw!" << std::endl;
    }
  }
  return flag;
}

void Board::PlayerTurn()
{
  player[playernum]->CheckBoard();
  player[playernum]->PutStone(cell);

  playernum = playernum*(-1)+1;
}
