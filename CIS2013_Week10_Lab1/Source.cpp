#include<iostream>
#include<cstring>
using namespace std;

int main() {

// pointers

	//int bob = 2; // stores a point of memory. bob|aaa --> 0|1|0|1|1 or whatever.
	// we can access not just the name (bob), but the pointer location (aaa) without referencing the variable.
	// we've declared a bob pointing to a memory location such as |1|
	//int *tom;
	// we've declared an integer location
	//if we set tom = bob;
	// tom and bob now point to the same location. This is the same thing as a pass by reference. If we change what is in that location, it changes both tom and bob.

	int v1;
	int v2;
	int *p1; //the star means we are creating a pointer (which can then be set to a memory address)
	int *p2;

	v1 = 22;
	v2 = 33;
	p1 = &v1; //the & is accessing the memory address, looks like hexadecimal
	p2 = &v2;

	cout << "p1 is: " << *p1 << endl;
	cout << "p2 is: " << *p2 << endl;
	cout << "v1 is: " << v1 << endl;
	cout << "v2 is: " << v2 << endl;
	//output
	//	p1 is : 22
	//	p2 is : 33
	//	v1 is : 22
	//	v2 is : 33

	p1 = p2;
	cout << "p1 is: " << *p1 << endl;
	cout << "p2 is: " << *p2 << endl;
	cout << "v1 is: " << v1 << endl;
	cout << "v2 is: " << v2 << endl;
	//new output
	//	p1 is : 33
	//	p2 is : 33
	//	v1 is : 22
	//	v2 is : 33

	v1 = 44;
	v2 = 55;
	cout << "p1 is: " << *p1 << endl;
	cout << "p2 is: " << *p2 << endl;
	cout << "v1 is: " << v1 << endl;
	cout << "v2 is: " << v2 << endl;
	//new output
	//	p1 is : 55
	//	p2 is : 55
	//	v1 is : 44
	//	v2 is : 55

	cout << endl << " End of program ";
	char keepAlive = 'y';
	cin >> keepAlive; //keep the program from closing the window until the user inputs something
	return 0;
}

// modifying these pointers within the program allows us to change something, such as the legnth of an array, while the program is running.

// 
