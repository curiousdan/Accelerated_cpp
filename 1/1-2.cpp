#include <iostream>
#include <string>
using namespace std;

int main(){
  const string exclaim = "!";
  //two literals can't be concatenated.
  const string message = "hello" + ",world" + exclaim; 
  return 0;
}
