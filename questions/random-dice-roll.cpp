# include <iostream>
using namespace std;


int main(){
  int a;
  srand(time(NULL));

  int count  = 0;
  for (int i = 0; i < 10 ; i++){
    
    a = rand()%6;
    cout << a+1 << endl;
    if (a+1 == 6){
      count++;
    }
  }
  

  cout << count << endl;
  return 0;
}
