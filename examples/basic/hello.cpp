// extract to string
#include <iostream>
#include <string>

int main ()
{
  std::string lastname, parents;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,lastname);
  std::cout << "Hello, " << lastname << "!\n";
  std::cout << "please enter your parents : ";
  std::getline (std::cin,parents);
  std::cout << "Saludos, "<<parents<<"!\n";

  return 0;
}