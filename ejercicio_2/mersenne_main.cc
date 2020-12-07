#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include "mersenne.h"



int main (int argc, char*argv[]) {
    Usage(argc, argv);
    std::string convert = argv[1];
    int natural = stoi(convert);

    for (int i = 1; i <= 5; natural++) {
    if (primo(natural) == true) {
        int mersenne = pow(2, natural) - 1;
        if (primo(mersenne) == true) {
            std::cout << mersenne << std::endl;
             i++;
             
        }
   }
        }
    }

    

    


