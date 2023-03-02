#ifndef PILHA_H
#define PILHA_H
#include <QString>

namespace ped{

class Pilha
{
  // Atributos
  private:
    int tamanho;
    int *array;
    int topo;
  public:
    Pilha(int tamanho);
    ~Pilha();
    bool estaCheia()const;
    bool estaVazia()const;
    int acessar() const;
    void empilhar(int valor);
    int desempilhar();


};
}
 #endif // PILHA_H
