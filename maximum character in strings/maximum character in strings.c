#include <stdio.h>
#include <string.h>
int main()
{
  	char str[10000],result;
  	int i,n,max=-1;
  	int freq[256]={0};
  	printf("Enter string:");
  	gets(str);
  	n=strlen(str);
  	for(i=0;i<n;i++)
  	{
  		freq[str[i]]++;
	}
	for(i=0;i<n;i++)
  	{
		if(max<freq[str[i]])
		{
			max=freq[str[i]];
			result=str[i];
		}
	}
	printf("\nMaximum Character in Given String=%c",result);

  	return 0;
}
