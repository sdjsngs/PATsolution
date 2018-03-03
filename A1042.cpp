#include<cstdio>
#include<iostream>
const int num=55;
int start[num], end[num], scan[num], cnt;
char mp[6] = {'S', 'H', 'C', 'D', 'J'};

int main(){
    scanf("%d", &cnt);
    for(int i = 1; i < 55;i++)
    {
        scanf("%d", &scan[i]);
        start[i] = i;
    }
    for (int step = 0; step < cnt;step++)
    {
        for(int i = 1;i < 55;i++)
        {
            end[scan[i]] = start[i];
        }
        for (int i = 1; i < 55; i++)
        {
            start[i] = end[i];
        }
    }
    for (int i = 1; i < 55; i++)
    {
        start[i]--;
        if(i!=1)
            printf(" ");
        printf("%c%d", mp[start[i] / 13], start[i] % 13 + 1);
    }
    //system("pause");
    
    return 0;
}