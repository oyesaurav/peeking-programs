/*You are given three integers x,y and n. Your task is to find the maximum integer k such that 0≤k≤n that kmodx=y,
 where mod is modulo operation. Many programming languages use percent operator % to implement it.
In other words, with given x,y and n you need to find the maximum possible integer from 0 to n that has the remainder y modulo x.
You have to answer t independent test cases. It is guaranteed that such k exists for each test case.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,k;
        cin>>x>>y>>n;

        int rem = n % x;
        if(rem == y) k = n ;
        else if(rem > y) k = n - rem + y;
        else k = n - rem - x + y;

        cout<<"Required Reminder is : "<<k<<"\n";
    }
}