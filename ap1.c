#include <stdio.h>
#include <stdlib.h> // malloc 함수를 사용하기 위해 라이브러리 포함
void main()
{
    printf("소프트웨어학과 2021041002 오원석\n");
    /*---메모리 영역 1---*/
    int list[5]; // 배열의 크기가 5인 정수형 배열 선언
    int *plist[5] = {NULL,}; // 배열의 크기가 5인 정수형 포인터 배열 선언 및 NULL로 초기화

    /*---메모리 영역 2---*/
    plist[0] = (int *)malloc(sizeof(int));
    // plist[0]에 int형 크기의 메모리를 malloc 함수를 사용하여 heap 영역에 동적 할당
    list[0] = 1; // list[0]에 1 할당
    list[1] = 100; // list[1]에 100 할당
    *plist[0] = 200; // plist[0]이 가리키는 주소에 200 할당
    
    // list와 plist의 주소와 값을 출력
    printf("list[0]            = %d\n", list[0]); // list[0]의 값 출력
    printf("&list[0]           = %p\n", &list[0]); // &연산자를 사용해 list[0]의 주소 출력
    printf("list               = %p\n", list); // 배열의 이름을 통해 list의 주소를 출력
    printf("&list              = %p\n", &list); // &연산자를 사용해 list의 주소 출력
    // %p로 출력한 list의 주소는 모두 동일

    printf("----------------------------------------\n\n");
    printf("list[1]            = %d\n", list[1]); // list[1]의 값을 출력
    printf("&list[1]           = %p\n", &list[1]); // &연산자를 사용해 list[1]의 주소 출력
    printf("*(list+1)          = %d\n", *(list + 1)); // list[1]의 값을 출력
    printf("list+1             = %p\n", list+1); // list+1의 주소 출력
    // list[1]과 *(list+1)은 동일한 값을 출력하며, list+1의 주소는 list[1]의 주소와 동일

    printf("----------------------------------------\n\n"); 
    printf("*plist[0]          = %d\n", *plist[0]); // plist[0]이 가리키는 주소의 값을 출력
    printf("&plist[0]          = %p\n", &plist[0]); // &연산자를 사용해 plist[0]의 주소를 출력
    printf("&plist = %p\n", &plist); // &연산자를 사용해 plist의 주소를 출력
    printf("plist = %p\n", plist); // 배열의 이름을 통해 plist의 주소를 출력
    // &list와 &list[0], plist를 %p로 출력한 값은 모두 plist의 주소와 동일

    printf("plist[0]           = %p\n", plist[0]); // plist[0]의 값을 출력 (동적 할당된 메모리의 주소
    printf("plist[1]           = %p\n", plist[1]); // plist[1]의 값을 출력 (NULL값)
    printf("plist[2]           = %p\n", plist[2]); // plist[2]의 값을 출력 (NULL값)
    printf("plist[3]           = %p\n", plist[3]); // plist[3]의 값을 출력 (NULL값) 
    printf("plist[4]           = %p\n", plist[4]); // plist[4]의 값을 출력 (NULL값)
    
    /*---메모리 영역 3---*/
    free(plist[0]); // free 함수를 사용하여 동적으로 할당된 heap영역의 메모리 해제
}
