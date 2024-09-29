#include <iostream>
#include <cmath>

int main() 
{
  float a, b, c, x1, x2;

  std::cout << "A:";
  std::cin >> a;

  std::cout << "B:";
  std::cin >> b;

  std::cout << "C:";
  std::cin >> c;

  x1 = (-b + pow(b*b - 4*a*c,0.5))/(2 * a);
  x2 = (-b - pow(b*b - 4*a*c,0.5))/(2 * a);

  std::cout << "X1=" << x1 << " x2=" << x2 << "\n";
}
