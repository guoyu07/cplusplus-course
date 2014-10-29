//
//  main.cpp
//  Aufgabe 2.1
//
//  Created by Thomas Breuss on 19.09.14.
//  Copyright (c) 2014 Thomas Breuss. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{

    // Summe
    double a = 182;
    double b = 237;
    double c = 0;
    
    c = a + b;
    
    std::cout << "Die Summe von " << a << " und " << b << " ist gleich " << c << "!\n";
    
    // Differenz
    double g = 233;
    double h = 112;
    double i = 0;
    
    i = g - h;
    
    std::cout << "Die Differenz von " << g << " und " << h << " ist gleich " << i << "!\n";
    
    // Produkt
    double d = 38;
    double e = 12;
    double f = 0;
    
    f = d * e;

    std::cout << "Das Produkt von " << d << " und " << e << " ist gleich " << f << "!\n";

    // Division
    double dividend = 38;
    double divisor = 12;
    double quotient = 0;
    
    quotient = dividend / divisor;
    
    std::cout << "Die Division von " << dividend << " und " << divisor << " ist gleich " << quotient << "!\n";

    return 0;
}
