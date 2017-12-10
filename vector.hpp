#include <stdlib.h>
const int SIZE = 1000;
class Vector {
	private:
		int* arr;
		int size;
		int v_size;
	public:
		Vector() {
			arr = new int(SIZE);
			v_size = SIZE;
			size = 0;
		}
		~Vector() {
			size = -1;
			v_size = -1;
			delete(arr);
		}
		int get(int index) {
			if(index < size) {
				exit(-1);
			}
			else {
				return arr[index];
			}
		}
		void put(int value) {
			if(size > v_size) {
				arr = (int*)realloc(arr, v_size + SIZE);
				v_size += SIZE;
			}
			arr[size++] = value;
		}
		int modify(int index, int value) {
			if(index < size) {
				exit(-1);
			}
			else {
				arr[index] = value;
			}
		}
		int getSize() {
			return size;
		}
};