#include<iostream>
using namespace std;
const int N = 1001;
int n1, n2;
double arr[1001] = {0.0}, ans[2002] = {0.0};
int  main()
{
    int n;
    double temp;
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &n);
        scanf("%lf", &arr[n]);
    }
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &n);
        scanf("%lf", &temp);
        for (int j = 0; j <1001;j++)
        {
            ans[n + j] += arr[j] * temp;
        }
    }
    int count = 0;
    for (int i = 0; i < 2001; i++)
    {
        if(ans[i]!=0)
            count++;
    }
    printf("%d", count);
    for (int i = 2000; i >= 0; i--)
    {
        if(ans[i]!=0.0)
            printf(" %d %.1f", i, ans[i]);
    }
   
    return 0;
}