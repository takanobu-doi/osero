#ifndef _CELL_HPP_
#define _CELL_HPP_

class Cell
{
private:
  int locate[2] = {-1,-1};
  int stone = 0;
  bool can_you_put = true;
public:
  Cell(int x,int y);
  ~Cell();
  void PutStone(int color);
  void ChangeStone();
  void CheckStone();
  int SeeStone();
  void SeeLocate(int loc[2]);
  bool Can_You_Put();
};

#endif
