#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {

public:
  // add constructors here -- see description in assignment
  explicit Account (std::string name) {
    if (name.length() < 5) {
      accountName = "Dawgs";
    } else if (name.length() > 20) {
      accountName = name.substr(0,20);
    } else {
      accountName = name;
    } //if
  } //constructor
  double getBalance() {
    // add code here -- a basic getter, return the balance of the account
    return accountBalance;			/* replace this */
  }

  void setBalance(double balance) {
    // add code here -- a basic setter, return nothing.
    if (balance >= 0) {
      accountBalance = balance;
    } //if
  }
  
  double deposit(double depositAmount) {
    // your code should check to ensure that depositAmount is positive (e.g.
    // deposit 100 dollars). It should only update the account balance if it is
    // positive. Returns balance after any changes

    // add code here
    if (depositAmount >= 0) {
      accountBalance += depositAmount;
    } //if
    return accountBalance;			/* replace this */
  }

  double withdraw(double withdrawalAmount) {
    // This method should ensure that the withdrawalAmount is positive (e.g.
    // withdraw 100 dollars). It should only update the account balance if the
    // account can cover the withdrawal. Returns balance after any changes
    
    // add code here
    if (withdrawalAmount >= 0 && accountBalance >= withdrawalAmount) {
      accountBalance -= withdrawalAmount;
    } //if
    return accountBalance;			/* replace this */
  }

  double interest(double percent) {
    // This method should accept percent (positive or negative). (e.g. to grow
    // the account by 10% you would call interest(0.1). To decay the account by
    // 20% you would call interest(-0.2)) Returns balance after any changes

    // add code here
    accountBalance = accountBalance * (1 + percent);
    return accountBalance;			/* replace this */
  }

  std::string getName() const {
    // add code here
    return accountName;			/* replace this */
  }

  void setName(std::string newName) {
    // Your code should ensure that the name of the account has a max of 20
    // characters. If the newName passed to this function is longer than 20, you
    // should set the account name to be the first 20 characters of the
    // argument.

    // add code here
    if (newName.length() < 5) {
      accountName = "Dawgs";
    } else if (newName.length() > 20) {
      accountName = newName.substr(0,20);
    } else {
      accountName = newName;
    } //if
  }

  // write the transferTo method here -- see assignment
  bool transferTo(double amount, Account& otherAccount) {
    // add code here
    if (amount > accountBalance) {
      return 0;
    } else {
      double otherAccountBalance = otherAccount.getBalance();
      otherAccount.setBalance(otherAccountBalance + amount);

      accountBalance -= amount;

      return 1;
    } //if
  }

private:
  // add more code here -- see description in assignment
  std::string accountName = "";
  double accountBalance = 0;
};

#endif

