#include <iostream>
#include <vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    long int i ,t ,r ,scr ,k ,j ;
    cin >>t ;
    vector<long int> v1;  //value
    vector<long int> v2;

    for (k =0 ;k <t ;k++ )
    {
        v1.clear() ;
        v2.clear() ;
        cin >>i ;

        cin >>r ;
        cout <<"1 " ;
        v1.push_back(r);
        v2.push_back(1);
        for (j =1 ;j <i ;j++ )
        {
            scr =1;
            cin >>r ;
            //if (lst >r ) {scr =1 ;}

            while(r >v1.back() && v1.size()>0)
            {
                v1.pop_back() ;
                scr +=v2.back();
                v2.pop_back();
            }

            v1.push_back(r) ;
            v2.push_back(scr) ;

            cout <<scr <<" ";
            //lst =r ;
        }
        cout<<endl;

    }

}
