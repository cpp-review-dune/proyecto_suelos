#include<iostream>
#include<stdio.h>
int main(){
int x;
//prompt the user for input;
std::cout<<"Enter the integer\n";

//get input
std::cin>>x;

// check and see if the input statement succeeded
  if (std::cin.good() == false) {
    std::cout << "That was not an integer." << std::endl;
    return -1;
  }

// print the value we got from the user
  std::cout << x << std::endl;
  std::string name;
  std::cout << "What is your name? \n";
  std::cin >> name;
  std::cout << name << std::endl;
  return 0;
}