#include <iostream>
using namespace std;
int main(){
    int limit;
    while(true){
        cin >> limit;
        if(limit == 0){
            break;
        }
        for (int i = 1; i <= limit; i++)
        {
            cout << i;
            if(i != limit){
                cout << " ";
            }
            else {
                cout << endl;
            }
        }
    }
    return 0;
}