# include <stdio.h>
# include <string.h>

int main( )
{
    FILE *filePointer ;

    char dataToBeWritten[50]= " ZABIRUL ISLAM ";

    filePointer = fopen("zabirulislam.c","w+") ;
    filePointer = fopen("zabirulislam.c","w+") ;

    if ( filePointer == NULL )
    {
        printf( " file failed to open " ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

        if ( strlen (  dataToBeWritten  ) > 0 )
        {
            fputs(dataToBeWritten, filePointer) ;
            fputs("\n", filePointer) ;
        }
        fclose(filePointer) ;
        printf("Data successfully written in file \n");
    }
}
