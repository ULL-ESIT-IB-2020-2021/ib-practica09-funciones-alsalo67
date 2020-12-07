#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include "mersenne.h"

bool primo (int numero){
    bool condicion;
    if (numero != 1 && numero != 0) {
        for (int i = 2; i <= numero; i++) {
            if (numero % i == 0) {
                if (numero == i) {
                    condicion = true;
                }
                else{
                    condicion = false;
                    return condicion;
                }
            }
        }
    }
    else {
        condicion = false;
    }
    return condicion;
}


    void Usage(int argc, char*argv[]) {
    if (argc != 2) {
        std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
        std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
        exit(EXIT_SUCCESS);
    }
    std::string parameter{argv[1]};
    if (parameter == "--help") {
        std::cout << kHelptext << std::endl;
        exit(EXIT_SUCCESS);
    }
    }
    
    
       
   
        
    