# include <iostream>
#include <cmath>
using namespace std;



int square(int n){
  return pow(n, 2);
}

int main(){
  
  int a;
  cin >> a;

  cout << "Input: "<< a<< endl;
  cout << "Output: "<< square(a)<< endl;

  return 0;
}
