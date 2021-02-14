#include <iostream>
#include "Balde.h"

class PseudoChave
{
        public:
    PseudoChave();
    ~PseudoChave();
    string getInfo();
    void setInfo(string s);
    Balde getBalde();
    void setBalde(Balde *a);
    
    private:
    string info;
    Balde *b;
   


    
};