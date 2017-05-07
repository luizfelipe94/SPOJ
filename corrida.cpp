#include <iostream>

using namespace std;

int main(){
	
	int metros, comprimento;
	
	cin >> metros;
	cin >> comprimento;
	
	int result;
	
	result = metros % comprimento;
	
	cout << result;
	
	return 0;
}