/*
����:ǧ�����
��Ŀ:p2235 ��Ʊ����
*/

#include <stdio.h>
int main(int argc, char* argv[]) {
    int a;
	float b;
    scanf("%i%f", &a, &b);
    b /= 10.0;
	a *= b;
	if(a % 10 < 5)
		a -= a % 10;
	else {
		a -= a % 10;
		a += 10;
	}
    printf("%i", a);
    return 0;
}
