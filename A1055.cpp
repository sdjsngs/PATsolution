#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
struct Person
{
    char name[15];
    int age, worth;
}per[100010];
bool cmp(Person a, Person b)
{   
    if(a.worth!=b.worth)
        return a.worth >= b.worth;
    else if(a.age!=b.age)
        return a.age <= b.age;
    else
        return strcmp(a.name, b.name) <= 0;

}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n;i++)
    {
        scanf("%s %d %d", per[i].name, &per[i].age, &per[i].worth);
    }
    sort(per, per + n, cmp);
    for (int i = 1; i <= k;i++)
    {
        int num = 0, low, high;
        scanf("%d %d %d", &num, &low, &high);
        printf("Case #%1d:\n", i);
        int flag=num;
        for (int j = 0; j < n;j++)
        {
            if(per[j].age>=low&&per[j].age<=high)
            {
                printf("%s %d %d\n", per[j].name, per[j].age, per[j].worth);
                num--;
                if(num==0)
                    break;
            }
            
        }
        if(flag==num)
            printf("None\n");

    }
    system("pause");
    return 0;
}