/*@author Orvin Tritama
*brackets.cpp
*This is a program to check whether the sentence of brackets are good or bad (good if brackets are open and closed in order, bad if brackets are closed in wrong order or not closed)
*/
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

//Function prototypes
void checkBrackets(string s, Stack stack1);

int main(){
   //Creating new stack object
   Stack stack1;
   
   //Declaring new string
   string s;
   //Prompt user to input a string
   cout << "Enter a sentence to check for brackets" << endl;
   getline(cin,s);
   
   //Calling function checkBrackets to check for brackets
   checkBrackets(s,stack1);
   
   //Delete the memory of array used in stack1
   stack1.toDelete();
   return 0;
}

/*@param string s 
*@param object stack
*This function is to print to check if the brackets are good or not
*@return nothing
*/
void checkBrackets(string s, Stack stack1){
   for(int i =0;i<s.length();i++){
      if(s[i] == '(' || s[i] == '<' ||s[i] == '[' ||s[i] == '{'){
         stack1.push(s[i]);
      }else if(s[i] == ')' && stack1.peek() == '('){
         stack1.pop();
      }else if(s[i] == '>' && stack1.peek() == '<'){
         stack1.pop();
      }else if(s[i] == ']' && stack1.peek() == '['){
         stack1.pop();
      }else if(s[i] == '}' && stack1.peek() == '{'){
         stack1.pop();
      }else if(s[i] == ')' && stack1.peek() != '('){
         cout <<"WRONG ORDER CLOSING BRACKET";
         exit(1);
      }else if(s[i] == '>' && stack1.peek() != '<'){
         cout <<"WRONG ORDER CLOSING BRACKET";
         exit(1);
      }else if(s[i] == ']' && stack1.peek() != '['){
         cout <<"WRONG ORDER CLOSING BRACKET";
         exit(1);
      }else if(s[i] == '}' && stack1.peek() != '{'){
         cout <<"WRONG ORDER CLOSING BRACKET";
         exit(1);
      }
   }
   if(!stack1.isEmpty()){
      cout << "NOT CLOSING ALL BRACKETS";
      exit(1);
   }else{
      cout << "GOOD BRACKETS";
   }
}


