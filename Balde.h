#ifndef BALDE_H_INCLUDED
#define BALDE_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

class Balde
{
    public:
    Balde(int d, int n);
    ~Balde();
    string getChave(int i);
    void setChave(string s, int i);
    int getDLocal();
    void setDLocal(int n);

    private:
    vector<string>chave;
    int tam;
    int dLocal;


};

#endif // BALDE_H_INCLUDED