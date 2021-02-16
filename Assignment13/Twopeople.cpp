#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
int swap(int a1,int a2)
{
    int temp = a1;
    a1=a2;
    a2=temp;
    return (a1,a2);
} 

bool two_meet(int d1,int d2,int s1,int s2)
{
    if(d1<d2 && s1<s2)
        return false;
    if(d1>d2 && s1>s2)
        return false;
    if(d1<d2)
    {
        swap(d1,d2);
        swap(s1,s2);
    }
    return ((d1-d2)%(s1-s2)==0);
}

int main()
{
    int d1=5,d2=8,s1=7,s2=4;
    if(two_meet(d1,d2,s1,s2))
        printf("Yes");
    else
        printf("No");
    return 0;
}
