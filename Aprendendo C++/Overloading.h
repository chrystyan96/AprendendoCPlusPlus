#include<iostream>

class Overloading {
    int a = 5;
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';

public:
    //C++ allows us to 'overload' the same function name as long as
    //the variable types in the function inputs are different.
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    void print();
};

