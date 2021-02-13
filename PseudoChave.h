#include <iostream>
#include "Balde.h"

class PseudoChave
{
    private:
    string info;
    Balde *b;
   

    public:
    PseudoChave() {info = '0'; b = NULL};
    ~PseudoChave() {};
    string getInfo() {return info;};
    string setInfo(string s) {info = s;};
    Balde getBalde() {return *b;};
    void setBalde(Balde *a) {b = a;};
    
};