#include <iostream>

int main(int argc, char **argv)
{
  double x= -0.6e3; //g4bits, 8 bytes, 1.0e-16, 2^1024
  long double y=-9.6e3; // >64 bits
  float z=10.54e-8; // 32 bits, 1.0e-6, 10^40
  int a= 5678 ; // 64 bits 
  long int b=-9713783434; // Puede tener signo
  short int c= 657; //
  char l= 'a';
  bool flag =true;
  
  std::cout<< sizeof(short int) << std::endl;
  std::cout << sizeof(long int) << std::endl;
  std::cout << sizeof(int) << std::endl;
  
  return 0;
}
