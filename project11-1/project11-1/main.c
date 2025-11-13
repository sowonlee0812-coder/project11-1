
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    int i = 10;
    char c = 'a';
    int *iptr;
    char *cptr;
    int *iptr2;
    
    iptr = &i;
    cptr = &c;
    iptr2 = iptr;

    
    printf("i: %p\n%p (size:%i)\n", iptr, &i, sizeof(iptr));
    printf("c: %p\n%p (size:%i)\n", cptr, &c, sizeof(cptr));
    printf("iptr2: %p, %i\n\n", iptr2, *iptr2);
    
    system("PAUSE");
    return 0;
    
}
