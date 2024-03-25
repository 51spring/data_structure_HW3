#include <stdio.h>

 #define MAX_SIZE 100 //전처리기를 사용하여 MAX_SIZE를 100으로 정의

 float sum1(float list[], int); //매개변수를 list[]와 int로 받는 sum1 함수 선언
 float sum2(float *list, int); //매개변수를 *list와 int로 받는 sum2 함수 선언
 float sum3(int n, float *list); //매개변수를 int과 *list로 받는 sum3 함수 선언

 float input[MAX_SIZE], answer; //float형 MAX_SIZE 크기의 input 배열과 answer 변수 선언
 int i; //int형 전역변수 i 선언

 void main(void)
 {
    printf("소프트웨어학과 2021041002 오원석\n");


    for(i=0; i < MAX_SIZE; i++) //for문이 MAX_SIZE(=100)번 반복 (i는 0부터 99까지 증가)
    {
        input[i] = i; // input[i] 배열에 i를 할당 (input[0] = 0, input[1] = 1, .., input[99] = 99 가 할당됨)
    }
    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input배열의 메모리 주소를 출력
    answer = sum1(input, MAX_SIZE); //sum1에 배열 input과 MAX_SIZE를 인자로 전달하여 호출, 반환값을 answer에 저장
    printf("The sum is: %f\n\n", answer); //sum1 함수의 반환값 출력

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input배열의 메모리 주소를 출력
    answer = sum2(input, MAX_SIZE); //sum2에 배열 input과 MAX_SIZE를 인자로 전달하여 호출, 반환값을 answer에 저장
    printf("The sum is: %f\n\n", answer); //sum2 함수의 반환값 출력

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input배열의 메모리 주소를 출력
    answer = sum3(MAX_SIZE, input); //sum1에 배열 input과 MAX_SIZE를 인자로 전달하여 호출, 반환값을 answer에 저장
    printf("The sum is: %f\n\n", answer); //sum3 함수의 반환값 출력
}

 float sum1(float list[], int n) //sum1은 매개변수를 list[]와 int n 형태로 받고있음
 {
    printf("list \t= %p\n", list); //list의 메모리 주소를 출력
    printf("&list \t= %p\n\n", &list); //list의 메모리 주소를 출력
    int i; //int형 지역변수 i 선언, sum1 함수안에서는 지역변수 i를 사용
    float tempsum = 0; //float형 지역변수 tempsum 선언, 0으로 초기화
    for(i = 0; i < n; i++)
    {
        tempsum += list[i]; // tempsum에 list[i]를 더함
    }
    return tempsum; //tempsum 반환
 }

 float sum2(float *list, int n) //sum2는 매개변수를 *list와 int n 형태로 받고있음
 {
    printf("list \t= %p\n", list);  //list의 메모리 주소를 출력
    printf("&list \t= %p\n\n", &list);  //list의 메모리 주소를 출력
    int i; //int형 지역변수 i 선언, sum2 함수안에서는 지역변수 i를 사용
    float tempsum = 0; //float형 지역변수 tempsum 선언, 0으로 초기화
    for(i = 0; i < n; i++) 
    {
        tempsum += *(list + i); // tempsum에 *(list + i)를 더함 (list[i]와 같은 의미)
    }
    return tempsum; //tempsum 반환
 }

 /* stack variable reuse test */
 float sum3(int n, float *list) //sum3는 매개변수를 int n과 *list로 받고있음
 {
    printf("list \t= %p\n", list); //list의 메모리 주소를 출력
    printf("&list \t= %p\n\n", &list); //list의 메모리 주소를 출력
    int i; //int형 지역변수 i 선언, sum3 함수안에서는 지역변수 i를 사용
    float tempsum = 0;  //float형 지역변수 tempsum 선언, 0으로 초기화
    for(i = 0; i < n; i++) 
    {
        tempsum += *(list + i); // tempsum에 *(list + i)를 더함 (list[i]와 같은 의미)
    }
    return tempsum; //tempsum 반환
 }
