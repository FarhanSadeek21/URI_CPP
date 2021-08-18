#include <iostream>
using namespace std;
int main(){
    float a, b, c;
    cin >> a >> b >> c;
    if((a + b) > c && (b + c) > a && (c + a) > b){
        float perimeter = a + b + c;
        //cout << perimeter << endl;
        printf("Perimetro = %.1f\n", perimeter);
    }
    else {
        float area = 0.5 * (a + b) * c;
        printf("Area = %.1f\n", area);
    }
    return 0;
}