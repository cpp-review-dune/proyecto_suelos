#include <iostream>
#include <gmpxx.h>

int factorial(unsigned int number)
{
  if (number == 0)
    return 1;
  else
    return number * factorial(number - 1);
}

int main(int argc, char **argv)
{
  mpf_set_default_prec(4096);

  unsigned long long number;
  std::cout << "Ingrese el número n: ";
  std::cin >> number;

  std::cout << "n! es " << factorial(number) << "."
            << "\n";

  return 0;
}
