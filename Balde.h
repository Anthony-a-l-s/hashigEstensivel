#include <iostream>
#include <vector>
using namespace std;

class Balde
{
    private:
    vector<string>chave;
    int tam;

    public:
    Balde();
    ~Balde();
    int getChave();
    void setChave();
};
