#include "ArraysVectors.h"

int NofScannedArguments = 0;

void ArraysVectors::arrays() {
    /*Goal: Practice array manipulation in C++.
     **The user will input 40 integers.
     **Put them into an array. Then print the array in the order the numbers were
     **entered. Then print in reverse order. Then sort the array in ascending order
     **and print it.
     */

    int userInput[40];

    //Enter the numbers into an array called userInput
    for (int i = 0; i < 40; i++)
    {
        std::cout << "\nEnter with a value: ";
        scanf_s("%d", &userInput[i]);
    }
    //print the array
    std::cout << "\nThe array\n";
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
    //print the array in reverse order
    std::cout << "\n\nThe array in reverse order\n";
    for (int i = 39; i >= 0; i--)
    {
        std::cout << userInput[i] << " ";
    }
    //sorting the array
    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 39 - i; j++)
        {
            if (userInput[j] > userInput[j + 1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }
    std::cout << "\n\nThe array sorted\n";
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
}

void ArraysVectors::arraySearch() {
    /*Goal: practice searching an array in C++
    **There is an array of integers. The length of the arrays to be searched
    **varies. A user will enter a postive integer and the program will search the array.
    **If the value is in the array, the program will return the location of
    **the element. If the value is not in the array, the user will be notified
    **that the value is not in the array. To exit the program the user will enter -1.
    */

    int searchKey = 0;
    int searchArray[10] = { 324,4567,6789,5421345,7,65,8965,12,342,485 };
    int location = 0;

    while (1)
    {
        std::cout << "Enter an integer ('-1' to quit): ";
        scanf_s("%d", &searchKey);
        std::cout << searchKey << "\n";
        if (searchKey == -1)
        {
            break;
        }
        for (int i = 0; i < 10; i++)
        {
            if (searchKey == searchArray[i])
            {
                location = i;
                break;
            }
            location = -1;
        }
        if (location != -1)
        {
            std::cout << searchKey << " is at location " << location << " in the array.\n";
        }
        else
        {
            std::cout << searchKey << " is not in the array.\n";
        }
    }
}

void ArraysVectors::multidimensionalArrays() {
    /*Goal: practice using multidimensional arrays.
    **Write a program that will accept values for a 4x4 array
    **and a vector of size 4.
    **Use the dot product to multiply the array by the vector.
    **Print the resulting vector.
    */

    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector

    int inputArray[4][4];
    int inputVector[4];
    int dotVector[4];
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Digite um valor: ";
            NofScannedArguments = scanf_s("%d", &inputArray[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "inputArray[" << i << "][" << j << "] = " << inputArray[i][j] << "\n";
        }
    }

    for (int i = 0; i < 4; i++) {
        NofScannedArguments = scanf_s("%d", &inputVector[i]);
    }

    for (int i = 0; i < 4; i++) {
        std::cout << "inputVector[" << i << "] = " << inputVector[i] << "\n";
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum = (inputArray[i][j] * inputVector[i]) + sum;
        }
        dotVector[i] = sum;
        sum = 0;
    }

    for (int i = 0; i < 4; i++) {
        std::cout << "dotVector[" << i << "] = " << dotVector[i] << "\n";
    }
}

