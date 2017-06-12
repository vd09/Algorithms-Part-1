#include <iostream>
#include <set>
using namespace std;
int main(){

    int t;
    cin>>t;

    for (int b=0; b<t; b++)
    {

    int m;
    cin >>m;



    set <string>::iterator it;
    set <string> mp;

    for (int a=1; a<=(m); a++)
    {
    	string n;
   	 cin >>n;

   	 mp.insert(n);

    }

    for (it=mp.begin(); it!=mp.end(); it++)
    {
    	cout<<*it<<endl;
    }
    }

    return 0;
}
