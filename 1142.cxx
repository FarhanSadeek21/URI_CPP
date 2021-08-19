#include <iostream>
using namespace std;
int main(){
    int line;
    cin >> line;
    int a = 1;
    for (int i = 0; i < line; i++){
        for (int j = a; j < (a + 3); j++){
            cout << j << " ";
        }
        cout << "PUM" << endl;
        a += 4;
    }
    return 0;
}