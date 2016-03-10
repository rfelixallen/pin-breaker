#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "You have " << argc << " command line arguments.\n";
    for (int count=0; count < argc; ++count)
        std::cout << count << " " << argv[count] << '\n';
    std::cout << "The number you passed in is " << argv[1] << ".\n";
 
    // Method 1: Try all numbers from 0000 to 9999
    //for (int count=0; count < 10000; ++count)
    int i1 = 0;
    int z1 = 0;
    int i2 = 0000;
    int i3 = 05;

    if (i1 == z1)
    	std::cout << i1 << " is equal to " << z1 << ".\n";

    return 0;
}