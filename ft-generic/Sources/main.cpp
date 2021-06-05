#include "utlz.h"
#include <iostream>

template <typename T>
void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

// overloading 
template <typename T>
void swap(T a[],T b[], int size) {

}

int main() 
{
  std::string a = "fdsfsd";
  std::string b = "bnfgdhfdg";
  swap(a, b);
  utlz::printer();
  std::cout << a << b << std::endl;
}