#include <iostream>

int main(int argc, const char * argv[])
{
    // Konstante PI
    const double PI = 3.1415;
    
    // Variablen
    double radius = 0;
    double hoehe = 0;
    double volumen1 = 0;
    double volumen2 = 0;
    double durchschnitt = 0;
    
    // Text-Ausgabe
    std::cout << "ZYLINDER-BERECHNUNG\n\n";
    
    // Radius eingeben
    std::cout << "Bitte Radius eingeben: ";
    std::cin >> radius;

    // Höhe eingeben
    std::cout << "Bitte Höhe eingeben: ";
    std::cin >> hoehe;
    
    // Volumen 1 berechnen
    volumen1 = radius * radius * PI * hoehe;
    
    // Text mit Volumen 1 ausgeben
    std::cout << "\nDas Volumen des ersten Zylinders beträgt " << volumen1 << std::endl;

    // Radius eingeben
    std::cout << "Bitte Radius eingeben: ";
    std::cin >> radius;
    
    // Höhe eingeben
    std::cout << "Bitte Höhe eingeben: ";
    std::cin >> hoehe;
    
    // Volumen 2 berechnen
    volumen2 = radius*radius * PI * hoehe;
    
    // Text mit Volumen 2 ausgeben
    std::cout << "\nDas Volumen des zweiten Zylinders beträgt " << volumen2 << std::endl;

    // Durchschnitt berechnen
    durchschnitt = (volumen1 + volumen2) / 2;
    
    // Durchschnitt ausgeben
    std::cout << "\nDas Durchschnitts-Volumen beträgt " << durchschnitt << std::endl;

    return 0;
}

