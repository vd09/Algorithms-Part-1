#include <iostream>
#include <map>
#include <vector>
using namespace std;

class hi
{
    int k;
    map <int ,int> ar;
    map <int ,int> sz;

public: hi(int n)
{
    k=0;
    for(int a=0; a<n; a++)
    {
        sz[a]=1;
    }

	for(int a=0; a<n; a++)
    {
        ar[a]=a;

    }

}

int root (int i)
{
    while (i!=ar[i])i=ar[i];
    return i;
}

void Union(int p,int q)
{
    int i=root(p);
    int j=root(q);

    if (sz[j]<sz[i])
    {ar[j]=ar[i];sz[i]+=sz[j];}
    else {ar[i]=ar[j];sz[j]+=sz[i];}

    k++;
}

int gettime(){return k;}

};

int main()
{
    vector <int> v;
    int n,l=0,k;
    cin >>n;
    int p,q;cin >>p;

heaven:
    hi obj(n);

hell:
    cin >>q;
    obj.Union( p, q);
    cin >>p;
    if (p!=-1)
    goto hell;
    v.push_back(obj.gettime());cin>>p;
    if (p!=-1)
    goto heaven;
    k=n+1;

    for (int a=0; a<v.size(); a++)if (k>v[a])k=v[a];
    cout<<k;

}
