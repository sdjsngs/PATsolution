#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int N;
    scanf("%d\n",&N);
    string ans,str;
    for (int i = 0; i < N;i++)
    {
        getline(cin,str);
        int len = str.length();
        reverse(str.begin(), str.end());
        if(i==0)
            ans = str;
        int len2 = ans.length();
        int lenmin = min(len, len2);
        for (int j = 0; j < lenmin;j++)
        {
            if(str[j]!=ans[j])
            {
                ans = ans.substr(0, j);
                break;
            }
                
        }
    }
    reverse(ans.begin(), ans.end());
    if(ans.length()==0)
        ans = "nai";
    cout << ans;
    system("pause");
    return 0;
}