#include <iostream>
#include <vector>
using namespace std;

class Balde
{
    private:
    vector<string>chave;
    int tam;
    int dLocal;

    public:
    Balde(int d, int n);
    ~Balde();
    string getChave(int i);
    void setChave(string s, int i);
    int getDLocal();
    void setDLocal(int n);
};
