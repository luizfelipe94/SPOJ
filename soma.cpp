#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
	
	int qte=0, total=0;
	cin >> qte;
	
	int valores[qte];
	
	for(int i=0; i<qte; i++){
		cin >> valores[i];
	}
	
	for(int i=0; i<qte; i++){
		total += valores[i];
	}
	
	cout << total;
}