#include <iostream>
using namespace std;
int main(){
    int code;
    cin >> code;
    if(code == 61){
        cout << "Brasilia";
    }
    else if(code == 71){
        cout << "Salvador";
    }
    else if(code == 11){
        cout << "Sao Paulo";
    }
    else if(code == 21){
        cout << "Rio de Janeiro";
    }
    else if(code == 32){
        cout << "Juiz de Fora";
    }
    else if(code == 19){
        cout << "Campinas";
    }
    else if(code == 27){
        cout << "Vitoria";
    }
    else if(code == 31){
        cout << "Belo Horizonte";
    }
    else {
        cout << "DDD nao cadastrado";
    }
    cout << endl;
    return 0;
}