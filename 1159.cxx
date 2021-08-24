#include <iostream>
using namespace std;
int main(){
    int limit;
    int sum = 0;
    while(true){
        cin >> limit;
        if(limit == 0){
            break;
        }
        for(int i = limit; i < (limit + 10); i++){
            if(i % 2 == 0){
                sum += i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}