#include <iostream>
using namespace std;
int main(){
    int limit;
    cin >> limit;
    if(limit % 2 == 0){
        limit -= 1;
    }
    for(int i = 1; i <= limit; i += 2){
        cout << i << endl;
    }
    return 0;
}