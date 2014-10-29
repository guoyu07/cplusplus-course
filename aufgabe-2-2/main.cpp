
#include <iostream>

int main(int argc, const char * argv[])
{

    double input = 0;
    double output = 0;
    int casted = 0;

    std::cout << "Eine Zahl eingeben: ";
    std::cin >> input;
    
    output = input;
    
    std::cout << "Der eingegebene Wert (double) ist " << output << std::endl;

    casted = (int)input;
    std::cout << "Der eingegebene Wert (int) ist " << casted << std::endl;
    
    return 0;
}
