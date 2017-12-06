#include <iostream>
#include "stack.hpp"

using namespace std;

int main() {
	st_stack s;
    st_construct (&s);
    push(&s, 6);
	push(&s, 4);
	push(&s, 5);
	push(&s, 9);
	pop(&s);
	pop(&s);
	push(&s, 2);
	push(&s, 3);
    st_dump (&s);
    st_destroy (&s);
}
