# include <iostream>
# include <cmath>



namespace Geometry{
  using decimal = double;
}

typedef Geometry::decimal decimal;

int main(){
  float a;
  std::cout << "Enter the radius: " ;
  std::cin >> a;

  decimal radiussq = pow(a, 2);
  
  decimal circumference = 2 * M_PI * a;
  decimal area = M_PI * radiussq;


  std::cout << "Area: "<< area << std::endl;
  std::cout << "Circumference: "<< circumference << std::endl;
  return 0;
}
