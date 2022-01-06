#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[11];
    printf("input>");
    fgets(str,11,stdin);
    if(str[strlen(str)-1]=='\n')str[strlen(str)-1]='\0';
    printf("--output--\n");
    printf("\"%s\"\n",str);
    printf("\\%-20s\\\n",str);
    printf("\\%20s\\\n",str);

    return 0;
}