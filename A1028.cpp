#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct student
{
    char name[10];
    int no, score;
}stu[100010];
int flag;
bool cmp(student a,student b)
{
    if(flag==1)
        return a.no < b.no;
    else if(flag==2)
        return strcmp(a.name, b.name) <= 0;
    else
        return a.score <= b.score;
}
int main(){
    int n;
    scanf("%d %d\n", &n, &flag);
    for (int i = 0; i < n;i++)
    {
        scanf("%d%s%d", &stu[i].no, stu[i].name, &stu[i].score);   
    }
    sort(stu,stu + n, cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%06d %s %d\n", stu[i].no, stu[i].name, stu[i].score);
    }
    system("pause");
    return 0;
}