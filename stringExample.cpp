/*******************************

Filename: stringClass2.cpp
Written by: Alfio Raymond
Created on: 17 April 2016
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
 string message;
 
 cout << "Enter a message:\n";
 
 getline(cin, message);
 
 cout << "The string just entered is:\n" << message << endl;
 
cout << endl << endl << endl;
return 0;
}
