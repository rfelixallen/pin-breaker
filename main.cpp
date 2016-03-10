#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "You have " << argc << " command line arguments.\n";
    for (int count=0; count < argc; ++count)
        std::cout << count << " " << argv[count] << '\n';
    std::cout << "The number you passed in is " << argv[1] << ".\n";
 
    return 0;
}