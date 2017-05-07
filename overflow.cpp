#include <iostream>
using namespace std;
#include <string>

int main(){
   int max, num1, num2,result;
   string op;
   
   cin >> max;
   cin >> num1;
   cin >> op;
   cin >> num2;	
	
	if(op == "*"){
		result = num1 * num2;
	}else{
		result = num1 + num2;
	}
	
	if(result <= max)
		cout << "OK";
	else
		cout << "OVERFLOW";

	return 0;
}