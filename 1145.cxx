#include <iostream>
using namespace std;
int main(){
    int line, limit, count = 0;
    cin >> line >> limit;
    for(int i = 1; i <= (limit + 1); i++){
        if(line == count){
            cout << endl;
            count = 0;
        }
        cout << i << " ";
        count += 1;
    }
    return 0;
}