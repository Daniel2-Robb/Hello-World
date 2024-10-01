// Hello World.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //output 'hello world' to command line
    std::cout << "Hello World!\n";

    //initialise two integer variables
    int a = 0;
    int b = 3;
    int c = 0;
    //ask user to enter number
    std::cout << "Please enter a number: ";

    //assign entered number into 'a'
    std::cin >> a;

    //ask user to enter number
    std::cout << "Please enter a number: ";

    //assign entered number into 'b'
    std::cin >> b;

    //adds 'a' and 'b' to 'c'
    c = int(a + b);

    //output 'a' to command line
    std::cout << "Your number is " << c << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
