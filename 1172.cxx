#include <bits/stdc++.h>
using namespace std;
int main(){
    int numArray[10];
    int number;
    for (int i = 0; i < 10; i++)
    {
        cin >> number;
        if(number <= 0){
            number = 1;
        }
        printf("X[%d] = %d\n", i, number);
    }
    return 0;
}