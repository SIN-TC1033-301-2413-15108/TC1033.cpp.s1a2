#include <iostream>
#include <cmath>

int main() 
{
  float p,r,d;
  int n;

  std::cout << "P:";
  std::cin >> p;

  std::cout << "R:";
  std::cin >> r;

  std::cout << "N:";
  std::cin >> n;

  d = p * (1-pow(r/100,n+1))/(1-(r/100));

  std::cout << "Total de dinero=$" << d << "\n";
}
