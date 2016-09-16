#include  <stdio.h>
#include <string.h>
int main()
{
       char *str = "hello, world";
    char *str1 = "hello, world";
    if (strcmp(str, str1))
        printf("equal");
    else
        printf("unequal");


}
