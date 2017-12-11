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
		list_m(int value) {
			size = 0;
			list_el* r = new list_el();
			r -> value = value;
			r -> next = root;
			root = r;
		}
		~list_m() {
			size = -1;
			root -> next = root;
		}
		void insert(int value) {
			list_el* el1 = new list_el();
			el1 -> value = value;
			el1 -> next = root;
			root = el1;
			size++;
		}
		int pop() {
			list_el* el = root -> next;
			int value = root -> value;
			delete root;
			root = el;
			size--;
			return value;
		}
		int get_size() {
			return size;
		}
		void dump() {
			list_el* el = root;
			for(int i = 0; i <= size; i++) {
				cout << el -> value << endl;
				el = el -> next;
			}
		}
		bool operator == (list_m &newell) {
			if(newell.get_size() == (this -> get_size()))
				return true;
			return false;
		}
	private:
		int size;
		struct list_el* root;
};