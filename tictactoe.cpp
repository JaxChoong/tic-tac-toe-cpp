#include <iostream>
#include <string>

int main(){
  int boxes{8};
  int boxIndex[9]= {1,2,3,4,5,6,7,8,9};
  std::string line = "-------------\n| ";

  for (int i = 0; i <= boxes; i++)
  {
    if (boxIndex[i]%3)
    {
      line += std::to_string(boxIndex[i]) + " | ";
    }
    else
    {
      line += std::to_string(boxIndex[i]) + " | \n";
      if (boxIndex[i] != 9)
      {
        line += "----+---+----\n| ";
      }
      else{
        line += "-------------";
      }
    }
  }
  std::cout << line;
  return 0;
}
