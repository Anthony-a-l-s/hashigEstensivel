#include <iostream>
#include <vector>
using namespace std;

class Diretorio
{
     private:
     int dGlobal;

     public:
     Diretorio(int n);
     ~Diretorio();
     int getDGlobal();
     void steDGlobal(int n);
     void criarDiretorio(int d);
};
