//喝汽水,1瓶汽水1元,2个空瓶可以换一瓶汽水,给20元,可以喝多少汽水.
//先分析理解题意,
//1. 给20元买汽水就有20个空瓶,20个空瓶可以换10瓶汽水,
//2. 10个空瓶可以换5瓶汽水,5个空瓶可以换2瓶汽水,剩余一个空瓶,
//3. 2个空瓶可以换一瓶汽水,
//4. 剩余一个空瓶+剩余的另外一个空瓶=一瓶汽水.
//20+10+5+2+1+1=39瓶汽水
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<windows.h>
//int Drinksum(int money, int price){
//	int sum = 0;
//	int empty = 0;
//	int ret = 0;
//	sum = money / price;
//	ret = sum;
//	while (ret / 2 != 0){
//		empty = ret;
//		ret = ret / 2;
//		sum += ret;
//		ret = ret + empty % 2;
//	}
//	return sum;
//}
//int main(){
//	int money = 0;
//	int price = 0;
//	printf("please enter money and price:\n");
//	scanf("%d %d", &money, &price);
//	int bottle = Drinksum(money, price);
//	printf("%d元可以喝汽水%d瓶\n", money, bottle);
//	getchar();
//	return 0;
//}

/*方法一:
#include<stdio.h>
#include<windows.h>
int main(){
	int sum = 0;//汽水的总数
	int money = 20;//钱的总额
	int empty = 0;//空瓶的数量
	sum = 20 / 1;
	empty = sum;
	while (empty > 1){
		sum += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", sum);
	getchar();
	return 0;
}
*/
#pragma warning(disable:4996)
#include<stdio.h>
int main(){
	int money = 20;
	int sum = 0;
	int empty = 0;
	if(money < 1){
		sum=0;
	}
	else{
		sum = money * 2 - 1;//根据分析可以得知是等差数列,
	}
	printf("%d\n",sum);
	getchar();
	return 0;
}