#include <iostream>
using namespace std;
class Stack {
	public: 
		Stack();
		~Stack();
		void push(int a);
		int pop();
		void dump();
		int getSize();
	private:
		int* arr;
		int size;
};

Stack::Stack() {
	arr = new int();
	size = 0;
}
Stack::~Stack() {
	size = -1;
	delete arr;
}
void Stack::push(int a) {
	arr[size++] = a;
}
int Stack::pop() {
	if(size >= 0) {
		return arr[--size];
	}
}
void Stack::dump() {
	for(int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}
int Stack::getSize() {
	return size;
}