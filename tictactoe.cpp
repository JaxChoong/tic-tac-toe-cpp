#include <iostream>
#include <string>

std::string drawBoard(int boxes, int boxIndex[])
{
  std::string line = "-------------\n| ";
  for (int i = 0; i <= boxes; i++)
  { 
    if (i == 2 || i == 5)
    {
      line += std::to_string(boxIndex[i]) + " | \n";
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
      line += std::to_string(boxIndex[i]) + " | ";
    }
  }
  line += "\n-------------";
  return line;
}

int main(){
  int gridInput{};
  int boxes{8};
  int boxIndex[9]= {0,1,2,3,4,5,6,7,8};
  for (int i = 0; i<=8;i++)
  { 
    std::cout << "Enter a grid number: ";
    std::cin >> gridInput;
    std::string line = drawBoard(boxes,boxIndex);
    std::cout << line  + '\n';
    std::cout << gridInput << std::endl;
  }
  return 0;
}