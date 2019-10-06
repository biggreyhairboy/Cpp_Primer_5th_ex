#include <iostream>
#include <string>
using namespace std;
class Person{
public:
	Person() = default;
	Person(const string name, const string addr)
	{
		this->Name = name;
		this->Addr = addr;
	}

	void read(const string name, const string addr)
	{
		Name = name;
		Addr = addr;
	}
	void print()
	{
		cout << "Nama: " << Name << endl
			 << "Addr: " << Addr << endl;
	}

private:
	std::string Name;
	std::string Addr;
};
