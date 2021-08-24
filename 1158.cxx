#include <iostream>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    int start, count;
    int sum = 0;
    for(int i = 0; i < testCase; i++){
        cin >> start >> count;
        for(int j = start; j < (start + 2 * count); j++){
            if(j % 2 != 0){
                sum += j;
        	}  
    	}
    	cout << sum << endl;
        sum = 0;
	}
	return 0;
}