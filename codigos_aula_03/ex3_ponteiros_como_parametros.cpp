#include <iostream>

using namespace std;

void valor_alocando_memoria(int* p)
{
  p = new int;
  *p = 7;
}
void valor_modificando_memoria(int* p)
{
  *p = 8;
}
void referencia(int*& p)
{
  p = new int;
  *p = 9;
}

int main()
{
  int a  = 1;
  int b  = 2;
  int c  = 3; 
  int* p1 = &a;
  int* p2 = &b;
  int* p3 = &c;

  cout <<"Antes: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout <<"Antes: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << endl;
  
  valor_alocando_memoria(p1); 
  valor_modificando_memoria(p2);
  referencia(p3);  

  cout << "Depois: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout << "Depois: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << "Depois: "<< a <<" "<< b <<" "<< c << endl;

  return 0;
}
