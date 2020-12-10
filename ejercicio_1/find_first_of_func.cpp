#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string>
#include <cstring>
#include "find_first_of.h"

void find(std::string palabra, char caracter[0]) {

    for (int i = 0; i <= palabra.size(); i++){
     
     if (palabra[i] == caracter[0]) {
         std::cout << palabra.at(i)  << std::endl;
        
     } 
     else {
         std::cout << "-1" << std::endl;
     }

    }
 return;
}