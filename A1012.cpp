#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct Student
{
    int id;
    int grade[4];
}stu[2020];
int now;
bool cmp(Student a,Student b)
{
   // if(a.grade[now]!=b.grade[now])
        return a.grade[now] > b.grade[now];
}

int r[1000000][5] = {0};
char c[4] = {'A', 'C', 'M', 'E'};
int main(){
    int N, M;
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N;i++)
    {
        scanf("%d%d%d%d", &stu[i].id, &stu[i].grade[1], &stu[i].grade[2], &stu[i].grade[3]);
        stu[i].grade[0] = (int)((stu[i].grade[1] + stu[i].grade[2] + stu[i].grade[3]) / 3.0);
    }
    for (now=0; now < 4; now++)
    {
        sort(stu, stu + N, cmp);
        r[stu[0].id][now] = 1;
        for (int i = 1; i < N;i++)
        {
            if(stu[i].grade[now]==stu[i-1].grade[now])
                r[stu[i].id][now] = r[stu[i - 1].id][now];
            else
                r[stu[i].id][now] = i + 1;
        }
    }
    int qurry;
    for (int i = 0; i < M;i++)
    {
        scanf("%d", &qurry);
        if(r[qurry][0]==0)
            printf("N/A\n");
        else {
            int k=0;
            for (int j = 0; j < 4;j++)
            {
                if(r[qurry][j]<r[qurry][k])
                    k = j;
            }
            printf("%d %c\n", r[qurry][k], c[k]);
        }
    }
    system("pause");
    return 0;
}