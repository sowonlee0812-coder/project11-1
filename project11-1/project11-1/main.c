
#include <stdlib.h>
#include <stdio.h>

char *proverb="All that glisters is not gold.";

void setPointer(char **q)
{
    *q = proverb;
}

int main(int argc, char * argv[])
{
    char *p = "zzz";
    setPointer(&p);
    printf("%s\n", p);

    system("PAUSE");
    return 0;
    
}
