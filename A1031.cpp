#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
char str[80],u[30][30];

int main(){
    int n1, n2, n;
    memset(u, ' ', sizeof(u));
    scanf("%s", &str);
    n = strlen(str)+2;
    n1 = n / 3;
    n2 = n / 3 + n % 3;
   int  index = 0;
    for (int i = 0; i < n1;i++)
    {
        u[i][0] = str[index++];
    }
    for (int i = 1; i < n2; i++)
    {
        u[n1 - 1][i] = str[index++];
    }
    for (int i = n1-2; i >=0; i--)
    {
        u[i][n2-1] = str[index++];
    }
    for (int i = 0; i < n1;i++)
    {
        for (int j = 0; j < n2;j++)
        {
            printf("%c", u[i][j]);
        }
        printf("\n");
    }
    return 0;
}