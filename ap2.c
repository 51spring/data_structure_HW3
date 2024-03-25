 #include <stdio.h>
 #include <stdlib.h> // malloc 함수를 사용하기 위해 라이브러리 포함

 void main()
 {
    printf("소프트웨어학과 2021041002 오원석\n");
    // ---메모리 영역 1 --- //
    int list[5]; //정수형 배열 list 선언
    int *plist[5]; //정수형 포인터 배열 plist 선언
    list[0] = 10; //list[0]에 10 할당
    list[1] = 11; //list[1]에 11 할당
    plist[0] = (int*)malloc(sizeof(int));
    //plist[0]에 int 크기의 메모리를 malloc을 사용하여 heap영역에 동적할당

    printf("list[0] \t= %d\n", list[0]); //배열의 첫번째 값 출력
    printf("list \t\t= %p\n", list); // 배열의 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소 출력
    printf("list + 0 \t= %p\n", list+0); //list[0]의 주소 출력
    printf("list + 1 \t= %p\n", list+1); //list[1]의 주소 출력
    printf("list + 2 \t= %p\n", list+2); //list[2]의 주소 출력
    printf("list + 3 \t= %p\n", list+3); //list[3]의 주소 출력
    printf("list + 4 \t= %p\n", list+4); //list[4]의 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 출력
    
    // --- 메모리 영역 2 --- //
    free(plist[0]); // 동적으로 할당된 메모리 해제
}