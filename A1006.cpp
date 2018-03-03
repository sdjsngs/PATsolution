#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int num;


int main()
{
    string unlock, lock, temp;
    int minn = 100000 ,maxn = 0;
    int h1, h2, m1, m2, s1, s2;
    cin >> num;
    for(int i = 0;i < num;i++)
    {
        cin >> temp;
        scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
        int tempin = h1 * 60 * 60 + m1 * 60 + s1;
        int tempout = h2 * 60 * 60 + m2 * 60 + s2;
        if(minn>=tempin)
        {
            minn = tempin;
            unlock = temp;
        }
          
        if (maxn <= tempout)
        {
            maxn = tempout;
            lock = temp;
        }
            
    }
    cout << unlock << " " << lock;
    return 0;
}