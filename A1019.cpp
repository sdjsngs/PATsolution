#include<iostream>
#include<cstdio>
using namespace std;

int main(){

int N,k;
scanf("%d %d", &N, &k);
int arr[40], index = 0;
while(N!=0)
{
    arr[index++] = N % k;
    N = N / k;
}
bool flag = true;
for (int i = 0; i < index / 2;i++)
{
    if(arr[i]!=arr[index-1-i])
    {
        printf("No\n");
        flag=false;
        break;
    }
}
if(flag)
    printf("Yes\n");
for (int i = index-1; i>=0;i--)
    {
    printf("%d", arr[i]);
    if(i!=0)
        printf(" ");
    } 
if(index==0)
{
    printf("0");
}
return 0;
}