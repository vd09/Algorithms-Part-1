#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main()
{
int i,j,k,n=0;
set <int> st;
set <int>::iterator it;
cin >>j;
for(i=0; i<j; i++)
{
    cin>>k;
    st.insert(k);
}
it=st.begin();
for(i=1; i<=j; i++)
{
       cout<<*it<<" ";
    it++;
}
}

