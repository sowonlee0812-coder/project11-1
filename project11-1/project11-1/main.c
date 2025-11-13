
#include <stdlib.h>
#include <stdio.h>

void swap (int* x, int* y) //x랑 y를 포인터 변수로 변경
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; //등장하는 모든 x랑 y에 포인터 * 추가
}

int main(int argc, char * argv[])
{
    int a = 3, b = 5;
    
    swap(&a,&b); // 얘도 주소로 바꿔줌
    
    printf("a:%i, b:%i\n", a, b);
    
    system("PAUSE");
    return 0;
    
}

//void swap (int x, int y) 실행하면 스왑 안되고 a,b 그대로 나옴 call by value 라서
//int x int y 가 지역변수이기 때문
//포인터 변수를 이용하면 스왑을 실행시킬수있게됨
