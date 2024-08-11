#include <stdio.h>
#include "common.h"
#include "view.h"

status read_and_validate_view_arguments(char *argv[], TagInfo *tagInfo)
{
    if(argv[2] == NULL)
    {
        printf("Error: Invalid arguments\n");
        printf("Usage : To view please pass like: ./a.out -v mp3filename\n");
        return failure;
    }

    if(strstr(argv[2],"mp3") == NULL)
    {
        printf("Error: Invalid file format\n");
        printf("Usage: to view please pass like: ./a.out -v mp3filename\n");
        return failure;
    }

    tagInfo->fptr_mp3_file = fopen(argv[2], "r");

    if(tagInfo->fptr_mp3_file == NULL)
    {
        printf("Error: unable to open the file %s\n", argv[2]);
        return failure;
    }

    char str[3], ver[2];

    fread(str, 1, 3, tagInfo->fptr_mp3_file);
    //fread(str, 2, 1, tagInfo->fptr_mp3_file);
    if(!strcmp(str, "ID3"))
    {
        return success;  
    }

    return failure;
}