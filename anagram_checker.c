//Foiera 15-934-789
#include<stdio.h>
#include<string.h>

int main(void)
{	
	char a[100], b[100];

	printf("Enter the first string:");
	gets(a);

	printf("Enter the second string:");
	gets(b);

	isAnagram(a,b);
	//printf("First string was:%s\n", &a);
	//printf("Second string was:%s", &b);
	
	return 0;
}

	
int isAnagram(char a[],char b[])
{
	int l1,l2,i, j;
	char temp;
	
	//printf("First string was:%s\n", a);
	//printf("Second string was:%s", b);
	
	l1=strlen(a);
	l2=strlen(b);
		
	if(l1 != l2)
	{
		printf("Is Anagram: False");
	}
	
	for(i=0;i<l1-1;i++)
	{
		for (j=i+1; j<l1; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	
	for(i=0;i<l1;i++){
		if(a[i]!=b[i]){
			printf("Is Anagram: False");
			return 0;
		}
	}
	
	printf("Is Anagram: True");
	return 0;
}
