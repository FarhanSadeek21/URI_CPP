#include <bits/stdc++.h>
using namespace std;
int main(){
	int init_h, init_m, fin_h, fin_m, hour, minute;
	scanf("%d %d %d %d", &init_h, &init_m, &fin_h, &fin_m);
	int time = (fin_h * 60 + fin_m) - (init_h * 60 + init_m);
	if (time <= 0) {
		time += 1440;
	}
	hour = time / 60;
	minute = time % 60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", hour, minute);
}