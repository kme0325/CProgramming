#include "Header.h"

//연습문제 1) 숫자 하나를 입력받고, 화면에 "양수" 또는 "음수"를
//출력하는 프로그램 코드를 작성하시오.
//int main()
//{
//	int number;
//	printf("숫자를 입력하세요 >> ");
//	scanf("%d", &number);
//	if (number > 0)
//	{
//		printf("양수\n");
//	}
//	else if(number < 0)
//	{
//		printf("음수\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//	return 0;
//}

//연습문제2) 과세 표준에 따라서 근로 소득세 계산하시오.
//표준은 다음과 같습니다.
//1,200 만원 이하					세율 6%
//1,200만원 초과 ~ 4,600 만원 이하	세율 15%
//4,600만원 초과 ~ 8,800 만원 이하	세율 24%
//조건) 사용자는 본인의 소득액을 만원 단위로 작성합니다.
//출력 예시)
//2024년 소득액을 작성해주세요.(만원 단위) >> 1200
//세율은 6%입니다.
//지불하실 세금은 720000입니다.
//int main()
//{
//	float money, tax_rate, tax;
//	printf("2024년 소득액을 작성해주세요.(만원 단위) >> ");
//	scanf("%f", &money);
//	if (money <= 1200)
//	{
//		tax_rate = 0.06f;
//	}
//	else if(money<=4600)
//	{
//		tax_rate = 0.15f;
//	}
//	else if (money <= 8800)
//	{
//		tax_rate = 0.24f;
//	}
//	tax = money * tax_rate;
//	printf("세율은 %.0f%%(만원)입니다.\n", tax_rate * 100); //%%은 화면에 %를 출력할 때 사용
//	printf("지불하실 세금은 %.0f(만원)입니다.\n", tax);
//	return 0;
//}

//정수 3개를 입력받아서 입력한 숫자 중에서 가장 큰 수를
//화면에 출력합니다.
//int main()
//{
//	int a, b, c;
//	printf("숫자 3개를 입력하세요 >> ");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b)
//	{
//		if (a>=c)
//		{
//			printf("%d\n", a);
//		}
//		else
//		{
//			printf("%d\n", c);
//		}
//	}
//	else
//	{
//		if (b >= c)
//		{
//			printf("%d\n", b);
//		}
//		else
//		{
//			printf("%d\n", c);
//		}
//	}
//	return 0;
//}