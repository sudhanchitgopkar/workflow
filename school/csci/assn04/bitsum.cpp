#include <iostream>
#include "bitsum.h"

int numberOfOnes(unsigned long int value) {
  int rem = 0;
  int numOfOnes = 0;

  while (value >= 1) {
    rem = value % 2;
    value =  value / 2;
   // std::cout << "value: "<< value << std::endl;
    if (rem == 1) {
      numOfOnes++;
    } //if
    rem = 0;
  } //while
  return numOfOnes;
}
