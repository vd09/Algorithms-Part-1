#include <iostream>
#include <set>
#include <utility>
using namespace std;


int main()
{
    int i ,n =1 ,r ;
    set< pair<int, int> > sp;

    cin >>i ;
    int ar[i] ,br[i] ;
    for (int j =0 ;j <i ;j++ )
    {
        cin >>ar[j] ;
    }

    br[0] =i-1;
    for (int j =i-2 ;j >=0 ;j-- )
    {
        br[n] =j ;
hell :

        if (ar[br[n -1 ]] >ar[j] )
        {
            r =n ;
            while (r >0)
            {
                //sp[br[r ] -j +1 ] =sp[br[r +1 ] -j +1 ] ;
                sp.insert(make_pair(br[r -1] -j +1 ,br[r ] -j +1 ));
                r--;
            }
        }
        else if (n >=1)
        {n-- ;
            br[n] =j ;
            while (ar[br[n -1 ]] <ar[j] &&n >0 )
            {
                n--;
                br[n] =j ;

            }
            goto hell ;
        }

        n++ ;

    }
cout << sp.size();

}
