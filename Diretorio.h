#include <iostream>
#include <cstdlib>
#include <vector>
#include "PseudoChave.h"
using namespace std;

class Diretorio
{
     private:
     int dGlobal;
     int max;
     vector<PseudoChave>pc;

     public:
     Diretorio(int n);
     ~Diretorio();
     int getDGlobal();
     void setDGlobal(int n);
     void criarDiretorio(int d);
     
};
