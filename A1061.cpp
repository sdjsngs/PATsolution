#include<cstdio>
#include <string>
#include<cctype>
#include<iostream>
using namespace std;
char str[7][5] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
//string str[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
string a, b, c, d;

int main()
{
    cin >> a >> b >> c >> d;
    int len1 = min(a.length(), b.length());
    int len2 = min(c.length(), d.length());
    int pos1,pos3;
    char pos2;
    for (int i = 0; i < len1;i++)
    {
        if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='G'))
        {
             pos1 = i;
             break;
        }     
    }
    for (int i = pos1+1; i < len1; i++)
    {
        if (a[i] == b[i] &&(( a[i] >= 'A' && a[i] <= 'N')||isdigit(a[i])))
        {
            pos2 = a[i];
            break;
        }
    }
    for (int i = 0; i < len2; i++)
    {
        if (c[i] == d[i] && isalpha(c[i]) )
        {
            pos3 = i;
            break;
        }
    }
    int m;
    if(!isdigit(pos2))
        m = pos2 - 'A' + 10;
    else
        m = pos2 - '0';
    
    std::cout << str[a[pos1] - 'A'];
    printf("%02d:%02d", m, pos3);
    
    return 0;
}