#include <iostream>
using namespace std;
int main(){
    int money, temp, count;
    int noteArray[] = {100, 50, 20, 10, 5, 2, 1};
    cin >> money;
    cout << money << endl;
    temp = money;
    for (int i = 0; i < 7; i++)
    {
        count = temp / noteArray[i];
        printf("%i nota(s) de R$ %d,00\n", count, noteArray[i]);
        temp %= noteArray[i];
    }
    return 0;
}