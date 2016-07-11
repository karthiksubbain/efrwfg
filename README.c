#include<stdio.h>
#include<conio.h>
void main()
{
	char a,b;
	clrscr();
	scanf("%c %c",&a,&b);
	if(a>b)
		printf("%c it is greatest",a);
	else if(b>a)
		printf("%c it is greatest",b);
	else
		printf("Both are equal");
		getch();
}
