#include <stdio.h>
#include <string.h>
/*
 Jam�Ǹ�ϲ����������Ŀ�ѧ���ˡ�����ʹ�ð��������ּ���������ʹ��СдӢ����ĸ����������������������ʹ������ӷḻ��ʡ�
 �����ļ������У�ÿ�����ֵ�λ��������ͬ�ģ�ʹ����ͬ��������ĸ��Ӣ����ĸ��ԭ�ȵ�˳������ǰ�����ĸС���������������ĸ��
 ���ǰ������ġ����֡���ΪJam���֡���Jam�����У�ÿ����ĸ������ͬ�����Ҵ��������ϸ�����ġ�
 ÿ�Σ�Jam��ָ��ʹ����ĸ�ķ�Χ�����磬��2��10����ʾֻ��ʹ��{b,c,d,e,f,g,h,i,j}��Щ��ĸ��
 ����ٹ涨λ��Ϊ5����ô��������Jam���֡�bdfij��֮�������Ӧ���ǡ�bdghi����
 �����������U��V���α�ʾJam���֡�bdfij���롰bdghi������U<V< span>���Ҳ�����Jam����P��ʹU<P<V< span>����
 ��������ǣ�
 ���ڴ��ļ������һ��Jam���֣���˳����������ں����5��Jam���֣��������û����ô��Jam���֣���ô�м��������������
*/

char a[100];
char fro;
int size;
size_t len;

bool dfs(size_t idx) {
	if(a[idx] >= fro + size - len + idx) {
		printf("a[idx] >= fro + size.\n");
		return dfs(idx - 1);
	}
	a[idx]++;
	for(size_t i = idx; i < len; i++){
		a[i] = (char) (a[i - 1] + 1);
		if(a[i] >= fro + size){
			return dfs(idx - 1);
		}
	}
	return true;
}
/*for(size_t i = len - 1; i >= 0; i--){
if(a[i] >= fro + size){
//
}
}*/
int main(int argc, char** argv){
	int s, t, w;
	scanf("%i%i%i", &s, &t, &w);
	scanf("%s", a);
	size = t - s;
	len = strlen(a);
	fro = (char) ('a' - 1 + s);

	for(int i = 0; i < 5 && dfs(len - 1); i++) {
		printf("%s\n", a);
	}
//	printf("%c", fro);
//	while(1);
	return 0;
}

