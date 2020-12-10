#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include "armstrong.h"

int main (int argc, char*argv[]) {
    std::string convert = argv[1];
    int numero = stoi(convert);
    
    if (armstrong_number(numero) == numero){
    std::cout << numero << " Es un número de Armstrong." << std::endl;
    }
    else {
        std::cout << numero << " No es un número de Armstrong." << std::endl;
    }
    return 0;

}