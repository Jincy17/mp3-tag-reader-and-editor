#include <stdio.h>
#include "common.h"
#include "view.h"

int main(int argc, char *argv[])
{
    if(argc <= 1)
    {
        printf("------------------------------------------------------------------------------------\n");
        printf("ERROR: ./a.out : INVALID ARGUMENTS\n");
        printf("USAGE :\n");
        printf("To view please pass like: ./a.out -v mp3filename\n");
        printf("To edit please pass like : ./a.out -e -t/-a/-A/-m/-y/-c changing_text mp3filename\n");
        printf("To get help pass like : ./a.out --help\n");
        printf("------------------------------------------------------------------------------------\n");
        return 1;
    }

    TagInfo tag;
    
    if(check_operation_type == view)
    {
        printf("--------------------SELECTED VIEW DETAILS--------------------\n");

        if(read_and_validate_view_arguments(argv, &tag) == success)
        {
            if(display_detail(&tag) == success)
            {
                 printf("----------------DETAILS DISPLAYED SUCCESSFULLY---------------\n");
            }
        }


    }
    else if(check_operation_type == edit)
    {

    }
    else if(check_operation_type == help)
    {
        void help_menu();
    }





}

OperationType check_operation_type(char *argv[])
{
    if(!strcmp(argv[1], "-v"))
    {
        return view;
    }
    else if(!strcmp(argv[1], "-e"))
    {
        return edit;
        // if(argv[2] == "-t")
        //     return edit_song_title;
        // else if(argv[2] == "-a")
        //     return edit_artist_name;
        // else if(argv[2] == "-A")
        //     return edit_album_name;
        // else if(argv[2] == "-y")
        //     return edit_year;
        // else if(argv[2] == "-m")
        //     return edit_content;
        // else if(argv[2] == "-c")
        //     return edit_comment;
    }
    else if(!strcmp(argv[1], "--help"))
    {
        return help;
    }
    
    return invalid; 
}

void help_menu()
{
    printf("----------------HELP MENU----------------\n");
    printf("1. -v -> to view mp3 file contents\n");
    printf("2. -e -> to edit mp3 file contents\n");
    printf("%8s 2.1. -t to edit song title\n"," ");
    printf("%8s 2.2. -a to edit artist name\n"," ");
    printf("%8s 2.3. -A to edit album name\n"," ");
    printf("%8s 2.4. -y to edit year\n"," ");
    printf("%8s 2.5. -m to edit content\n"," ");
    printf("%8s 2.6. -c to edit comment\n"," ");
    printf("-----------------------------------------\n");
}