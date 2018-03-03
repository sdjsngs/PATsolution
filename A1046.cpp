#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int N,M;

int  main()
{
    scanf("%d", &N);
    vector<int> dis[N+1];
    int sum=0, left, right,temp;
    for (int i = 1; i <= N;i++)
    {
        scanf("%d", &temp);
        sum += temp;
        dis[i] = sum;
    }
    scanf("%d", &M);
    for (int i = 0; i < M;i++)
    {
        scanf("%d %d", &left, &right);
        //保证left小于right
        //swap(left,right);
        if(left>right)
        {
            temp = left;
            left = right;
            right = temp;
        }
        int ex = dis[right-1] - dis[left-1];
        printf("%d", ex);
    }

    system("pause");
    return 0;
}