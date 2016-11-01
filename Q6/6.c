#include <stdio.h>

#define ARITH(X,Y) 2*X*Y

int main()
{
	printf("%d\n",ARITH(3+4,2));
	printf("%d\n",1&&3-1);
	printf("%d\n",(int)'5'-(int)'8');

	int m = 1, n = 5;
	printf("%d\n",--m && n++);
	printf("%d\n",m);
	printf("%d\n",n);

	int a = 0, b = 0, c = 1;
	if (a = b)
	{
		a++; --b;

	}
	else
		--c;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);


	printf("redblueyellowwhite");
	char color = 'R';
	switch (color) {
		case 'R':
			printf("Red");
		case 'B':
			printf("blue");
		case 'Y':
			printf("yellow");
		default:
			printf("white");
	}
	puts("");

	return 0;
}
