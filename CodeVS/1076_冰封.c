/*
����:ǧ�����
��Ŀ:p1076 ����
*/

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y){
	return *(int*)x > *(int*)y;
}

int main(int argc, char* argv[]){
    int a[100000], size;
    int i, j;
    scanf("%i", &size);
    for(i = 0; i < size; i++)
    	scanf("%i", &a[i]);
	qsort(a, size, sizeof(a[0]), cmp);
    for(i = 0; i < size; i++)
    	printf("%i ", a[i]);
	return 0;
}
