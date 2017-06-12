#include <iostream>
#include <map>
using namespace std;

class hi
{
    map <int ,int> ar;
    map <int ,int> sz;

public: hi(int n)
{
    for(int a=0; a<n; a++)
    {
        sz[a]=1;
    }

	for(int a=0; a<n; a++)
    {
        ar[a]=a;
    }
    cout<<"endl";
}

};

int main()
{
    int n;
    cin >>n;

    hi obj(n);}
