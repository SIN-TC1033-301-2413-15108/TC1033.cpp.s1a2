#include <iostream>
#include <iomanip>

int main() 
{
  float y;
  float x,d,p;

  std::cout << "Tu Edad en la Tierra:\n";
  std::cin >> x;

  std::cout << "¿En que plante te gustaría conocer tu Edad?\n";
  std::cout << "(1) Mercurio \n";
  std::cout << "(2) Venus \n";
  std::cout << "(3) Jupiter \n";
  std::cout << "(4) Saturno \n";
  std::cout << "Selecciona el planeta=>\n";
  std::cin >> p;

  if (p==1)
    d = 88;
  else if (p==2)
    d = 225;
  else if (p==3) 
    d = 4380;
  else if (p==4)
    d = 10767;
  else
    d = 1;

  y = x * 365 / d;

  std::cout << "Tu edad en el planeta seleccionado sería " << y << " años\n";
}
