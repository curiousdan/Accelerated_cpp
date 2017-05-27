#include <iostream>
#include <string>
using namespace std;

int main(){
  {
    const string s = "a string";
    cout << s << endl;
    //const string s = "b string";
    //cout << s << endl;
    {
      const string s = "b string";
      cout << s << " @ scope within"<< endl;
    }
    cout << s << endl;
 
   }
  
  return 0;
}
