#include <stdio.h>

int main(void)
{
    char name[256];    
    printf("누구세요?\n");
    scanf("%s", name);
    printf("%s님 반가워요!\n", name);

    // 테스트 
    return 0;
}