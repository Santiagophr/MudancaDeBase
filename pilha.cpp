#include "pilha.h"
namespace ped{
Pilha::Pilha(int tamanho):
tamanho(0) ,
array(0),
topo(-1)
{
  if(tamanho<=0) throw QString("Erro, tamanho nao pode ser menor que 0");
  try{
    array = new int[tamanho];
    this->tamanho = tamanho;
  }
  catch(std::bad_alloc &erro){
      throw QString ("A pilha nao pode ser criada");
  }
}
Pilha::~Pilha(){
    if(array) delete[] array;
}
bool Pilha::estaCheia()const{
    return(topo==(tamanho-1));
}
bool Pilha::estaVazia()const{
    return(topo==-1);
}
int Pilha::acessar()const{
    if(estaVazia()) throw QString("A pilha nao pode estar vazia");
    return array[topo];
}
void Pilha::empilhar(int valor){
    if(estaCheia()) throw QString("A pilha esta Cheia");
    topo++;
    array[topo]=valor;
}
int Pilha::desempilhar(){
    if(estaVazia()) throw QString("A pilha nao pode estar vazia");
    int valor = array[topo];
        topo --;
    return valor;

}
}

