#include<stdio.h>
main()
{
    int i=0;

    FILE *fptr;
    fptr = fopen("Ilobu.txt", "w");

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }

    for(i=0;i<1000;i++)
    {
        fprintf(fptr, "I lob you\n" );
    }
    fclose(fptr);
}
