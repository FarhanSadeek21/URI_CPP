#include <iostream>
using namespace std;
int main(){
    int time;
    cin >> time;
    int hour = time / 3600;
    int minute = (time % 3600) / 60;
    int second = (time % 3600) % 60;
    cout << hour << ":" << minute << ":" << second << endl;
    return 0;
}