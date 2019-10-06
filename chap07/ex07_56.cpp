#include <string>
using namespace std;

class Account{
public:
	Account();
	Account(string& name, unsigned age, double credits);
	static void initInterest(double i);
private:
	static double Interest;	
	string Name;
	unsigned Age;
	double Credits;
};

void Account::initInterest(double i)
{
	Interest = i;
}
