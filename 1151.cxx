#include <iostream>
using namespace std;
int main(){
    int limit, n3;
    cin >> limit;
    int n1 = 0, n2 = 1;
    if(limit == 1){
        cout << n1 << endl;
    }
    else if(limit == 2){
        cout << n1 << " " << n2 << endl;
    }
    else {
        cout << n1 << " " << n2 << " ";
        limit -= 2;
        for(int i = 1; i <= limit; i++){
            n3 = n1 + n2;
            cout << n3;
            if(i == limit){
                cout << endl;
            }
            else {
                cout << " ";
            }
            n1 = n2;
            n2 = n3;
        }
    }
    return 0;
}