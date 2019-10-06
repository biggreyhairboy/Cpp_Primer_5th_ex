#include <iostream>
#include <vector>
#include <string>
using namespace std;
string (&func())[10];

auto func02() -> string(&)[10];

string rs{};
decltype(rs) &func03();

typedef string arry[10];
arry& func04();

int main(){
	return 0;
}

