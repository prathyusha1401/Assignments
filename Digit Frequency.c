#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	int i,j;
    for(j=48;j<=57;j++)
	{
		int c=0;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]==j)
			{
				c++;
			}
		}
		printf("%d ",c);
	}
}
