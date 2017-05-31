#include <iostream>
using namespace std;
int main(){
cout<<"enter four no."<<endl;
int a,b,c,d;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
int l=a;
 if(l<b)
l=b;
 if (l<c) 
l=c;
  if (l<d)
l=d;
cout<<"the largest no.is-"<<l<<endl;
if(l==a)
a=d;
if(l==b)
b=d;
if(l==c)
c=d;
int l2=a;
if(l2<b)
l=b;
 if (l2<c) 
l2=c;
cout<<"the second largest no.is-"<<l2<<endl;
return 0;
}

