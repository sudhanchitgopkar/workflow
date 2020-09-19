#include <cstdlib>
#include <iostream>
#include "Account.h"

using namespace std;

/*
 * This file contains the "Driver" code for this project.
 */

 /*
  * This is the main method of your program. You should write code here which tests all
  * aspects of your Account class implementation. You are responsible for thoroughly
  * testing your code.
  *
  * Please note: code in this file will not be used in grading evaluation of your
  * assignment. We will use our own driver file which will use YOUR provided Account
  * implementation to test against project requirements.
  */
int main(){
  Account acc1("123456789012345678901");
  // acc1.setName("123456789012345678901");
  cout << acc1.getName() << endl;
  return EXIT_SUCCESS;
}
