/*
����:ǧ�����
��Ŀ:p1430 �����ж�
*/

#include <stdio.h>
#include <math.h>

int isPrime(int num){
	int i;
	if(num == 1){
		return 0;
	}
	for(i = 2; i <= sqrt(num); i++)
		if(!(num % i))
			return 0;
	return 1;
}

int main(int argc, char* argv[]){
	int a;
	scanf("%i", &a);
	printf("%s", isPrime(a) ? "\\t" : "\\n");
	return 0;
}
