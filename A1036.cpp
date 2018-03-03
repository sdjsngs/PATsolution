#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    char name[15];
    char id[15];
    int grade;
}M,F,temp;

int main(){
    int N;
    char sex;
    M.grade = 101;
    F.grade = -1;
    scanf("%d", &N);
    for (int i = 0; i < N;i++)
    {
        scanf("%s %c %s%d", temp.name, &sex, temp.id, &temp.grade);
        if(sex=='M' &&temp.grade<=M.grade)
        M = temp;
        else if (sex =='F' && temp.grade >= F.grade)
         F = temp;
    }    
    if(F.grade==-1)
        cout << "Absent" << endl;
    else
        cout <<F.name<<" "<< F.id << endl;
    if (M.grade ==101)
        cout << "Absent" << endl;
    else
        cout << M.name << " " << M.id << endl;
    if (F.grade == -1 || M.grade == 101)
        cout << "NA";
    else std::cout <<(F.grade-M.grade);
    return 0;
}