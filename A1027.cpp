#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    int arr[3];
    char str[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    printf("#");
    int d,e;
    for (int i = 0; i < 3;i++)
    {
        d = arr[i] % 13;
        e = arr[i] / 13;
        printf("%c%c", str[e], str[d]);
    }
    system("pause");
    return 0;
}