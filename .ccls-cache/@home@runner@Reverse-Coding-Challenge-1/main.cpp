#include <iostream>
#include <cstring>
using namespace std;

void imprimir(char cod[], int tam){
  char letras[tam/2];
  int valores[tam/2];
  
  for (int i=0, j=0; i<tam/2; i++, j+=2) {
    letras[i] = cod[j];
    j++;
    valores[i] = (cod[j])-48;
    j--;
  }
/*
  for (int i=0; i<tam/2; i++){
    cout << letras[i];
  } cout << endl;
  
  for (int i=0; i<tam/2; i++){
    cout << valores[i];
  } cout << endl;
  */

  for (int i=0; i<tam/2; i++){
    for (int j=0; j<valores[i]; j++){
      cout << letras[i];
    } 
  }
  cout << endl;

  
}

int main() {
  char codigo[20];
  cin.getline(codigo, 20);

  int tam  = strlen(codigo);
  imprimir(codigo, tam);

}