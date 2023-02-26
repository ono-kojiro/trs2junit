#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int ret = 0;
    int i;
    int n;

    for(i = 1; i < argc; i++){
        ret = atoi(argv[i]);
    }

    return ret;
}

