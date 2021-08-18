#include <iostream>
using namespace std;
int main(){
    float numArray[6], count = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> numArray[i];
        if(numArray[i] > 0){
            count += 1;
        }
    }
    cout << count << " valores positivos" << endl;
    return 0;
}