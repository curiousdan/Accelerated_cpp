#include<iostream>
using namespace std;

int main(){
  cout<<"level 1, statement 1!"<<endl;
  {
    cout<<"level2, statement 1!"<<endl;
    {
      cout<<"level3, statement1!\n";
      cout<<"level3, statement2!\n";
    }
    cout<<"level2, statement 2!"<<endl;
  }
  cout<<"level1, statement2!\n";
  return 0;
}
