#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i=0;

    if(argc < 2)
    {
	    printf("you didn't specify the arguement or parameters\n");
	    exit(1);
    }
    printf("Hello ");
    for (i = 1; i<argc; i++)
        printf("%s", argv[i]);
    printf("\n");
}
