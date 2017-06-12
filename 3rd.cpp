#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int main()
{
    typedef pair<int, string> pairs;
    set <pairs> s;
    set <pairs>::iterator st;
    vector <string> v;
    vector <int> vec;
    vector <string>::iterator vt;

    int i;
    cin>>i;

    for (int a=0; a<i; a++)
    {
        string n;int p;
        cin >>n >>p;

        s.insert(pair<int,string>(p,n));
    }
int p=110;

    for (st=s.begin();st!=s.end(); st++)
    {
         pairs m = *st;
         int r,l=0;

        if (p==m.first){r++;v.insert(v.end()-r,m.second);}
        else {v.push_back(m.second);r=0;}
        vec.push_back(m.first);
        p=m.first;

    }
   /* vt=v.begin();
    cout<<endl<<endl<<endl<<endl;
    cout<<*vt;
    cout<<endl<<endl<<endl<<endl;

   /* o=0;
     for (st=s.begin();st!=s.end(); st++)
    {
         pairs m = *st;
         cout<<o++<<" "<<m.second<<" "<<m.first<<endl;}*/

    for (int j=v.size()-1;j>=0;j--)cout<<v[j]<<" "<<vec[j]<<endl;

}
