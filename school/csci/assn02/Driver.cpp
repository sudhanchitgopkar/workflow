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
  cout << "TESTER CLASS FOR ASSN02" << endl;
  cout << "First line is EXPECTED output, second is ACTUAL output. Matches mean SUCCESS." << endl;
  cout << endl;

  //testing constructor name cases
  
  cout << "12345678901234567890" << endl;
  Account acc1("123456789012345678901");
  cout << acc1.getName() << endl;

  cout << endl;
  
  cout << "Dawgs" << endl;
  Account acc2("");
  cout << acc2.getName() << endl;

  cout << endl;

  cout << "Account3" << endl;
  Account acc3("Account3");
  cout << acc3.getName() << endl;

  cout << endl;
  
  //testing setName cases
  cout << "12345678901234567890" << endl;
  acc1.setName("1234567890123456789012");
  cout << acc1.getName() << endl;

  cout << endl;
    
  cout << "Dawgs" << endl;
  acc1.setName(" ");
  cout << acc1.getName() << endl;

  cout << endl;
  
  cout << "Account1" << endl;
  acc1.setName("Account1");
  cout << acc1.getName() << endl;

  cout << endl;
  
  //testing balance cases
  cout << "0" << endl;
  cout << acc1.getBalance() << endl;

  cout << endl;

  cout << "0" << endl;
  acc1.setBalance(-100);
  cout << acc1.getBalance() << endl;
 
  cout << endl;

  cout << "100.01" << endl;
  acc1.setBalance(100.01);
  cout << acc1.getBalance() << endl;

  cout << endl;
  
  cout << "100" << endl;
  acc3.setBalance(100);
  cout << acc3.getBalance() << endl;

  cout << endl;

  //testing deposit
  cout << "100.01" << endl;
  acc1.deposit(-0.01);
  cout << acc1.getBalance() << endl;

  cout << endl;

  cout << "101" << endl;
  acc1.deposit(0.99);
  cout << acc1.getBalance() << endl;

  cout << endl;
  //testing withdraw
  cout << "101" << endl;
  acc1.withdraw(-0.01);
  cout << acc1.getBalance() << endl;

  cout << endl;

  cout << "101" << endl;
  acc1.withdraw(101.01);
  cout << acc1.getBalance() << endl;

  cout << endl;
  
  cout << "100.01" << endl;
  acc1.withdraw(0.99);
  cout << acc1.getBalance() << endl;

  cout << endl;
  
  //testing interest
  cout << "110" << endl;
  acc3.interest(0.1);
  cout << acc3.getBalance() << endl;
  
  cout << endl;
  acc3.setBalance(100);
  
  cout << "80" << endl;
  acc3.interest(-0.2);
  cout << acc3.getBalance() << endl;

  cout << endl;
  acc3.setBalance (100);
  
  cout << "100" << endl;
  acc3.interest(0);
  cout << acc3.getBalance() << endl;
  
  cout << endl;
  
  //testing transfer
  cout << "0.01,200" << endl;
  acc1.transferTo(100,acc3);
  cout << acc1.getBalance() << "," << acc3.getBalance() << endl;

  cout << endl;
  
  cout << "100.01,100" << endl;
  acc3.transferTo(100,acc1);
  cout << acc1.getBalance() << "," << acc3.getBalance() << endl;
  
  
  return EXIT_SUCCESS;

}
