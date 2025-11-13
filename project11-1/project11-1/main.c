
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    int i = 300;
    
    int *pi = &i;
    char *pc = &i;
    
    printf("%i, %i, %i\n", i, *pi, *pc);
    
    system("PAUSE");
    return 0;
    
}

//300 넣으면 300,300,44
//300을 넣었을 때 *pc에 44가 들어가는 이유는 300-44=256
//0~255 표현가능
