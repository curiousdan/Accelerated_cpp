/*
by WS Dan Park (curiousdan)
Based off K&M Chapter 1.
Modified Hello world program, asks for input
*/

#include <iostream>
#include <string>

int main(){
  //asks for name
  std::cout<<"Please enter your first name: ";
  std::string name; //define name
  std::cin>> name; //read in name

  //write greeting
  std::cout<<"Hello,"<<name<<"!"<<std::endl;
  return 0;
  
}
