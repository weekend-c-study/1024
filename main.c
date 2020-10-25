#include<stdio.h>

int main() 
{
	printf("char size : %d\n", sizeof(char));
	printf("short size : %d\n", sizeof(short));
	printf("int size : %d\n", sizeof(int));
	printf("long size : %d\n", sizeof(long) );
	printf("long long size : %d\n", sizeof(long long));
	return 0;

}

/*
#include<stdio.h>
int main() 
{
	//데이터타입 변수이름;
	char num;
	// = 의 왼쪽에 있는 변수: 메모리공간을 지칭
	num = 128;


	// = 오른쪽또는 단독으로쓰는 변수
	// 메모리에 저장된 값을 의미한다.
	printf("num : %d", num);

	//변수의 정의선언 동시 초기화
	int num1=100;

	//여러개 나열가능 ,
	char a, b, c;
	
	return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

int main() 
{
	printf("%d\n",10);//함수 호출
	printf("CHAR_BIT    :   %d\n", CHAR_BIT);
	printf("CHAR_MAX    :   %d\n", CHAR_MAX);
	printf("CHAR_MIN    :   %d\n", CHAR_MIN);
	return 0;
}

//char 1바이트 - 데이터의 최소단위
//short 2바이트
//int 4바이트
//long 8바이트
//long long
*/
