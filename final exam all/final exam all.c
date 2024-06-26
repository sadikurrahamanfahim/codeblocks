/*#include <stdio.h>
#include <malloc.h>

void main()
{
	int i, n, sum = 0;
	int *a;

     	printf("Enter numbers of elements of array: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
        {
            printf("enter element%d: ",i+1);
            scanf("%d", a + i);
		}

        for (i = 0; i < n; i++)
        {
		sum = sum + *(a + i);
	}

        printf("Sum of all elements: %d", sum);
        return 0;
}


#include <stdio.h>
int main()
{
    char str[20];
    char *ptr;
    int  vowel=0,consonant=0;

    printf("Enter string: ");
    gets(str);
    ptr=str;

    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            vowel++;
        else if(*ptr!=' ')
            consonant++;
        ptr++;
    }

    printf("Total number of VOWELS: %d, CONSONANT: %d\n",vowel,consonant);
    return 0;
}

/*#include <stdio.h>

int main()
{
	int array[10],i,j,Size,k=0;

	printf("Enter number of elements:  ");
	scanf("%d",&Size);

	for (i = 0; i < Size; i++)
	{
    	printf("enter element%d: ",i+1);
    	scanf("%d", &array[i]);
   	}

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(array[i] == array[j])
    		{
    			k++;
			}
		}
	}

 	printf("\nTotal number of duplicate elements: %d ",k);
 	return 0;
}


#include <stdio.h>
int main()
{
    int days,years,weeks;

    printf("enter days: ");
    scanf("%d",&days);

    years=days/365;
    weeks=(days % 365)/7;
    days=days-((years*365)+(weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;
}
#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    int count=0,i;

    printf("Enter string: ");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&& str[i+1]!= '\0')
            count++;
    }
    printf("total number of words: %d",count+1);
}


#include<stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("%c is a vowel..",c);
    else
        printf("%c is a consonant..",c);
    return 0;
}


#include <stdio.h>
int main()
{
   int rows,i,j,k=1;

   printf("Enter row number: ");
   scanf("%d",&rows);

   for(i=1;i<=rows;i++)
    {
      for(j=1;j<=i;++j)
      {
         printf("%d ",k);
         k++;
      }
      printf("\n");
   }
   return 0;
}


#include <stdio.h>
void reversesentence();

int main()
{
    printf("Enter a sentence: ");
    reversesentence();
}

void reversesentence()
{
    char cha;
    scanf("%c",&cha);
    if (cha!='\n')
    {
        reversesentence();
        printf("%c",cha);
    }
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LSIZ 100
#define RSIZ 100

int main(void)
{
    char line[RSIZ][LSIZ];
	char filename[20];
	int i=0,top=0;

    FILE *fptr=NULL;

	printf("enter filename: ");
	scanf("%s",filename);

    fptr = fopen(filename,"r");
    while(fgets(line[i],LSIZ,fptr))
	{
        line[i][strlen(line[i])-1] = '\0';
        i++;
    }
    top = i;
	printf("\n stored data in file: \n",filename);
    for(i = 0; i < top; ++i)
    {
        printf(" %s\n", line[i]);
    }
    printf("\n");
    return 0;
}

/*
#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fptr;
    char name1[20];
    char name2[20];
    char name3[20];
    char name4[20];

    fptr = fopen("test.txt","w");

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    printf("Enter the name:\n");
    scanf("%s", name1);
    fprintf(fptr, "Name  = %s\n", name1);

    printf("Enter the name:\n");
    scanf("%s", name2);
    fprintf(fptr, "Name  = %s\n", name2);

    printf("Enter the name:\n");
    scanf("%s", name3);
    fprintf(fptr, "Name  = %s\n", name3);

    printf("Enter the name:\n");
    scanf("%s", name4);
    fprintf(fptr, "Name  = %s\n", name4);


    fclose(fptr);
}

*/




