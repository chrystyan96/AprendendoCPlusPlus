#include "StringManipulation.h"

void streamString() {
    //Converte string para outros tipos de variáveis

    /*Goal: practice using stringstream
    /*Goal: practice getting string inputs and
     **converting them to numeric variables using
     **stringstream.
     **
     **Prompt the user for the length of a room.
     **Then prompt for the width of the room.
     **Print out the area of the room.
     */

    std::string strLength, strWidth;
    int numLength;
    float numWidth;

    std::cout << "Qual a altura do quarto? ";
    getline(std::cin, strLength);
    std::cout << "\n";
    std::cout << "Qual a largura do quarto? ";
    getline(std::cin, strWidth);
    std::cout << "\n\n";

    std::stringstream(strLength) >> numLength;
    std::stringstream(strWidth) >> numWidth;

    std::cout << "A altura do quarto é de: " << numLength << "\n";
    std::cout << "A largura do quarto é de: " << numWidth << "\n";
    std::cout << "A area do quarto é de: " << numWidth * numLength;
}

void stringInput() {
    std::string nome1, nome2;
    std::string endereco1, endereco2;
    std::string telefone1, telefone2;

    std::cout << "User1 escreva seu nome: ";
    std::getline(std::cin, nome1);
    std::cout << "User1 escreva seu endereço: ";
    std::getline(std::cin, endereco1);
    std::cout << "User1 escreva seu telefone: ";
    std::getline(std::cin, telefone1);

    std::cout << "User2 escreva seu nome: ";
    std::getline(std::cin, nome2);
    std::cout << "User2 escreva seu endereço: ";
    std::getline(std::cin, endereco2);
    std::cout << "User2 escreva seu telefone: ";
    std::getline(std::cin, telefone2);

    std::cout << "\n\nInformações do User1!" << std::endl;
    std::cout << nome1 << "\n";
    std::cout << "\t\t" << endereco1 << "\n";
    std::cout << "\t\t" << telefone1 << "\n";

    std::cout << "\nInformações do User2!" << std::endl;
    std::cout << nome2 << "\n";
    std::cout << "\t\t" << endereco2 << "\n";
    std::cout << "\t\t" << telefone2 << "\n";
}

void userInput() {
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user
    std::cout << "What year is your favorite? ";

    //get the user response and assign it to the variable year
    std::cin >> year;

    //output response to user
    std::cout << "How interesting, your favorite year is " << year << "!\n";

    //print a message to the user
    std::cout << "At what age did you learn to ride a bike? ";

    //get the user response and assign it to the variable age
    std::cin >> age;

    //output response to user
    std::cout << "How interesting you learned to ride at " << age << "!\n";

    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello " << name << " !\n";
}
