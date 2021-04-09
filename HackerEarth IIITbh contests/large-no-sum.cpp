/*Given a series of integer pairs A and B, output the sum of A and B.
0<= A,B <= 10^98  */

#include<bits/stdc++.h>
using namespace std;

string largesum (string , string );
int main()
{
   string A,B;
   while(cin>>A>>B)
   {cout<<"sum is : "<<largesum(A,B)<<"\n";
   }
}

string largesum (string A, string B)
{
    if(A.length() > B.length())        //making sure that second string is larger always
        swap(A,B);

   string C = "";
   int n1=A.length() , n2= B.length(), sum;

   reverse(A.begin(),A.end());         //to make the process easier
   reverse(B.begin(),B.end());

   int carry =0;

   for(int i=0; i<n1 ; i++)
   {
      sum = (A[i]-'0') + (B[i]- '0') + carry;
      C.push_back(sum%10 + '0');
      carry= sum/10;
   }

   for(int i=n1; i<n2 ; i++)              //for remaining digits of larger no.
   {
      sum = (B[i]- '0') + carry;
      C.push_back(sum%10 + '0');
      carry= sum/10;
   }
  
    if(carry)                            //for remaining carry
       C.push_back(carry + '0');

     reverse(C.begin(),C.end());

     return C;
}