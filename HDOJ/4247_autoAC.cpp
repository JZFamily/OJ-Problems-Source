#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[4],cas = 1;
    int x,y,ans;
    while(~scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]))
    {
        sort(a,a+4);
        printf("Case %d: %d\n",cas++,a[2]+a[3]);
    }
    return 0;
}
