# include <iostream>
using namespace std;

typedef string String; // just giving a new name to a type && exactly like setting an alias
typedef int Number;
int main(){
  Number a;
  String m;
  int b = 13; // basically i can use both int and Number, so the type and the alias both can be used

  a = 12;
  m = "hello world";

  cout << m << " "<< a << " " << b << endl;


  return 0;
}
