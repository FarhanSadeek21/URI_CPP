#include <bits/stdc++.h>
using namespace std;
int main(){
    float total = 0, number;
    int count = 0;
    for (int i = 0; i < 6; i++) {
        cin >> number;
        if(number > 0){
            total += number;
            count++;
        }
    }
    float average = total / count;
    cout << count << " valores positivos" << endl;
    printf("%.1f\n", average);
    return 0;
}