#include<string>
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
//1(one)by @, 0(zero)by %, l by L, and O by o
 struct USER
{
    char name[15];
    char pass[15];
    bool ischange;
}user[1010];

int main(){
    int N, count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N;i++)
    {
        scanf("%s %s", user[i].name, user[i].pass);
        user[i].ischange = false;
    }
    for (int i = 0; i < N; i++)
    {
        int len = strlen(user[i].pass);
        for (int j = 0; j < len;j++)
        {
            if(user[i].pass[j]=='1')
            {
                user[i].pass[j] = '@';
                user[i].ischange = true;
            }
            else if (user[i].pass[j] == '0')
            {
                user[i].pass[j] = '%';
                user[i].ischange = true;
            }
            else if (user[i].pass[j] == 'l')
            {
                user[i].pass[j] = 'L';
                user[i].ischange = true;
            }
            else if (user[i].pass[j] == 'O')
            {
                user[i].pass[j] = 'o';
                user[i].ischange = true;
            }  
        }
        if (user[i].ischange)
                count++;   
    }
    if(count==0)
    {
        if(N==1)
            printf("There is %d account and no account is modified\n", N);
        else
            printf("There are %d accounts and no account is modified", N);
    }
      
    else printf("%d\n", count);
    for (int i = 0; i < N; i++)
    {
        if(user[i].ischange)
        {
            printf("%s %s\n", user[i].name, user[i].pass);   
        }
    }
    system("pause");
    return 0;
}