#include<iostream>
using namespace std;
int main()
{
double a,b,c,d;
cin>>a>>b>>c>>d;
double f;
 f=((a*c)-(b*d))/(a-b);
if(f>100||f<0)
cout<<"impossible"<<endl;
else
printf("%.7lf",f);




}




