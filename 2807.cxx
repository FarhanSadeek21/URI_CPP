#include <bits/stdc++.h>
using namespace std;

int main(){
    int array[40];
    array[0] = 1;
    array[1] = 1;
    for(int i = 2; i < 40; i++){
      array[i] = array[i - 1] + array[i - 2];
    }
    int size;
    cin >> size;
    for(int i = size - 1; i >= 0; i--){
      std::cout << array[i];
      if(i >= 0){
        cout << " ";
      }
      else {
        cout << endl;
      }
    }
    return 0;
}
