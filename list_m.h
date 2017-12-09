#include <iostream>
#include <stdio.h>

using namespace std;

class list_el {
	public:
		int value;
		list_el* next;
};
class list_m{
	public:
		list_m(int value);
		~list_m();
		void insert(int value);
		int pop();
		int get_size();
		void dump();
	private:
		int size;
		struct list_el* root;
};

list_m::list_m(int value) {
	size = 0;
	list_el* r = new list_el();
	r -> value = value;
	r -> next = root;
	root = r;
}

list_m::~list_m() {
	size = -1;
	root -> next = root;
}

void list_m::insert(int value) {
	list_el* el1 = new list_el();
	el1 -> value = value;
	el1 -> next = root;
	root = el1;
	size++;
}

void list_m::dump() {
	list_el* el = root;
	for(int i = 0; i <= size; i++) {
		cout << el -> value << endl;
		el = el -> next;
	}
}

int list_m::pop() {
	list_el* el = root -> next;
	int value = root -> value;
	delete root;
	root = el;
	size--;
	return value;
}
int list_m::get_size() {
	return size;
}