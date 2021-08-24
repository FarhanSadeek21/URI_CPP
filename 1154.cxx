#include <iostream>
using namespace std;
int main(){
    double age, averageAge, total, count = 0;
    while(true){
        cin >> age;
        if(age < 0){
            break;
        }    
        else {
            total += age;
            count += 1;
        }
    }
    averageAge = total / count;
    printf("%.2lf\n", averageAge);
    return 0;
}