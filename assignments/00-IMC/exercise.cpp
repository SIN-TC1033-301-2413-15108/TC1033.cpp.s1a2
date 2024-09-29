#include <iostream>

int main() 
{
  float w, h;
  float imc;

  std::cout << "Peso:\n";
  std::cin >> w;

  std::cout << "Altura:\n";
  std::cin >> h;

  imc = (float) w / ( h * h );

  std::cout << "IMC:" << imc << "\n";
}
