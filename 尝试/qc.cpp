#include <stdio.h>
int main ()
{
	char s[1000];
	int a,b,c,d;
	printf("�������ַ���s:");
	fgets(s,1000,stdin);
	printf("�ַ���sΪ��%s",s);
	int n=0;
	int i=0;
    while(s[i]!='\0');
	{
		i+=1;
		n=i;
	}
	printf("%d",n);	
	return 0;
}

