#include <iostream>
#include <vector>
#include "Balde.h"

using namespace std;

Balde::Balde(int d, int n)
{
     setDLocal(d);
     tam = n;

}

Balde::~Balde()
{

}

string Balde::getChave(int i)
{
     return chave[i];
}

void Balde::setChave(string s, int i)
{
    chave[i] = s;
}

int Balde::getDLocal()
{
      return dLocal;
}

void Balde::setDLocal(int n)
{
    dLocal = n;
}


