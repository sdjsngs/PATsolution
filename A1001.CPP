#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a + b;
    if(sum<0)
        {
            printf("-");
            sum = -sum;
        }
        string str = to_string(sum);
       
        int len = str.length();
        for (int i = 0; i < len;i++)
        { 
            cout << str[i];
            if(i!=len-1&&(i+1)%3==len%3)
                cout << ",";
           
        }
        system("pause");
        return 0;
 }