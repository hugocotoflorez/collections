#include "misc.h"
#include <stdio.h>

int
main(int argc, char *argv[])
{
        struct hello
        {
                int a;
                int b;
        } hello1, *hello2;

        hello1 = (struct hello) { 1, 3 };
        hello2 = objcpy(hello1);

        printf("A %d B %d\n", hello2->a, hello2->b);

        free(hello2);

        return 0;
}
