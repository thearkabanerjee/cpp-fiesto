# include <iostream>
# include <cmath>
using namespace std;

int main(){
  int a;
  cin >> a;
  

  double m = sqrt(a);
  double c = pow(21, 3);

  cout << m <<" " << c <<  endl;



  // gives access to these
  // sqrt(), pow(), abs(), round(), ceil(), floor()
  //
  cout << abs(-5.9) << endl; // returns the positive number
                             //
  cout << round(12.99) << " " << round(12.5) << endl;

  cout << ceil(12.7) <<endl; // higher limit
  cout << floor(12.7) << endl; // lower limit
  return 0;
}
