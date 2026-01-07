#include <iostream>
#include "Livro.h"
#define MAX 5
using namespace std;

int main()
{
    int nlivros = 0;
    Livro lista_de_livros[MAX];
    int opcao = 1;

    while (opcao)
    {
        cout << "1- Criar livro\n2- Imprimir livros\n3- Fechar\n";
        cout << "Introduza a opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            for (int i = 0; i < MAX; i++)
            {
                cout << "Nome do livro: ";
                cin >> lista_de_livros[i].nome;
                cout << "Codigo ISIN: ";
                cin >> lista_de_livros[i].isin;
            }
            break;
        case 2:
            for (int i = 0; i < MAX; i++)
            {
                cout << lista_de_livros[i].name() << endl;
            }
            break;
        case 3:
            return 0;
        }
    }
}
