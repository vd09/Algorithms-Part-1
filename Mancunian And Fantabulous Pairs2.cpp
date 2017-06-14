#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

    set< pair<int, int> > sp;

void run (int i ,int j ,int l )
{
    int k =i ;

    while (k <=l -1 )
    {
        sp.insert(make_pair(l -k ,j -k )) ;
       // cout <<l <<" "<<k <<" " <<j  <<endl;
        k++ ;
    }
}

int main()
{
    int i ,j ,r ,l =1 ;
    vector <int> v ;
    vector <int> v1 ;

    cin >>i ;

    cin >>r;
    v.push_back(r ) ;
    v1.push_back(l ) ;
    for ( j =2 ;j <=i ;j++ )
    {
        cin >>r ;
        while (v.back() <r &&v.size() >0 )
        {
            //cout<<v.back()<<" V>B "<<v1.back()<<endl;
            v.pop_back() ;
            l =v1.back() ;
            v1.pop_back() ;
            run (v1.back() ,j ,l ) ;
        }
        v.push_back(r );
        v1.push_back(j );
    }
    cout << sp.size();
}
