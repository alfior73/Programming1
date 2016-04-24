/******************************

Name: Alfio Raymond

Date: 18 Apr 2016
Filename: Bullfighting.cpp

Desc: Ask the user for input and put it all together
*********************************/

#include <iostream>

#include <string>

using namespace std;

int main()

{   

      //Declare the variables   

      string adjective1, adjective2, adjective3, adjective4, clothing1, exclamation1, geoLocation1, noun2, body1, plNoun1, plNoun2, Italian1, Italian2;



     //Get the user input   

      cout << "Please enter an adjective: ";       
        getline(cin,adjective1);

      cout << "Please enter a second adjective: ";       
        getline(cin,adjective2);        

      cout << "Please enter a third adjective: ";   
        getline(cin,adjective3);            
        
      cout << "Please enter a fourth adjective: ";       
        getline(cin,adjective4);

      cout << "Please enter a noun: ";       
        getline(cin,clothing1);        

      cout << "Please enter an exclamation ";   
        getline(cin,exclamation1); 
      
      cout << "Please enter an Geographical Location: ";       
        getline(cin,geoLocation1);

      cout << "Please enter a noun: ";       
        getline(cin,noun2);        

      cout << "Please enter a part of the body ";   
        getline(cin,body1);            
        
      cout << "Please enter a plural noun: ";       
        getline(cin,plNoun1);

      cout << "Please enter a plural noun: ";       
        getline(cin,plNoun2);        

      cout << "Please enter an Italian word: ";   
        getline(cin,Italian1); 
    
      cout << "Please enter an Italian word: ";   
        getline(cin,Italian2); 

      //If statement   

      if (adjective1 != "" && adjective2 != "" && adjective3 != "" && adjective4 != "" && clothing1 != "" && exclamation1 != "" && geoLocation1 != "" && noun2 != "" && body1 != "" && plNoun1 != "" && plNoun2 != "" && Italian1 != "" && Italian2 != "") 

      {//string concatenation 

             results = "Bullfighting is a " + adjective1 + " sport which is very popular in " + geoLocation1 +
             ". A bullfighter is called a matador, and his equipment consists of a long, sharp " + noun2 +
             " called an "  + Italian1 + ", and a bright red " + clothing1 + ". He waves his " + noun2 +
             " at the bull, which makes the bull " + adjective2 +
             "and causes him to charge. The matador then goes through a series of " + adjective3 +
             " maneuvers to avoid getting caught on the bull\'s " + body1 +
             ". If the matador kills the bull, the spectators yell, \"" + Italian2 + " and throw their "+
             plNoun1 + " into the ring. If the bull wins, they yell " + exclamation1 +
             " and call for another matador. Bullfighting is a very " + adjective3 +
             " sport, but it will never be popular to America because Americans don't believe in cruelty to " +
             plNoun2 + "."; 

             cout << results << endl;

       } 

       else 

       { 

              cout << "You missed something. Go Back!"; 

       }     

       //end program    cout << endl << endl << endl;
       return 0;    

}  

