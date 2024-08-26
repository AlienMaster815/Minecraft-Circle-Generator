// MiecraftCircleGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdint.h>

int main()
{
    while (1) {
        //std::cout << "Hello World!\n";

        long double r = 0x00, Index = 0x00;

        while (true) {
            std::cout << "Chose your radious\n";
            std::cin >> r;

            // Check if the input failed (meaning it wasn't an integer)
            if (std::cin.fail()) {
                std::cin.clear(); // Clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter an integer: ";
            }
            else {
                break; // Exit the loop if input was successful
            }
        }

        const long double C2 = r * r;

        for (Index = r; Index > 0; Index--) {
            long double Result = sqrt((C2 - (Index * Index)));
            //odd pemdas for sanity check i dont trust MSVC or anything by microsoft 

            //round the result
            if (Result >= 5) {
                Result = ceill(Result);
            }
            else {
                Result = floorl(Result);
            }
            std::cout << "Point At:X " << Result << ":Y:" << Index << std::endl;

        }
    }
    return -1; //program exited sudenly


 }