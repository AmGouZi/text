//����ˮ,1ƿ��ˮ1Ԫ,2����ƿ���Ի�һƿ��ˮ,��20Ԫ,���Ժȶ�����ˮ.
//�ȷ����������,
//1. ��20Ԫ����ˮ����20����ƿ,20����ƿ���Ի�10ƿ��ˮ,
//2. 10����ƿ���Ի�5ƿ��ˮ,5����ƿ���Ի�2ƿ��ˮ,ʣ��һ����ƿ,
//3. 2����ƿ���Ի�һƿ��ˮ,
//4. ʣ��һ����ƿ+ʣ�������һ����ƿ=һƿ��ˮ.
//20+10+5+2+1+1=39ƿ��ˮ
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
//	printf("%dԪ���Ժ���ˮ%dƿ\n", money, bottle);
//	getchar();
//	return 0;
//}

/*����һ:
#include<stdio.h>
#include<windows.h>
int main(){
	int sum = 0;//��ˮ������
	int money = 20;//Ǯ���ܶ�
	int empty = 0;//��ƿ������
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
		sum = money * 2 - 1;//���ݷ������Ե�֪�ǵȲ�����,
	}
	printf("%d\n",sum);
	getchar();
	return 0;
}