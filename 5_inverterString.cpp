/*
    Autor: Milena Bueno Maciel
    Descrição: Retorna a string recebida na entrada de forma invertida
*/
#include <iostream>
#include <string>
 
using namespace std;
int main(){ 

    string original, invertida;
    getline(cin, original);

    //Leitura e armazenamento da string original de trás para frente
    for(int i=original.size()-1; i>=0; i--) invertida.push_back(original[i]);

    cout << invertida << endl;

    return 0;
}