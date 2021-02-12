#include <iostream>

class No
{
    private:
    string info;
    string *balde;
    string *prox;

    public:
    string getInfo() (return info)
    string setInfo(string s) (info = s)
    No* getBalde() (return balde)
    void setBalde(No* p) (balde = p)
    No* getProx()  (return prox)
    No* setProx(No* p) (prox = p)
};