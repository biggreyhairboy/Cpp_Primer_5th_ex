#include <iostream>
#include <vector>
#include <string>
using namespace std;
string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}
int main(){
	string str = "success";
	string str02 = "failure";
	cout << make_plural(2, str);
	cout<< endl << make_plural(3, str02);
	return 0;
}

