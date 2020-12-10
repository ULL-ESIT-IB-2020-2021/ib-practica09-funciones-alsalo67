#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include "vector_statistics.h"



double valor_maximo (std::vector <double> vec){
  double maximo = 0; 
  for (int i=0; i < vec.size(); i++){
    if (vec[i] > maximo){
     maximo = vec[i];
    }
  }
  return maximo;
}

double valor_minimo (std::vector <double> vec){
  double minimo = valor_3; 
  for (int i=0; i < vec.size(); i++){
    if (vec[i] < minimo){
      minimo = vec[i];
    }
  }
  return minimo;
}

double promedio(std::vector <double> vec){
  double sum = 0;
  valor_maximo(std::vector <double> vec) = valor_maximo_vector;
  for (int i =0; i < valor_maximo_vector; i++){
    sum = sum + vec[i];
  }
  double media = sum / valor_maximo_vector;
  return media;
}

double suma (std::vector <double> vec){
  double sum = 0;
  valor_maximo(std::vector <double> vec) = valor_maximo_vector;
  for (int i = 0; i < valor_maximo_vector; i++){
    sum = sum + vec[i];
  }
  return sum;
}

double producto (std::vector <double> vec){
  double product = 1;
  valor_maximo(std::vector <double> vec) = valor_maximo_vector;
  for (int i =0 ; i < valor_maximo_vector; i++){
    product = product * vec[i];
  }
  return product;
}


