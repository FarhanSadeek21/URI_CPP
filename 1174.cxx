#include <iostream>
using namespace std;
int main(){
    double numArray[100];
    for (int i = 0; i < 100; i++)
    {
        cin >> numArray[i];
        if(numArray[i] <= 10){
            printf("A[%i] = %.1lf\n", i, numArray[i]);
        }
    }
    return 0;    
}