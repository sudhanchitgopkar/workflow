#include <iostream>
#include "bitsum.h"

using namespace std;

int main() {

  unsigned long int inputVal = 0;

  //asking for, recieving input
  cout << "please enter an unsigned int" << std::endl;
  cin >> inputVal;

  //input value checking
  
  //computing, returning numberOfOnes
  cout << numberOfOnes(inputVal) << endl;
    
  return 0;
}
