#include <iostream>
#include <vector>
#include <string>
using namespace std;
//int calc(int &a, int &b){
//	cout << "normal" << endl;
//	return a + b;
//}
//
//int calc(const int& a, const int &b){
//	cout << "const" << endl;
//	return a + b;
//}
//
//int calc(char* a, char *b){
//	cout << "normal" << endl;
//}
//int calc(const char *a, const char *b){
//	cout << "top const" << endl;
//}
int calc(char *a, char *b){
	cout << "normal" << endl;
}
int calc(char *const a, char *const b){
	cout << "const " << endl;
}
int main(){
//	int a = 3, b = 4;
//	calc(a, b);
//
//    char a = 'a';
//	char b = 'b';
//	const char *ca = &a;	
//	const char *cb = &b;
//	calc(ca, cb);
	return 0;
}

