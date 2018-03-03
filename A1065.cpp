#include<cstdio>
#include<iostream>
using namespace std;
int T;
int main(){
    long long  A, B, C;
    scanf("%d", &T);
    for (int i = 1; i <= T;i++)
    {
        scanf("%lld %lld %lld", &A, &B, &C);
        long long sum = A + B;
        if(A>0&&B>0&&sum<0)
            printf("Case #%d: true\n", i);
        else if (A < 0 && B < 0 && sum >= 0)
            printf("Case #%d: false\n", i);
        else if(sum>C)
            printf("Case #%d: true\n", i);
        else
            printf("Case #%d: false\n", i);
    }
    return 0;
}
