#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, d, root1, root2;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    //if d becomes a nedgative number then sqrt of d will become impossible. Besides it is impossible to divide anything by 0
    if(d < 0 || a == 0) {
        cout << "Impossivel calcular" << endl;
    }
    else {
        root1 = ((-1 * b) + sqrt(d)) / (2 * a);
        root2 = ((-1 * b) - sqrt(d)) / (2 * a);
        printf("R1 = %.5f\n", root1);
        printf("R2 = %.5f\n", root2);
    }
    return 0;
}