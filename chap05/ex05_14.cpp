#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string word;
	unsigned max_counter(0);
	unsigned counter(0);
	string current = "";
	string maxstring = "";
	cin >> current;
	max_counter++, counter++;
	while(cin >> word)
	{
		if(word == current)
			counter++;	
		else{
			if(counter > max_counter)
			{
				max_counter = counter;
				maxstring = current;
			}
			else
				counter = 1;
			current = word;
		}
	}
	cout << maxstring << " "  << max_counter << endl;
	return 0;
}

