#include<stdio.h>
int main() {
	int n[12];
	for (int i = 0; i <= 11; i++) {
		scanf_s("%d",&n[i]);
	}
	int term = 300;//每月固定300快printf("-%d", a);//输出哪个月欠钱
	int sheng = 0;
	int sum = 0;
	for (int a = 0; a <= 11; a++) {//循环12次
		sheng = sheng + term - n[a];//花钱剩的钱
		if (sheng < 0) {
			printf("-%d", a + 1);//输出哪个月欠钱
			return 0;
		}
		else {
			sum = sum + (sheng / 100) * 100;//如果满足则算交给妈妈的钱
			sheng = sheng - (sheng / 100) * 100;//除交给妈妈的钱剩下的钱
		}
	}
	sum = sum * (1 + 0.2);//年底妈妈攒的钱
	printf("%d", sum + sheng);
	return 0;
}