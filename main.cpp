#include <iostream>
using namespace std;
int main() {
	
    string val;
    
    getline(cin, val);

    if (val == "int")
    {
    	cout << sizeof(int) << endl;
	}
	else if (val == "float")
    {
    	cout << sizeof(float) << endl;
	}
	else if (val == "char")
    {
    	cout << sizeof(char) << endl;
	}
	else if (val == "short")
    {
    	cout << sizeof(short) << endl;
	}
	else if (val == "double")
    {
    	cout << sizeof(double) << endl;
	}
	else if (val == "long")
    {
    	cout << sizeof(long) << endl;
	}
    return 0;
}
