#include <iostream>
using namespace std;
int main(){

cout<<"enter marks";
int m;
cin>>m;
int a,b,c;
cout<<"enter cutoff marks";
cin>>a;
cin>>b;
cin>>c;
if (m>a)
cout<<"GRADE A"<<endl;
else if (m>b&&m<a)
cout<<"GRADE B"<<endl;
else if(m>c&&m<b)
cout<<"GRADE C"<<endl;
else 
cout<<"GRADE D"<<endl;
return 0;
}
