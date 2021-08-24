#include <iostream>
using namespace std;
int main(){
    int limit;
    cin >> limit;
    for(int i = 1; i <= limit; i++){
        if(limit % i == 0){
            cout << i << endl;
        }
    }
    return 0;
}