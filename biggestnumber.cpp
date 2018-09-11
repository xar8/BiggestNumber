//Author:
#include<iostream>

int main()
{
  //declare variables here
  int number1;
  int number2;
  int biggest;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>> number1;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>> number2;
  //determine if first or second is bigger and store that in a third variable
  if (number1 > number2) 
       { 
        biggest = number1;
       }
  else if (number2 > number1) 
       {
         biggest = number2;
       } 
       
  //print out the variable representing the biggest number
  
  std::cout<<"Of those two numbers, the biggest is: " << biggest << "Thank you for playing.\n";
  
  return 0;
}
