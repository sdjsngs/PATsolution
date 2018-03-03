#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  
   char c[4] = {'W','T','L'};
   
   double temp,ans=1.0;
   int charchose;
   for (int i = 0; i < 3;i++)
   {
       double maxvalue = 0.0;
       for (int j = 0; j < 3; j++)
       {
            scanf("%lf", &temp);
            if(maxvalue<=temp)
            {
               maxvalue = temp;
               charchose = j;
            }
       }
       printf("%c ", c[charchose]);
       ans *= maxvalue;
   }
   printf("%.2f", (ans * 0.65 - 1) * 2);
   return 0;
}