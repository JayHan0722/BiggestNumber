//Author : Jaehyun Han
#include<iostream>

int main()
{ 
  //declare variables here
  int Number_1;
  int Number_2;
  int Number_3;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>Number_1;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>Number_2;

  //determine if first or second is bigger and store that in a third variable
  if (Number_1 > Number_2)
  { Number_3 = Number_1;}
  else
  { Number_3 = Number_2;};
  
  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
  std::cout<<Number_3;

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
