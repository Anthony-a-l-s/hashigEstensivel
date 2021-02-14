#include <iostream>
#include <cstdlib>
#include <vector>
#include "PseudoChave.h"
#include "Balde.h"
using namespace std;

class Diretorio
{
     public:
     Diretorio(int n);
     ~Diretorio();
     int getDGlobal();
     void setDGlobal(int n);
     void criarDiretorio(int n);

     private:
     int dGlobal;
     int max;
     vector<PseudoChave>pc;


     
};
