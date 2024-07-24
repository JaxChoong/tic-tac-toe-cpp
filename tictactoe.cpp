#include <iostream>
#include <string>

std::string drawBoard(int boxes, std::string boxIndex[])
{
  std::string line = "-------------\n| ";
  for (int i = 0; i <= boxes; i++)
  { 
    if (i == 2 || i == 5)
    {
      line += boxIndex[i] + " | \n";
      if (i == 8)
      {
        line += "-------------";
      }
      else{
        line += "----+---+----\n| ";
      }
    }
    else
    {
      line += boxIndex[i] + " | ";
    }
  }
  line += "\n-------------";
  return line;
}

void changeGrid(std::string boxIndex[], int playerChoice, std::string playerIcon)
{
  boxIndex[playerChoice] = playerIcon[0];
}

void runGame(int boxes, std::string boxIndex[], int gridInput, std::string p1Choice, std::string p2Choice)
{
  for (int i = 0; i<=8;i++)
  { 
    std::string line = drawBoard(boxes,boxIndex);
    std::cout << line  + '\n';
    if ( i<1)
    {
      std::cout << "P1 Enter a grid number: ";
      std::cin >> gridInput;
      changeGrid(boxIndex,gridInput,p1Choice);
    }
    else if (i%2)
    {
      std::cout << "P2 Enter a grid number: ";
      std::cin >> gridInput;
      changeGrid(boxIndex,gridInput,p2Choice);
    }
    else{
      std::cout << "P1 Enter a grid number: ";
      std::cin >> gridInput;
      changeGrid(boxIndex,gridInput,p1Choice);
    }
  }
}

int main(){
  int gridInput{};
  int boxes{8};
  std::string boxIndex[]= {"0", "1", "2", "3", "4", "5", "6", "7", "8"};
  std::string p1Choice{};
  std::string p2Choice{};
  std::cout << "Player 1 Choice (X OR O): ";
  std::cin >> p1Choice;
  if (p1Choice == "X")
  {
    p2Choice = "O";
  }
  else{
    p2Choice = "X";
  }
  std::cout << "P1: " << p1Choice << std::endl;
  std::cout << "P2: " << p2Choice << std::endl;
  runGame(boxes,boxIndex,gridInput,p1Choice,p2Choice);
  return 0;
}