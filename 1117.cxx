#include <iostream>
using namespace std;
int main(){
    int count = 0;
    float score, total, average;
    while(count != 2){
        cin >> score;
        if(score >= 0 && score <= 10){
            total += score;
            count++;
        }
        else {
            cout << "nota invalida" << endl;
        }    
    }
    average = total / 2;
    printf("media = %.2f\n", average);
    return 0;
}