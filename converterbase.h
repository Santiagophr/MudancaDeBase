#ifndef CONVERTERBASE_H
#define CONVERTERBASE_H
#include <pilha.h>
#include <QString>
#include <mainwindow.h>

namespace ped{

class ConverterBase
{
  private:
    int numero;
    int base;

  public:
    ConverterBase(int numero, int base);
    QString Conversores();

    int getNumero() const;
    void setNumero(int newNumero);
    int getBase() const;
    void setBase(const int &newBase);
};
}
#endif
