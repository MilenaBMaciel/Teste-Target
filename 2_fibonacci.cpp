/*
    Autor: Milena Bueno Maciel
    Descrição: Retorna se o número recebido na entrada pertence ou não à sequência de Fibonacci
*/
#include <iostream> 
using namespace std;
int main(){
    int n1=0, n2=1, soma=0,numero;
    cin >> numero;

    //calcula a sequencia de fibonacci ate o valor da entrada
    while(soma < numero){
        soma = n1 + n2;
        n2 = n1;
        n1 = soma;
    }

    if(soma == numero) cout << "Pertence" << endl;
    else cout << "Nao pertence" << endl;

    return 0;
}