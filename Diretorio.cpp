#include <iostream>
#include <vector>
#include <math.h>
#include "Diretorio.h"
#include "PseudoChave.h"
#include "Balde.h"

using namespace std;

Diretorio::Diretorio(int n)
{
     setDGlobal(n);
     max = pow(2,n);
     criarDiretorio(n);

}
Diretorio::~Diretorio()
{
    
}
int Diretorio::getDGlobal()
{
    return dGlobal;
}
void Diretorio::setDGlobal(int n)
{
    dGlobal = n;
}

void Diretorio::criarDiretorio(int n)
{
       for(int i = 0; i < (pow(2,n)); i++)
       {
            PseudoChave *p = new PseudoChave();
            pc.push_back(*p);

       }
}



