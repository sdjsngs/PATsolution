#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
struct Student
{
    char name[11], id[10];
    int score;
};
bool cmp(Student a, Student b)
{
    return a.score >= b.score;
}
int main(){
    int N,low,high;
    scanf("%d",&N);
    vector<Student> stu(N);
    for (int i = 0; i < N;i++)
    {
        scanf("%s %s %d\n", stu[i].name, stu[i].id, &stu[i].score);
    }
    scanf("%d %d", &low, &high);
    sort(stu.begin(), stu.end(), cmp);
    int count = 0;
    for (int i = 0; i < N;i++)
    {
        if (stu[i].score >= low && stu[i].score <=high)
            {
                printf("%s %s\n", stu[i].name, stu[i].id);
                count++;
            }
    }
    if(count==0)
        printf("NONE");
    system("pause");
    return 0;
}