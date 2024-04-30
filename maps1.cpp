#include<iostream>
using namespace std;
int main(){
map<int,string> m;
m[1]="a";
m[1]="b";
m[1]="c";
m[1]="d";
map<int ,string> :: iterator it;
for(it=m.begin();it!=m.end();++it)
{
cout<<(*it).first<<" "<<y(*it).second;

}




}