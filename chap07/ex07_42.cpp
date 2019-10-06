#include <string>
using namespace std;

class Book{
public:
	Book(const string &bookname, const string &Author, unsigned pages, string intro);
	Book(const string &bookname, const string &Author): Book( bookname, Author, 0, ""){};
	Book(const string &bookname): Book(bookname, "", 0, ""){};
};
