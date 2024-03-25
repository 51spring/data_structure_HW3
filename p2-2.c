 #include <stdio.h>
 void print_one(int *ptr, int rows);
 int main()
 {
    printf("소프트웨어학과 2021041002 오원석\n");

    int one[] = {0, 1, 2, 3, 4}; //one배열 선언 및 초기화, 배열의 크기는 5가 됨
    printf("one         = %p\n", one); //one의 메모리 주소 출력
    printf("&one        = %p\n", &one); //&를 사용해 one의 메모리 주소 출력
    printf("&one[0] = %p\n", &one[0]); //&one[0]의 메모리 주소 출력
    printf("\n");

    printf("------------------------------------\n");
    printf("  print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //print_one 함수의 인자로 &one[0]과 5전달
    
    printf("------------------------------------\n");
    printf("  print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //print_one 함수의 인자로 one과 5전달
    
    return 0;
    }
    
void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n"); // \t는 출력창에서 tab키 기능 수행
    for (i = 0; i < rows; i++)
        {
            printf("%p \t  %5d\n", ptr + i, *(ptr + i));
            //%5는 숫자의 자릿수를 5자리로 설정하고 오른쪽 정렬, 포인터의 주소와 포인터가 가리키는 값 출력
        }
    printf("\n");
 }