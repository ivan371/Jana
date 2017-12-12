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
			return ((a.a * b.b + a.b * b.a) / nodt) / ((a.b * b.b) / nodt);
		break;
		case '-':
			nodt = nod(a.a * b.b - a.b * b.a, a.b * b.b);
			return ((a.a * b.b - a.b * b.a) / nodt) / ((a.b * b.b) / nodt);
		break;
		case '*':
			nodt = nod(a.a * b.a, a.b * b.b);
			return ((a.a * b.a) / nodt) / ((a.b * b.b) / nodt);
		break;
		case '/':
			nodt = nod(a.a * b.b, a.b * b.a);
			return ((a.a * b.b) / nodt) / ((a.b * b.a) / nodt);
		break;
	}
}