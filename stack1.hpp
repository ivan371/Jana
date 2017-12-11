#include <iostream>
using namespace std;
class Stack {
	private:
		int* arr;
		int size;
	public: 
		Stack() {
			arr = new int();
			size = 0;
		}
		~Stack() {
			size = -1;
			delete arr;
		}
		void push(int a) {
			arr[size++] = a;
		}
		int pop() {
			if(size >= 0) {
				return arr[--size];
			}
		}
		void dump() {
			for(int i = 0; i < size; i++) {
				cout << arr[i] << endl;
			}
		}
		int getSize() {
			return size;
		}
};
