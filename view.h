#ifndef VIEW_H
#define VIEW_H

#include "common.h";

//Read and validate arguments for view mp3 tag details from argv
status read_and_validate_view_arguments(char *argv[], TagInfo *tagInfo);

//Display the tag details fetched from the mp3 file
status display_detail();

#endif