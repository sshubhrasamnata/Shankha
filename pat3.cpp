#include <iostream>
using namespace std;
int main()
{int n;
cout<<"enter the number rows"<<endl;
 cin>>n;

for(int i=1;i<=n;i++)
  {if(i%2==1)
cout<<"****"<<endl;
   else if(i%2==0)
cout<<"***"<<endl;
}
return 0;
}
