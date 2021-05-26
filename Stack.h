/*@author Orvin Tritama
*Stack.h
*Stack header
*/

#ifndef STACK_H
#define STACK_H

class Stack{
   public:
      Stack(); //Constructor
      char pop();
      void push (char c);
      char peek();
      bool isEmpty();
      void toDelete(); //Delete the memory of array used in stack
        
   private:
      char* arr = new char[size];
      int size; //Size of array
      int count = 0; //Number of elements in array
};

#endif