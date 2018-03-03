#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<vector>
using namespace std;
struct Student{
    int id ,GE, GI,  rank, choice[8];
    double sum;
    
} stu[40010];
struct sch{
    int nownum, maxnum, lastrank;
    vector<int> stuid;
};
bool cmp(Student a, Student b)
{
    return (a.sum != b.sum) ? (a.sum > b.sum) : (a.GE > b.GE);
}
int main(){
    int n,m,k;
    scanf("%d %d %d", &n, &m, &k);

    vector<sch> school(m);
    for (int i = 0; i < m;i++)
    {
        int temp = 0;
        scanf("%d ", &temp);
        school[i] = {0, temp, -1};
    }
    for (int i = 0; i < n;i++)
    {
        scanf("%d %d", &stu[i].GE, &stu[i].GI);
        stu[i].id = i;
        stu[i].sum = (stu[i].GE + stu[i].GI)/2.0;
        for (int j = 0; j < k; j++)
        {
            scanf(" %d", &stu[i].choice[j]);
        }
    }
    sort(stu, stu + n, cmp);
    stu[0].rank = 1;
    for (int i = 1; i < n;i++)
    {
        stu[i].rank = (stu[i].sum == stu[i - 1].sum && stu[i].GE == stu[i - 1].GE)?(stu[i-1].rank):(i+1);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k;j++)
        {
            int schoolid = stu[i].choice[j];
            int myrank = stu[i].rank;
            int myid = stu[i].id;
            if(school[schoolid].nownum<school[schoolid].maxnum||school[schoolid].lastrank==myrank)
            {
                school[schoolid].nownum++;
                school[schoolid].lastrank = myrank;
                school[schoolid].stuid.push_back(myid);
                break;
            }
        }
    }
    for (int i = 0; i < m;i++)
    {
        sort(school[i].stuid.begin(), school[i].stuid.end());
        for (int j = 0; j < school[i].stuid.size();j++)
        {   
            if(j!=0)
                printf(" ");
            printf("%d", school[i].stuid[j]);
        }
        printf("\n");
    }
        system("pause");
    return 0;
}