#include <iostream>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    double triangle = 0.5 * a * c;
    printf("TRIANGULO: %.3f\n", triangle);
    double circle = 3.14159 * c * c;
    printf("CIRCULO: %.3f\n", circle);
    double trapezium = 0.5 * (a + b) * c;
    printf("TRAPEZIO: %.3f\n", trapezium);
    double square = b * b;
    printf("QUADRADO: %.3f\n", square);
    double rectangle = a * b;
    printf("RETANGULO: %.3f\n", rectangle);
    return 0;
}