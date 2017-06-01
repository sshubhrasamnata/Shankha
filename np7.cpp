#include <iostream>
using namespace std;
int main()
{
int l=-32767;int s=32768;
int no;int n;
cout <<"Enter number of numbers" <<endl;
 cin >>n;
for(int i=0;i<n;i++)
{
cout <<"Enter n numbers" <<endl;
cin >>no;
if(no>l)
l=no;
if(no<s)
s=no;
}
cout <<"The largest number=" <<l;
cout <<"The smallest number=" <<s;
return 0;
}
