#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> b >> a;
    int time = a - b;
    if(time <= 0){
        time += 24;
    }
    printf("O JOGO DUROU %i HORA(S)\n", time);
    return 0;
}