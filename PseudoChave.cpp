#include <iostream>
#include "PseudoChave.h"
#include "Balde.h"

using namespace std;

PseudoChave::PseudoChave(){};
PseudoChave::~PseudoChave(){};
string PseudoChave::getInfo()
{
    return info;
}
void PseudoChave::setInfo(string s)
{
    info = s;
}
Balde PseudoChave::getBalde()
{
    return *b;
}
void PseudoChave::setBalde(Balde *a)
{
     b = a;
}

