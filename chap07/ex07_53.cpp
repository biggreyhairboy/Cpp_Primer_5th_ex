#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Debug{
public:
	constexpr Debug();
	constexpr Debug(bool i, bool r, bool h): ioe(i), rte(r), hwe(h){}
	constexpr void set_hwe(bool b){ hwe = b; }


private:
	bool ioe;
	bool rte;
	bool hwe;
};
int main(){
	Debug adebug(true, true, false);
	bool bl;
	cin >> bl;
	adebug.set_hwe(bl);
	
	return 0;
}

