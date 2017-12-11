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
	list_m* l1 = new list_m(4);
	l1 -> insert(5);
	if(*l1 == *l) {
		cout << "more";
	}
	else {
		cout << "not_more";
	}
	l1 -> insert(4);
	l1 -> insert(3);
	if(*l == *l1) {
		cout << "more";
	}
	else {
		cout << "not_more";
	}
	delete(l);
	delete(l1);
}