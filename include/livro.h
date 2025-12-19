#ifndef LIVRO_H
#define LIVRO_H

#include <string>
using namespace std;

class Livro {
public:
    string nome;
    int isin;

    string name() {
        return nome;
    }
};

#endif
