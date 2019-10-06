#include <iostream>
#include <vector>
#include <string>
using namespace std;
void f(){}

void f(int a){
	cout << a << "fi";
}

void f(int a, int b){
	cout << a << " fii" << b << endl; 
}

//void f(int a , double b){
//	cout << a << " " << b << endl;
//}

void f(double a, double b){
	cout << a << "fdd " << b << endl;
}
int main(){
	f(2.56, 42);//ambiguous 
	f(42);
	f(42, 0);
	f(2.56, 3.14);	
	return 0;
}

