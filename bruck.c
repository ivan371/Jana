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

double operate(struct bruch a, struct bruch b, char op) {
	int nodt;
	switch(op) {
		case '+':
			nodt = nod(a.a * b.b + a.b * b.a, a.b * b.b);
			return ((double)(a.a * b.b + a.b * b.a) / nodt) / ((double)(a.b * b.b) / nodt);
		break;
		case '-':
			nodt = nod(a.a * b.b - a.b * b.a, a.b * b.b);
			return ((double)(a.a * b.b - a.b * b.a) / nodt) / ((double)(a.b * b.b) / nodt);
		break;
		case '*':
			nodt = nod(a.a * b.a, a.b * b.b);
			return ((double)(a.a * b.a) / nodt) / ((double)(a.b * b.b) / nodt);
		break;
		case '/':
			nodt = nod(a.a * b.b, a.b * b.a);
			return ((double)(a.a * b.b) / nodt) / ((double)(a.b * b.a) / nodt);
		break;
	}
}

int main(){ 
	struct bruch a; 
	struct bruch b;
	scanf("%d %d %d %d", &a.a, &a.b, &b.a, &b.b);
	printf("%lf %lf %lf %lf", operate(a, b, '+'), operate(a, b, '-'), operate(a, b, '*'), operate(a, b, '/'));
}