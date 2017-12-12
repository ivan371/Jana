#include "list_m.h"
class queue{
	private:
		list_m* list;
	public:
		queue(int value) {
			list = new list_m(value);
		}			
		~queue() {
			delete list;
		}
		void push(int value) {
			list -> insert(value);
		}
		int pop() {
			return list -> pop_back();
		}
};