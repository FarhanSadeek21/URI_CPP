#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    double initial_salary, sales, total_salary;
    cin >> name >> initial_salary >> sales;
    // 15% = 15 * 1 / 100 = 0.15
    total_salary = initial_salary + 0.15 * sales;
    printf("TOTAL = R$ %.2f\n", total_salary);
    return 0;   
}