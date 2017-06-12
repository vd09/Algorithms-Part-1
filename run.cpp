#include <iostream>
#include <map>
using namespace std;
int main(){

    int t;
    cin>>t;

    for (int b=0; b<t; b++)
    {

    int n,m;
    cin >>n >>m;

    map <long long int,int>::iterator it;
    map <long long int,int> mp;

    for (int a=1; a<=(n+m); a++)
    {
    	long long int p;
    	cin>>p;
    	if (a > n)
    	{
    		it = mp.find(p);
    		//cout<<p<<" "<<it->second<<" "<<a<<" ";
    		if (it->second ==0 || it->second >= a)cout<< "NO";
    		else cout<< "YES";
    		cout<<endl;
    	}
    	mp.insert(pair<int,int>(p,a));

    }
    }

    return 0;
}
