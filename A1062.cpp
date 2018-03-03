#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
struct Sample
{
    char id[10];
    int vir, tal,sum,flag;
} person[100100];
bool cmp(Sample a, Sample b)
{
    if(a.flag!=b.flag)
        return a.flag < b.flag;
    else if(a.sum!=b.sum)
        return a.sum > b.sum;
    else if(a.vir!=b.vir)
        return a.vir > b.vir;
    else
        return strcmp(a.id, b.id) < 0;
}
int main(){
    int N, L, H;
    scanf("%d %d %d", &N, &L, &H);
    int M = N;
    for (int i = 0; i < N;i++)
    {
        scanf("%s %d %d", person[i].id, &person[i].vir, &person[i].tal);
        person[i].sum = person[i].vir + person[i].tal;
        if (person[i].vir<L|| person[i].tal<L){
            M--;
            person[i].flag = 5;
        }
        else if (person[i].vir >=H && person[i].tal >= H)
        {
            person[i].flag = 1;
        }
        else if (person[i].vir >= H && person[i].tal < H)
        {
            person[i].flag = 2;
        }
        else if (person[i].vir >=  person[i].tal )
        {
            person[i].flag = 3;
        }
        else
            person[i].flag = 4;
    }
    sort(person, person + N, cmp);
    printf("%d\n", M);
    for (int i = 0; i < M;i++)
    {
        printf("%s %d %d\n", person[i].id, person[i].vir, person[i].tal);
    }
    
    return 0;
}