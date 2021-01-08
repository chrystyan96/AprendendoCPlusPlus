#include <iostream> //permite usar std::cin e std::cout
#include <stdio.h> //permite usar scanf_s
#include <fstream> //manipulação de arquivos
#include <string> //permite usar std::string
#include <sstream> //permite usar std::getline
#include <time.h> //added for the random number generator seed
#include <cstdlib>//added to use the rand function
#include <iomanip> //iomanip is a library that is used to manipulate the output of C++ program

using namespace std;

int NofScannedArguments = 0;

void manipularArquivos();
void arrays();
void arraySearches();
void headerFilesTest();
void multidimensionalArrays();
void pointers();
void randomTest();
void streamString();
void stringInput();
void userInput();
void passByReference();
void calculateByReference(float input1, float input2, char operation, float &result);
void printEquationByReference(float input1, float input2, char operation, float result);
void arrayAsParameter();
//Pass the array as a pointer
void arrayAsPointer(int* array, int size);
//Pass the array as a sized array
void arraySized(int array[3], int size);
//Pass the array as an unsized array
void arrayUnSized(int array[], int size);

//Atividade 1
//Atividade 1
//Atividade 1
void calculateFloorWallSurfaces();
void getUserInformation(string &name, string &number, string &address);
int getTaskAssignment();
void printTask(int task);
void getRoomInformation(int task, float& roomWidth, float& roomDepth, float& roomHeight);
void printJobInformation(string userName, string phoneNumber, string userAddress, string remodelRoom, int task);
float calcWallSurfaceArea(float roomWidth, float roomDepth, float roomHeight);
float calcPaintCost(float wallSurfaceArea, const float PAINTCOST);
float calcWallPaperCost(float wallSurfaceArea, const float WALLPAPERCOST);
void printWallCostComparisons(float paintCost, float wallpaperCost);
float calcFloorArea(float roomWidth, float roomDepth);
float calcCarpetCost(float floorArea, const float TILECOST);
float calcTileCost(float floorArea, const float TILECOST);
float calcWoodFloor(float floorArea, const float TILECOST);
void printFloorCostComparisons(float carpetCost, float tileCost, float woodFloorCost);
string getRoomChoice();

