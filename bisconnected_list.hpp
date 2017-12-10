#include <iostream>
#include <stdio.h>

using namespace std;

class list_el {
	public:
		int value;
		list_el* next;
		list_el* prev;
};
class list_b{
	public:
		list_b(int value);
		~list_b();
		void insert(int value);
		int pop();
		int get_size();
		void dump();
	private:
		int size;
		struct list_el* root;
};

list_b::list_b(int value) {
	size = 0;
	list_el* r = new list_el();
	r -> value = value;
	r -> next = root;
	r -> prev = root;
	root = r;
}

list_b::~list_m() {
	size = -1;
	root -> next = root;
	root -> prev = root;
}

void list_b::insert(int value) {
	list_el* el1 = new list_el();
	el1 -> value = value;
	el1 -> next = root;
	el1 -> prev = root -> prev;
	root = el1;
	size++;
}

void list_b::dump() {
	list_el* el = root;
	for(int i = 0; i <= size; i++) {
		cout << el -> value << endl;
		el = el -> next;
	}
}

int list_b::pop() {
	list_el* el = root -> next;
	int value = root -> value;
	delete root;
	root = el;
	size--;
	return value;
}
int list_b::get_size() {
	return size;
}