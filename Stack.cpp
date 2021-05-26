/*@author Orvin Tritama
*Stack.cpp
*Stack class
*/
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

//Constructor for stack
Stack::Stack(){
   char* arr = new char[size];
   size = 9;
   count = -1;
}

//This function is to remove and return the last char added to the array
char Stack::pop(){
   if(count == -1){
      cout << "STACK IS EMPTY";
      exit(1);
   }else{
      char temp;
      temp = arr[count];
      --count;
      return temp;
   }
}

//This function is to add char to the array
void Stack::push(char c){
   if(count == size){
      size = size*2;
   }
   count++;
   arr[count] = c;
}

//This function is to return the value of the last char in the array
char Stack::peek(){
   return arr[count];
}

//This function is to check if the stack is empty. True if empty, otherwise false
bool Stack::isEmpty(){
   return count == -1;
}

//This function is to delete the memory of array used for the stack 
void Stack::toDelete(){
    delete [] arr;
}


