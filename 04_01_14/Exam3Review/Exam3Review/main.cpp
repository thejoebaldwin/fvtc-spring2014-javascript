#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void outputArray(int[]);

int main()
{
	int length = 0;
	cout << "How many names?";
	//get the array length
	cin >> length;
	//declare a string array of length length
	string *names = new string[length];
	//loop through and get each name
    for (int i =0; i < length; i++)
	{
		cout << endl << "Name " << i + 1 << "?";
		//get the name into the aray element
		cin >> names[i];
	}

	cout << "Names:";
	//loop through elements in reverse
	for (int i = length - 1; i >= 0;i--)
	{
		//output the name at element
		cout << names[i];
		//if not the last loop output comma
		if (i > 0) 
		{
			cout << ",";
		}
	}


	_getch();
	return 0;
}


