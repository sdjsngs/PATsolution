#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
struct Student
{
    long long  no;
    int score, frank, localnum, localrank;
};
bool cmp(Student a,Student b)
{
   return  a.score != b.score ? a.score > b.score : a.no < b.no;
}

int main(){
    int n,m;
    scanf("%d", &n);
    vector<Student> fin;
    for (int i = 1; i <=n;i++)
    {
        scanf("%d", &m);
        vector<Student> v(m);
        for (int j = 0; j < m;j++)
        {
            scanf("%lld %d", &v[j].no, &v[j].score);
            v[j].localnum = i;
        }
        sort(v.begin(), v.end(), cmp);
        v[0].localrank = 1;
        fin.push_back(v[0]);
        for (int j = 1; j < m;j++)
        {
            v[j].localrank = (v[j].score == v[j - 1].score) ? (v[j - 1].localrank) : (j + 1);
            fin.push_back(v[j]);
        }
    }
    sort(fin.begin(), fin.end(), cmp);
    int len = fin.size();
    fin[0].frank = 1;
    for (int k = 1; k < len;k++)
    {
        fin[k].frank = (fin[k - 1].score == fin[k].score) ? (fin[k - 1].frank) : (k + 1);
    }
    printf("%d\n", len);
    for (int k = 0; k < len; k++)
    {
        printf("%013lld %d %d %d\n", fin[k].no, fin[k].frank, fin[k].localnum, fin[k].localrank);
    }
    system("pause");
    return 0;
}