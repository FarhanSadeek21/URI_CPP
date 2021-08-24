#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    int numArray[60];
    int position;
    int n1 = 0, n2 = 1, n3;
    numArray[0] = 0;
    numArray[1] = 1;
    for(int i = 2; i <= 60; i++){
        n3 = n1 + n2;
        numArray[i] = n3;
        n1 = n2;
        n2 = n3;
    }
    for (int j = 0; j < testCase; j++)
    {
        cin >> position;
        printf("Fib(%i) = %i\n", position, numArray[position]);
    }
    return 0;
}