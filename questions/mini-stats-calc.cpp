# include <iostream>
# include <cmath>


namespace statistics{
  using decimal = double;
}

typedef statistics::decimal decimal;

int main(){
  int a, b , c;
  std::cin >> a >> b >> c;

  decimal avg = static_cast<double>(a + b + c)/3;
  decimal sqroot = decimal(sqrt(avg));
  decimal sq = pow(avg , 2);

  std::cout << "Average: "<< avg << std::endl;
  std::cout << "Squareroot: "<< sqroot << std::endl;
  std::cout << "Square: " << sq << std:: endl;

  return 0;
}
