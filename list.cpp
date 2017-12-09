#include <iostream>
#include "list_m.h"

int main() {
	list_m* l = new list_m(1);
	l -> insert(2);
	l -> insert(5);
	l -> dump();
	cout << endl;
	l -> insert(3);
	l -> insert(4);
	l -> pop();
	l -> dump();
	delete(l);
}