#include "command_struct.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    const char *cmdLineOption = argv[1]; // First command line argument
    const int length = strlen(cmdLineOption);

    const struct CommandOption *option = in_word_set(cmdLineOption, strlen(cmdLineOption));
    if(option)
    {
        switch (option->OptionCode)
        {
            case FOO :
                printf("foo\n");
                break;
            case BAR :
                printf("bar\n");
                break;
            case THING1 :
                printf("thing1\n");
                break;
            case THING2 :
                printf("thing2\n");
                break;
            default:
                // dead code
                break;
            }
    }
    else
    {
        printf("Option not found\n");
    }
    return 0;
}
