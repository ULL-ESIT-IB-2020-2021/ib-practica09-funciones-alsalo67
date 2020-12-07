#include <iostream>

const std::string kHelptext = "Este programa calcula los primeros n primos de Mersenne, para ello \
el usuario debe de introducir por línea de comandos un número natural para \
la ejecuciónn del programa";

bool primo (int numero);
void Usage(int argc, char*argv[]);
int primo_mersenne(int natural);