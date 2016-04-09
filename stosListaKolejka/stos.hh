#ifndef stos_hh
#define stos_hh
#include "lista.hh"
class InterfaceStos
{
public:
  virtual void push(int element)=0;
  virtual int pop()=0;
  virtual int size()=0;
};


class Stos : public InterfaceStos
{
  int Size;
  List list;
  int temp;//zmienna do przechowywania zdejmowanego elementu
public:
  void push(int element);
  int pop();
  int size();
};
#endif
