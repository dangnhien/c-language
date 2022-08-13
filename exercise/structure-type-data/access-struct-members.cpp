#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct myStructure
{
    int myNum;
    string myString;
};

typedef struct myStructure myStructures;

void input(myStructures &structs)
{
    structs.myNum=10;
    structs.myString = "nguyen duc dat";
}

void output(myStructures structs)
{
    cout << structs.myNum << "\n";
    cout << structs.myString << "\n";
}

int main()
{
    myStructures my_structures;

    my_structures.myNum = 1;
    my_structures.myString = "hello world!";

    input(my_structures);

    output(my_structures);

    return 0;
}