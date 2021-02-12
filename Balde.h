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
    Balde();
    ~Balde();
    int getChave();
    void setChave();
    int getDLocal();
    void setDLocal();
};
