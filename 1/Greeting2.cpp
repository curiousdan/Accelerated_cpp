/*
 * by WS Dan Park (curiousdan)
 * based of K&M chapter 1
 * an elaborate greeting program
 */

#include <iostream>
#include <string>
using namespace std;


int main(){
  cout << "Please enter your first name:";
  string name;
  cin >> name;

  //build the message
  const string greeting = "Hello," + name + "!";

  //build the second and fourth lines of output
  const string spaces(greeting.size(),' ');
  const string second= "*" + spaces + "*";

  //build first and fifth lines of output
  const string first(second.size(),'*');

  //write it
  cout << endl;
  cout << first << endl;
  cout << second << endl;
  cout << "*" << greeting << "*" << endl;
  cout << second << endl;
  cout << first << std::endl;

  return 0;
}
   
  
