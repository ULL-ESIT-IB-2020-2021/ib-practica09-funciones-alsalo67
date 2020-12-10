#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include "armstrong.h"

int armstrong_number(int numero) {

int originalnumero, repeticion, resultado = 0;
    originalnumero = numero;
    while (originalnumero != 0) {
        repeticion = originalnumero % 10;
        resultado += repeticion * repeticion * repeticion;
        originalnumero /= 10;
    }
  return resultado;
}