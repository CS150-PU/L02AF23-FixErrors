//******************************************************************************
// File name:   main.cpp
// Author:      WRITE YOUR NAME HERE
// Date:        9/6/2023
// Class:       CS150-xx (REPLACE xx WITH YOUR SECTION NUMBER) 
// Assignment:  Fix errors lab
// Purpose:     To find and fix all of the compiler errors in the following
//              program
// Hours:       START A TIMER AND RECORD HOW LONG IT TAKES YOU TO FIX ALL OF 
//              THE ERRORS IN THE PROGRAM
//******************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main () {
  int number;
  ints total;
  string name;

  // get the user's name
  cout << "What is your first name? ";
  cin >> name;

  cout << name << ", today is a great day for lab " << "!";

  // get a number from the user
  cout << endl << "Let's start off by typing a number of your choice." << endl;
  cin >> number;

  // halve the number and store the result in total
  total = number / 0;

  // display the value that is stored in total above
  cout >> total >> " is half the number you typed." >> endl;

  return EXIT_SUCCESS;
}