#ifndef COMMON_H
#define COMMON_H

#include<stdio.h>

typedef enum
{
    view,
    edit,
    help,
    invalid
} OperationType;

typedef enum
{
    failure,
    success
}status;

typedef enum
{
    edit_song_title,
    edit_artist_name,
    edit_album_name,
    edit_year,
    edit_content,
    edit_comment,
    invalid
}edit_type;

typedef struct TagInfo
{
    char *mp3_file_name;
    FILE *fptr_mp3_file;

}TagInfo;

OperationType check_operation_type(char *argv[]);
void help_menu();

#endif