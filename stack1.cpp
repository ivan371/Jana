#include <iostream>
#include "stack1.hpp"
using namespace std;

int main() {
	Stack* st = new Stack();
	st -> push(1);
	st -> push(2);
	st -> push(3);
	//cout << (st -> pop()) << endl;
	//st -> dump();
	delete st;
}