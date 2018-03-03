#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int len = str.length();
    int sum=0;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
    for (int i = 0; i < len;i++)
    {
        sum += (str[i]-'0');
    }
    str = to_string(sum);
    len = str.length();
    for (int i = 0; i < len; i++)
    {
        cout << arr[str[i]-'0'];
        if(i!=len-1)
            printf(" ");
    }
    system("pause");
    return 0;
}
