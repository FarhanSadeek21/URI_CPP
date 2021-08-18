#include <iostream>
using namespace std;
int main(){
    //hour and code must be a whole number so int is the solution
    //Space complexity reduced by that
    int number, hour;
    double per_hour, salary;
    cin >> number >> hour >> per_hour;
    salary = hour * per_hour;
    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}