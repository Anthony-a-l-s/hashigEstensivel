#include <iostream>
#include <vector>
#include <math.h>
#include "Diretorio.h"
#include "No.h"

Diretorio::Diretorio(int n)
{
    //criaDiretorio(n);
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
       No *p = new No();
       primeiro = p ;
       int i = 1;
      while(i < (pow(2,n)))
      {
          No *novo = new No();
          if(i == 1)
          {   
              p->setProx(novo);
          }
          else
          {
                
          }

      }
}



