#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int testCase, number, animal;
    int coelho = 0, rato = 0, sapo = 0, total = 0;
    cin >> testCase;
    for (int i = 0; i < testCase; i++){
        cin >> number >> animal;
        if(animal.compare("C") == 0){
            coelho += number;
        }
        else if(animal.compare("R") == 0){
            rato += number;
        }
        else if(animal.compare("C") == 0){
            sapo += number;
        }
        total += number;
    }
    float coelhoPercent = (float) coelho * 100.0 / total;
    float ratoPercent = (float) rato * 100.0 / total;
    float sapoPercent = (float) sapo * 100.0 / total;
    printf("Total: %i cobaias\n", total);
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << "Percentual de coelhos: " << coelhoPercent << " %" << endl;
    cout << "Percentual de ratos: " << ratoPercent << " %" << endl;
    cout << "Percentual de sapos: " << sapoPercent << " %" << endl;
    return 0;
}
