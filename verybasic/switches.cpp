# include <iostream>
using namespace std;

int main(){
  int month;
  cout << "enter a month (1-12): ";
  cin >> month;

  switch (month){
    case 1:
      cout << "january" << endl;
      break;
    case 2:
      cout << "feb" << endl; break;
    case 3:
      cout << "march" << endl; break ;
    default:
      cout << "bhag na laude" << endl; break;
  }

  return 0;
}
