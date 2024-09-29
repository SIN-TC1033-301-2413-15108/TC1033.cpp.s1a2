#include <iostream>
#include <iomanip>

int main() 
{
  float c, f;

  std::cout << "Temperatura en grados Celsius:\n";
  std::cin >> c;

  f = c * 9 / 5 + 32;

  std::cout << std::setprecision(2) << std::fixed << c << " grados Celsius son " << f << " grados Farenheit\n";
}
