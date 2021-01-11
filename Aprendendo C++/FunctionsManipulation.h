#include <iostream>
#include <iomanip> //iomanip is a library that is used to manipulate the output of C++ program


void passByReference();
void calculateByReference(float input1, float input2, char operation, float& result);
void printEquationByReference(float input1, float input2, char operation, float result);
void arrayAsParameter();
//Pass the array as a pointer
void arrayAsPointer(int* array, int size);
//Pass the array as a sized array
void arraySized(int array[3], int size);
//Pass the array as an unsized array
void arrayUnSized(int array[], int size);
