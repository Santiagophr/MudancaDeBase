#include "converterbase.h"
namespace ped{

int ConverterBase::getNumero() const
{
    return numero;
}

void ConverterBase::setNumero(int newNumero)
{
    numero = newNumero;
}

int ConverterBase::getBase() const
{
    return base;
}

void ConverterBase::setBase(const int &newBase)
{
    base = newBase;
}

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
