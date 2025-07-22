#include <stdio.h>
#include <string.h>

#define MAX_INPUT_SIZE 1024
#define MAX_ARGS_SIZE 32
int main()
{
    char input[MAX_INPUT_SIZE];
    char *args[MAX_ARGS_SIZE];
    while (1)
    {   
        printf("myshell > ");
        fgets(input, sizeof(input),stdin);

        args[0] = strtok(input, " "); 

        int i = 1;
        while (i < MAX_ARGS_SIZE - 1 && (args[i] = strtok(NULL, " ")) != NULL) {
            i++;
        }
        args[i] = NULL;



        if (strcmp(args[0], "exit") == 0) {
            break;
        };       
    };

    return 0;
}

