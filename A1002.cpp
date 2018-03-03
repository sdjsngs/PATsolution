#include<iostream>
using namespace std;
const int N = 1001;


int  main()
{
    float num[N] = {0}, sum[N] = {0};
    int k,n;
    for(int i = 0;i < 2;i++)
    {
        scanf("%d", &k);
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &n);
            scanf("%f", &num[n]);
            sum[n] += num[n];
        }
    }
    int cnt=0;
    for(int index = 0;index <1001;index++)
    {
        if(sum[index]!=0)
            cnt++;
    }
    printf("%d", cnt);
    for(int i =1000;i >= 0;i--)
    {
        if(sum[i]!=0)
            printf(" %d %.1f", i, sum[i]);
    }
    return 0;
}