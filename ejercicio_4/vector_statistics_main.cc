#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include "vector_statistics.h"

int main(int argc, char*argv[]) {
  double valor_1 = atoi(argv[1]);
  double valor_2 = atoi(argv[2]);
  double valor_3 = atoi(argv[3]);

  std::vector <double> vec = {valor_1, valor_2, valor_3};
  std::cout << "La media es : " << promedio (vec) << std::endl;
  std::cout << "La suma es  : " << suma (vec) << std::endl;
  std::cout << "El producto es : " << producto (vec ) << std::endl;
  std::cout << "El máximo es : " << valor_maximo(vec) << std::endl;
  std::cout << "El mínimo es : " << valor_minimo(vec, valor_3) << std::endl;
  
}