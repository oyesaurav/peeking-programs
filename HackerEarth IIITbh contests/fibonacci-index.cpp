/*The 12th term, F12, is the first term to contain three digits.
Write a program to find the index of the first term in the Fibonacci sequence to contain 1000 digits.
*/

#include <bits/stdc++.h>
using namespace std;

int findindex(int n);
int main() 
{ 
   // ios::sync_with_stdio(0);
    //cin.tie(0);

    int n;
    cout<<"Enter required no. of digits : ";
    cin>>n;
    cout<<findindex(n);
}    
   
    int findindex(int digits)
{
    /*F(n) = pow(phi,n) / pow(5,1/2)
      taking log we get the below formula*/ 
	float index = 2.078087 *(digits-1)* log(10) + 1.672276;              //only valid for large no. of digits

	// returning rounded off value of index
	return round(index);
}



