/*
    Autor: Milena Bueno Maciel
    Descrição: Calcula a porcentagem do valor de cada estado com relação ao faturamento total 
*/
#include <iostream> 
#include <iomanip>

using namespace std;
int main(){
    float sp, rj, mg, es, outros, soma;
    sp = 67836.43;
    rj = 36678.66;
    mg = 29229.88;
    es = 27165.48;
    outros = 19849.53;
    soma = sp + rj + mg + es + outros; //Calculo do faturamento total

    cout << fixed << setprecision(2); //padronizando a resposta com duas casas decimais
    
    //Calculo padrão de porcentagem com relação ao faturamento total
    cout <<"SP: " << (sp*100)/soma << endl;
    cout <<"RJ: " << (rj*100)/soma << endl;
    cout <<"MG: " << (mg*100)/soma << endl;
    cout <<"ES: " << (es*100)/soma << endl;
    cout <<"Outros: " << (outros*100)/soma << endl;

    return 0;
}