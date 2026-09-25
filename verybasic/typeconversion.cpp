# include <iostream>
using namespace std;

int main(){
  int a = 7;
  int b = 2;

  
  cout << a/ b << endl; // this is the normal integer division
  cout <<(float) a / b << endl; // this is the type changed version
  cout << float(a/b) << endl; 

  return 0;
}