void manipularArquivos() {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to write to the file
    ifstream myfileO("input.txt");
    if (myfileO.is_open())
    {
        while (getline(myfileO, line))
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";
}

void arrays() {
    int userInput[40];

    //Enter the numbers into an array called userInput
    for (int i = 0; i < 40; i++)
    {
        NofScannedArguments = scanf_s("%d", & userInput[i]);
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

void arraySearches() {
    int searchKey = 0;
    int searchArray[10] = { 324,4567,6789,5421345,7,65,8965,12,342,485 };
    int location = 0;

    while (1)
    {
        std::cout << "Enter an integer ('-1' to quit): ";
        NofScannedArguments = scanf_s("%d", &searchKey);
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

void headerFilesTest() {
    cout << "Hello World! Testing header files!!";
}

void multidimensionalArrays() {
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

void pointers() {
    std::string name;
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    int* pointerGivenInt;
    int** pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

    //Get the values of each variable
    std::cout << "integer = \n";
    std::cin >> givenInt;
    std::cout << "float = \n";
    std::cin >> givenFloat;
    std::cout << "double = \n";
    std::cin >> givenDouble;
    //We need to use cin.ignore so cin will ignore 
   //the characters in the buffer leftover
   //from the givenDouble
    std::cin.ignore();
    std::cout << "character = \n";
    std::cin >> givenChar;

    std::cout << "string = \n";
    std::cin.ignore();
    std::getline(std::cin, givenString);


    //The value stored in the data
    std::cout << "integer = " << givenInt << "\n";
    std::cout << "float = " << givenFloat << "\n";
    std::cout << "double = " << givenDouble << "\n";
    std::cout << "string = " << givenString << "\n";
    std::cout << "character = " << (char)givenChar << "\n\n";

    //The address of the data - use pointers
    std::cout << "address integer = " << &givenInt << "\n";
    std::cout << "address float = " << &givenFloat << "\n";
    std::cout << "address double = " << &givenDouble << "\n";
    std::cout << "address string = " << &givenString << "\n";
    std::cout << "address character = " << (void*)&givenChar << "\n\n";

    //Use indirection to the get the value stored at the address
    std::cout << "pointer of givenInt = " << *pointerGivenInt << "\n";
    std::cout << "pointer of pointer of givenInt = " << **pointerPointerGivenInt << "\n";
}

void randomTest() {
    /*Goal: In the programming quiz, use a while loop to prompt
    **the user to guess a target number.
    **Tell the user if the guess is too high or too low.
    **The user enters 'q'  or guesses the target number to end
    **the program.
    */

    int target;
    std::string userString;
    int guess = -1;

    srand(time(NULL));  //set the seed for the random number generator
    target = rand() % 100 + 1; //generate the 'random' number

    while (guess != target)
    {
        std::cout << "Guess a number between 0 and 100 (or press 'q' to quit): ";
        std::getline(std::cin, userString);
        //convert to an int
        std::stringstream(userString) >> guess;
        std::cout << userString << "\n";
        if (guess > target)
            std::cout << "Your guess is too high\n";
        else if (guess < target)
            std::cout << "Your guess is too low\n";
        else
            std::cout << "You guessed the target!\n";

        //Note I had to use double quotes around "q"
        //because it is a string
        if (userString == "q")
        {
            std::cout << "good bye!";
            std::cout << "The number was " << target << "\n";
            break;
        }
    }
}

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

    string strLength, strWidth;
    int numLength;
    float numWidth;

    cout << "Qual a altura do quarto? ";
    getline(cin, strLength);
    cout << "\n";
    cout << "Qual a largura do quarto? ";
    getline(cin, strWidth);
    cout << "\n\n";

    stringstream(strLength) >> numLength;
    stringstream(strWidth) >> numWidth;

    cout << "A altura do quarto é de: " << numLength << "\n";
    cout << "A largura do quarto é de: " << numWidth << "\n";
    cout << "A area do quarto é de: " << numWidth * numLength;
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

void calculateByReference(float input1, float input2, char operation, float &result) {
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

//Atividade 1
//Atividade 1
//Atividade 1

void calculateFloorWallSurfaces() {
    //Cost of materials for the remodel
    const float PAINTCOST = .50; //per square foot
    const float WALLPAPERCOST = 2.00; //per square foot
    const float CARPETCOST = 4.00; //per square foot
    const float TILECOST = 5.50; //per square foot
    const float WOODCOST = 6.00; //per square foot

    //user information
    string userName = " ";
    string phoneNumber = " ";
    string userAddress = " ";
    string remodelRoom = " ";
    float roomWidth = 0;
    float roomDepth = 0;
    float roomHeight = 0;
    float wallSurfaceArea = 0;
    float floorArea = 0;
    int task = 0;

    //estimate variables
    int paintCost = 0;
    int wallpaperCost = 0;
    int carpetCost = 0;
    int tileCost = 0;
    int woodFloorCost = 0;

    //the possible task list
    enum task { paint, wallpaper, carpet, tile, woodFloor };

    getUserInformation(userName, phoneNumber, userAddress);
    remodelRoom = getRoomChoice();
    task = getTaskAssignment();

    getRoomInformation(task, roomWidth, roomDepth, roomHeight);

    //print the information of the user and room
    printJobInformation(userName, phoneNumber, userAddress, remodelRoom, task);

        //If a wall treatment is to be done, get the wall surface area
        //assume all four walls of the room are to be redone
        if (task == paint or task == wallpaper)
        {
            //calculate and print the estimates
            wallSurfaceArea = calcWallSurfaceArea(roomWidth, roomDepth, roomHeight);
            paintCost = calcPaintCost(wallSurfaceArea, PAINTCOST);
            wallpaperCost = calcWallPaperCost(wallSurfaceArea, WALLPAPERCOST);
            printWallCostComparisons(paintCost, wallpaperCost);
        }

    //if a floor is to be done, get the square footage of the room
    if (task == carpet or task == tile or task == woodFloor)
    {
        //calculate and print the estimates
        floorArea = calcFloorArea(roomWidth, roomDepth);
        carpetCost = calcCarpetCost(floorArea, CARPETCOST);
        tileCost = calcTileCost(floorArea, TILECOST);
        woodFloorCost = calcWoodFloor(floorArea, WOODCOST);
        printFloorCostComparisons(carpetCost, tileCost, woodFloorCost);
    }
}

void getUserInformation(string &userName, string  &phoneNumber, string &userAddress)
{
    cout << "Customer Name: \n";
    getline(cin, userName);

    cout << "Customer Phone Number: \n";
    getline(cin, phoneNumber);

    cout << "Customer Address: \n";
    getline(cin, userAddress);
}

string getRoomChoice()
{//We don't do anything with this information in the program
    string room;
    cout << "What room are we remodeling?: \n";
    getline(std::cin, room);
    return room;
}

int getTaskAssignment()
{  //the possible task list
   //enum task {paint, wallpaper, carpet, tile, woodFloor};
    int task;
    std::cout << "What job needs to be done?\n";
    std::cout << "0: Wallpaper\n";
    std::cout << "1: Paint\n";
    std::cout << "2: Carpet\n";
    std::cout << "3: Tile\n";
    std::cout << "4: Wood Floor\n";
    cin >> task;
    return task;
}

void printTask(int task)
{//depending on which task was selected, print the corresponding string
    switch (task) {
    case 0:
        std::cout << " paint ";
        break;
    case 1:
        std::cout << " wallpaper ";
        break;
    case 2:
        std::cout << " carpet ";
        break;
    case 3:
        std::cout << " tile ";
        break;
    case 4:
        std::cout << " wood floor ";
        break;
    default:
        std::cout << " Ivalid task ";
    }
}

void getRoomInformation(int task, float &roomWidth, float &roomDepth, float &roomHeight)
{//all the tasks require the width and depth. 
 //wall treatments require the height also
    std::cout << "What is the room width? \n";
    std::cin >> roomWidth;
    std::cout << "What is the room depth? \n";
    std::cin >> roomDepth;
    if (task == 0 or task == 1)
    {
        std::cout << "What is the room height? \n";
        std::cin >> roomHeight;
    }
}

void printJobInformation(string userName, string phoneNumber, string userAddress, string remodelRoom, int task)
{//print user information. This is the only place the
 //remodel room string is used
    cout << "\n\nPreparing order for:\n\n" << userName << "\n";
    cout << "\t" << phoneNumber << "\n";
    cout << "\t" << userAddress << "\n";
    cout << "\t" << "Remodeling the " << remodelRoom << " with";
    printTask(task);
}

float calcWallSurfaceArea(float roomWidth, float roomDepth, float roomHeight)
{//Calculate the wall surface area. Assume the room is rectangluar
 //Assume the two walls opposite each other are the same
    float wallWide = roomWidth * roomHeight * 2;//two walls
    float wallDeep = roomDepth * roomHeight * 2;//two walls
    return wallWide + wallDeep;
}

float calcPaintCost(float wallSurfaceArea, const float PAINTCOST)
{//cost estimates are simply surface area times material per sq. foot
    return PAINTCOST * wallSurfaceArea;
}

float calcWallPaperCost(float wallSurfaceArea, const float WALLPAPERCOST)
{//cost estimates are simply surface area times material per sq. foot
    return WALLPAPERCOST * wallSurfaceArea;
}

void printWallCostComparisons(float paintCost, float wallpaperCost)
{//print the estimates for the wall coverings
    std::cout << "\nPaint Estimate: "<<paintCost<<"\n\n";
        std::cout << "Wallpaper Estimate: " << wallpaperCost << "\n\n";
}

float calcFloorArea(float roomWidth, float roomDepth)
{
    return roomWidth * roomDepth;
}
float calcCarpetCost(float floorArea, const float CARPETCOST)
{//cost estimates are simply surface area times material per sq. foot
    return CARPETCOST * floorArea;
}
float calcTileCost(float floorArea, const float TILECOST)
{//cost estimates are simply surface area times material per sq. foot
    return TILECOST * floorArea;
}
float calcWoodFloor(float floorArea, const float WOODCOST)
{//cost estimates are simply surface area times material per sq. foot
    return WOODCOST * floorArea;
}
void printFloorCostComparisons(float carpetCost, float tileCost, float woodFloorCost)
{//print the estimates for the floor coverings
    cout << "\n\t\tCarpet Estimate: " << carpetCost;
    cout << "\n\t\tTile Estimate: " << tileCost;
    cout << "\n\t\tWood Estimate: " << woodFloorCost;
}

