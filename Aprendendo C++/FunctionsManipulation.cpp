#include "FunctionsManipulation.h"

void passByReference() {
    float input1, input2, result;
    char operation;
    std::cout << "Digite o primeiro valor = ";
    std::cin >> input1;
    std::cout << "Digite o segundo valor = ";
    std::cin >> input2;
    std::cout << "Digite a operacao (+, -, *, /) = ";
    std::cin >> operation;
    std::cout << "\n";

    calculateByReference(input1, input2, operation, result);
    printEquationByReference(input1, input2, operation, result);
}

void calculateByReference(float input1, float input2, char operation, float& result) {
    switch (operation) {
    case '+': {
        result = input1 + input2;
        break;
    }
    case '-': {
        result = input1 - input2;
        break;
    }
    case '*': {
        result = input1 * input2;
        break;
    }
    case '/': {
        result = input1 / input2;
        break;
    }
    }
}


void printEquationByReference(float input1, float input2, char operation, float result) {
    std::cout << input1 << " " << operation << " " << input2 << " = " << result;
    std::cout << "\n\n";
}

//C++ does not allow arrays to be passed to functions, but, as we have seen, it does allow pointers to be passed.
//C++ does not allow arrays to be passed to functions, but, as we have seen, it does allow pointers to be passed.
//C++ does not allow arrays to be passed to functions, but, as we have seen, it does allow pointers to be passed.

void arrayAsParameter() {
    const int size = 3;
    int array[size] = { 33,66,99 };
    //We are passing a pointer or reference to the array
    //so we will not know the size of the array
    //We have to pass the size to the function as well
    arrayAsPointer(array, size);
    arraySized(array, size);
    arrayUnSized(array, size);
}

void arrayAsPointer(int* array, int size)
{
    std::cout << std::setw(5);
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

void arraySized(int array[3], int size)
{
    std::cout << std::setw(5);
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

void arrayUnSized(int array[], int size)
{
    std::cout << std::setw(5);
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}
