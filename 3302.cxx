#include <iostream>
using namespace std;
int main(){
    int count, num;
    cin >> count;
    for(int i = 1; i <= count; i++){
        cin >> num;
        printf("resposta %i: %i\n", i, num);
    }
    return 0;
}