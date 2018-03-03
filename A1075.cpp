#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct student{
    int user_id, score[6]={-1,-1,-1,-1,-1,-1} ,sum=0,rank,perfect=0;
    bool flag = false;
} stu[10010];
bool cmp(student a,student b)
{
    if(a.sum!=b.sum)
        return a.sum >= b.sum;
    else if(a.perfect!=b.perfect)
        return a.perfect >= b.perfect;
    else
        return a.user_id < b.user_id;
}
int main(){
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);
    int p[10] = {0};
    for (int i = 1; i <=k;i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < m;i++)
    {
        int id, num, score1;
        scanf("%d %d %d", &id, &num, &score1);
        stu[id].user_id = id;
        stu[id].score[num] = max(score1, stu[id].score[num]);
        if (score1 != -1)
            stu[id].flag = true;
        else if (stu[id].score[num]==-1)
            stu[id].score[num] = -2;
    }
    for (int i = 1; i <=n;i++)
    {
        for (int j = 1; j <=k;j++)
        {
             if (stu[i].score[j] >= 0)
            {
                stu[i].sum += stu[i].score[j];
                if (stu[i].score[j]==p[j])
                    stu[i].perfect++;
                        }
        }
    } 
    sort(stu+1, stu + n+1, cmp);
    stu[1].rank = 1;
    for (int i = 2; i <=n;i++)
        {
            stu[i].rank = (stu[i - 1].sum == stu[i].sum) ? (stu[i-1].rank) : (i);
        }
        for (int i = 1; i <=n;i++)
        {
            if(stu[i].flag){
                printf("%d %05d %d", stu[i].rank, stu[i].user_id, stu[i].sum);
                for (int j = 1; j <=k;j++)
                {
                    if (stu[i].score[j] != -1 && stu[i].score[j] != -2)
                        printf(" %d", stu[i].score[j]);
                    else if (stu[i].score[j] == -1)
                        printf(" -");
                    else
                        printf(" 0");
                        }
                        printf("\n");
            }
        }
        system("pause");
        return 0;
}