# include <iostream>


namespace first {
  int a = 1;
}
namespace second {
  int a = 2;
}

int main(){
  int a = 0;
 



  std::cout << first::a  << '\n' << second::a << a << std::endl;


  // in short namespaces are better used to manage a lot of variables of the same name

  return 0;
}
