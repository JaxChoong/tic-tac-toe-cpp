#include <iostream>
#include <string>

int main(){
  int boxes{9};
  int boxIndex[9]= {1,2,3,4,5,6,7,8,9};
  std::string line = "-------------\n| ";

  for (int i = 1; i <= boxes; i++)
  {
    if (i%3)
    {
      line += std::to_string(i) + " | ";
    }
    else
    {
      line += std::to_string(i) + " | \n";
      if (i != 9)
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
