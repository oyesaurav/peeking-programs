/*Write a program which takes an array input. In the input array,
 all the numbers will occur even number of times, except one number, 
 which occurs odd number of times. Print that number which occurs odd number of times.
(Solve it in O(n))*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i=0;
    cout<<"enter the array (enter 0 to end)\n";
    vector<int> v;
    while (cin>>a)
    {
        if(a==0) break;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(i=0;i<v.size(); )
    {
       i=i+2;
       if(v[i] != v[i+1])
       {
           cout<<v[i]<<" occurs odd no. of times.\n";
           break;
       }
    }

    
    
}