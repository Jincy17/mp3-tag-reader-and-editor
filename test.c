#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[3], ver[2];
    FILE *fptr = fopen("sample.mp3","r");

    fread(str,3,1,fptr);
    printf("%s",str);

    fread(ver, 2, 1, fptr);
    short v = atoi(ver);
    printf("%hx", v);
    printf("%s", ver);
    
    return 0;   
}