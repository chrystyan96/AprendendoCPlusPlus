#include "Overloading.h"

int Overloading::findSmaller(int input1, int input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}
float Overloading::findSmaller(float input1, float input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

char Overloading::findSmaller(char input1, char input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

void Overloading::print() {
    std::cout << findSmaller(a, b) << " is the smaller of " << a << " and " << b << "\n";
    std::cout << findSmaller(f1, f2) << " is the smaller of " << f1 << " and " << f2 << "\n";
    std::cout << findSmaller(c1, c2) << " is the smaller of " << c1 << " and " << c2 << "\n";
}
