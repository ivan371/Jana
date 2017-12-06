#include <iostream>
using namespace std;

const int MAX_st = 1000;
struct st_stack {
	int st_arr [MAX_st];
	int st_counter;
};

int isfull (st_stack* s) {
    return s -> st_counter == MAX_st ? 0 : 1;
}

int isempty (st_stack* s) {
    return !s -> st_counter ? 0 : 1;
}

void push (st_stack* s, int a) {
    if (!isfull(s)) cout << "full";
    else {
        s -> st_arr[s -> st_counter] = a;
        s -> st_counter++;
    }
}

int pop (st_stack* s) {
    if (!isempty (s)) 
		cout << "empty";
    else {
        s -> st_counter --;
        return s -> st_arr[s -> st_counter+1];
    }
}

void st_construct (st_stack* s) {
    for (int i = 0; i < MAX_st; i ++) 
		s -> st_arr[i] = 0;
    s -> st_counter = 0;
}
void st_dump (st_stack* s){
    for (int i = 0; i < s -> st_counter; i ++) 
		cout << s -> st_arr[i] << endl;
}

void st_destroy (st_stack* s){
    for (int i = 0; i < MAX_st; i ++) s -> st_arr[i]=-666;
    s -> st_counter = -1;
}

