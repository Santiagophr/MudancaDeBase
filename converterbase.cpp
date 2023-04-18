#include "converterbase.h"
namespace ped{

ConverterBase::ConverterBase(int numero, int base):

    numero(numero),
    base(base)
{

}
QString ConverterBase::Conversores()
{
    int resto;
    Pilha pilha(20);
    QString resultado="";
    int aux = numero;

    while(aux != 0){
        resto = aux % base;
        pilha.empilhar(resto);
        aux = aux / base;
    }
    QString saida;
    QString str="0123456789ABCDE";
    while(!pilha.estaVazia())
    {
        int pos = pilha.desempilhar();
        saida += str[pos];
    }
    return saida;
}
}
