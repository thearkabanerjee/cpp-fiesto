# include <iostream>
using namespace std;


int main(){
  int a;

  srand(time(NULL));
  cout << "Numbers: ";
  for (int i = 0; i < 20; i++){
    a = (rand() % 50 ) + 1;
    
    cout << a << " ";
  }

  cout << endl; 
  return 0;
}
