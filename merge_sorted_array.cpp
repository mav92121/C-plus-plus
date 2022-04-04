// 1 sec= 10^8 operations
// constrains       time complexity
// 10^18             log n
// 10^8              n
// 10^6              n log n
// 10^4              n^2
// 400-500           n^3
// <100              n^4
// 10-11             n!
// 20                2^n
// #define fo(i,a,b) for(int i=a;i<=b;i++)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vll vector<ll>
#define pb push_back
#define endl "\n"
void merge(int num1[],int n1,int num2[],int n2)
{
    int num3[n1+n2];
    int s1=0;
    int s2=0;
    int i=0;
    while(s1<n1 && s2<n2)
    {
         if(num1[s1]>num2[s2])
         {
             num3[i]=num2[s2];
             s2++;
         }
         else
         {
             num3[i]=num1[s1];
             s1++;
         }
         i++;
    }
//     while (s1<n1)
//    {
//        num3[i]=num1[s1];
//        s1++;
//        i++;
//    }
//    while (s2<n2)
//    {
//        num3[i]=num2[s2];
//        s2++;
//        i++;
//    }
    if(s1!=n1-1)
    {
        while(i<(n1+n2))
        {
            num3[i]=num1[s1];
            s1++;
            i++;
        }
    }
    if(s2!=n2-1)
    {
        while(i<(n1+n2))
        {
            num3[i]=num2[s2];
            s2++;
            i++;
        }
    }
    for(int i=0;i<(n1+n2);i++)
    {
        cout<<num3[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int num1[]={1,3,5};
    int n1=sizeof(num1)/sizeof(num1[0]);
    int num2[]={6,7,8,9};
    int n2=sizeof(num2)/sizeof(num2[0]);
    merge(num1,n1,num2,n2);
}
