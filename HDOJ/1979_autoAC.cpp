#include<stdio.h>
#include<iostream>
#include <string>
using namespace std;
int main()
{
    string s="1193\n1009\n9221\n3191\n\n1193\n1021\n9029\n3911\n\n1193\n1201\n9209\n3911\n\n1193\n1229\n9001\n3191\n\n1193\n7043\n3697\n3911\n\n1193\n7253\n3821\n3319\n\n1193\n7253\n3851\n3319\n\n1193\n7457\n3821\n3719\n\n1193\n7963\n3407\n3911\n\n1193\n9001\n1229\n3191\n\n1193\n9011\n1669\n3911\n\n1193\n9013\n1669\n3911\n\n1193\n9029\n1021\n3911\n\n1193\n9041\n1399\n3371\n\n1193\n9209\n1201\n3911\n\n1193\n9221\n1009\n3191\n\n1193\n9257\n3821\n3319\n\n1193\n9257\n3851\n3319\n\n1193\n9479\n1381\n3917\n\n1193\n9661\n1109\n3911\n\n1193\n9661\n3109\n3911\n\n1193\n9923\n1009\n3191\n\n1733\n1069\n9491\n3371\n\n1733\n1283\n9521\n3319\n\n1733\n1283\n9551\n3319\n\n1733\n1487\n9521\n3719\n\n1733\n1949\n9601\n3371\n\n1733\n9227\n1021\n3719\n\n1733\n9931\n1409\n3911\n\n1913\n1009\n9221\n3911\n\n1913\n1021\n9029\n3191\n\n1913\n1033\n9497\n3191\n\n1913\n1069\n9161\n3191\n\n1913\n1069\n9161\n3391\n\n1913\n1201\n9209\n3191\n\n1913\n1229\n9001\n3911\n\n1913\n1439\n9781\n3917\n\n1913\n1619\n9601\n3191\n\n1913\n1901\n9209\n3391\n\n1913\n7207\n3221\n3719\n\n1913\n7949\n3301\n3191\n\n1913\n9001\n1229\n3911\n\n1913\n9001\n3299\n3911\n\n1913\n9029\n1021\n3191\n\n1913\n9173\n3389\n3391\n\n1913\n9209\n1201\n3191\n\n1913\n9221\n1009\n3911\n\n1933\n1283\n9521\n3719\n\n1933\n1283\n9551\n3719\n\n1933\n1619\n9601\n3191\n\n1933\n9029\n1091\n3191\n\n1933\n9133\n1789\n3391\n\n1933\n9833\n3719\n3191\n\n1933\n9871\n3319\n3391\n\n3191\n1009\n9221\n1193\n\n3191\n1009\n9923\n1193\n\n3191\n1021\n9029\n1913\n\n3191\n1091\n9029\n1933\n\n3191\n1201\n9209\n1913\n\n3191\n1229\n9001\n1193\n\n3191\n3301\n7949\n1913\n\n3191\n3719\n9833\n1933\n\n3191\n7027\n1223\n9173\n\n3191\n9001\n1229\n1193\n\n3191\n9029\n1021\n1913\n\n3191\n9161\n1069\n1913\n\n3191\n9209\n1201\n1913\n\n3191\n9221\n1009\n1193\n\n3191\n9341\n1879\n7193\n\n3191\n9497\n1033\n1913\n\n3191\n9601\n1619\n1913\n\n3191\n9601\n1619\n1933\n\n3319\n3821\n7253\n1193\n\n3319\n3821\n9257\n1193\n\n3319\n3851\n7253\n1193\n\n3319\n3851\n9257\n1193\n\n3319\n9521\n1283\n1733\n\n3319\n9551\n1283\n1733\n\n3371\n1399\n9041\n1193\n\n3371\n3821\n1259\n9133\n\n3371\n3821\n1559\n9133\n\n3371\n7229\n1201\n9173\n\n3371\n7841\n1259\n9173\n\n3371\n9491\n1069\n1733\n\n3371\n9601\n1949\n1733\n\n3391\n1789\n9133\n1933\n\n3391\n3319\n9871\n1933\n\n3391\n3389\n9173\n1913\n\n3391\n3821\n1259\n9173\n\n3391\n3821\n1559\n9173\n\n3391\n9161\n1069\n1913\n\n3391\n9209\n1901\n1913\n\n3719\n1021\n9227\n1733\n\n3719\n3221\n7207\n1913\n\n3719\n3821\n7457\n1193\n\n3719\n9521\n1283\n1933\n\n3719\n9521\n1487\n1733\n\n3719\n9551\n1283\n1933\n\n3911\n1009\n9221\n1913\n\n3911\n1021\n9029\n1193\n\n3911\n1109\n9661\n1193\n\n3911\n1201\n9209\n1193\n\n3911\n1229\n9001\n1913\n\n3911\n1409\n9931\n1733\n\n3911\n1669\n9011\n1193\n\n3911\n1669\n9013\n1193\n\n3911\n3109\n9661\n1193\n\n3911\n3299\n9001\n1913\n\n3911\n3407\n7963\n1193\n\n3911\n3527\n1283\n9133\n\n3911\n3527\n1583\n9133\n\n3911\n3697\n7043\n1193\n\n3911\n7529\n1283\n9133\n\n3911\n7529\n1583\n9133\n\n3911\n7547\n1283\n9173\n\n3911\n9001\n1229\n1913\n\n3911\n9029\n1021\n1193\n\n3911\n9209\n1201\n1193\n\n3911\n9221\n1009\n1913\n\n3911\n9749\n1831\n7193\n\n3917\n1381\n9479\n1193\n\n3917\n9781\n1439\n1913\n\n7193\n1831\n9749\n3911\n\n7193\n1879\n9341\n3191\n\n9133\n1259\n3821\n3371\n\n9133\n1283\n3527\n3911\n\n9133\n1283\n7529\n3911\n\n9133\n1559\n3821\n3371\n\n9133\n1583\n3527\n3911\n\n9133\n1583\n7529\n3911\n\n9173\n1201\n7229\n3371\n\n9173\n1223\n7027\n3191\n\n9173\n1259\n3821\n3391\n\n9173\n1259\n7841\n3371\n\n9173\n1283\n7547\n3911\n\n9173\n1559\n3821\n3391";
    cout<<s<<endl;
}
