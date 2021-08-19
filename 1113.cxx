#include <iostream>
using namespace std;
int main(){
    int i = 0;
    int n1, n2;
    while(i == 0){
        cin >> n1 >> n2;
        if(n1 > n2){
            cout << "Decrescente" << endl;
        }
        else if(n1 < n2){
            cout << "Crescente" << endl;
        }
        else{
            break;
        }
    }
    return 0;
}