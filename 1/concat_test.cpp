#include <iostream>
#include <string>

int main() {
  std::string s = "string one";
  std::string t = "string two";

  std::cout << s + t << std::endl; //is good.
  //std::cout << "literal1" + "literal2" << std::endl; //won't compile
  std::cout << s + "literal2" << std::endl; //is good
  std::cout << "literal1" + t << std::endl; //is good 
  return 0;
}
