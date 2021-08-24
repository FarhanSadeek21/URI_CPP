#include <iostream>
using namespace std;
int main(){
    int start;
    cin >> start;
    if(start % 2 == 0){
        start++;
    }
    for(int i = start; i <= (start + 10); i += 2){
        cout << i << endl;
    }
    return 0;
}