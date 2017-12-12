#include <stdio.h>

struct bruch {
	int a;
	int b;
};

int nod(int a, int b) {
	if(b > a) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if(a % b == 0) 
		return b;
	else 
		return nod(b, a % b);
}

struct bruch operate(struct bruch a, struct bruch b, char op) {
	int nodt;
	struct bruch br;
	switch(op) {
		case '+':
			nodt = nod(a.a * b.b + a.b * b.a, a.b * b.b);
			br.a = (a.a * b.b + a.b * b.a) / nodt;
			br.b = (a.b * b.b) / nodt;
			return br;
		break;
		case '-':
			nodt = nod(a.a * b.b - a.b * b.a, a.b * b.b);
			br.a = (a.a * b.b - a.b * b.a) / nodt;
			br.b = (a.b * b.b) / nodt;
			return br;
		break;
		case '*':
			nodt = nod(a.a * b.a, a.b * b.b);
			br.a = (a.a * b.a) / nodt;
			br.b = (a.b * b.b) / nodt;
			return br;
		break;
		case '/':
			nodt = nod(a.a * b.b, a.b * b.a);
			br.a = (a.a * b.b) / nodt;
			br.b = (a.b * b.a) / nodt;
			return br;
		break;
	}
}

int main(){ 
	struct bruch a; 
	struct bruch b;
	scanf("%d %d %d %d", &a.a, &a.b, &b.a, &b.b);
	printf("%d %d\n", operate(a, b, '+').a, operate(a, b, '+').b);
	printf("%d %d\n", operate(a, b, '-').a, operate(a, b, '-').b);
	printf("%d %d\n", operate(a, b, '*').a, operate(a, b, '*').b);
	printf("%d %d\n", operate(a, b, '/').a, operate(a, b, '/').b);
}