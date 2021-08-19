#include <iostream>
using namespace std;
int main(){
    int password = 2002;
    int input;
    while(true){
        cin >> input;
        if(input == password){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else {
            cout << "Senha Invalida" << endl;
        }
    }
    return 0;
}