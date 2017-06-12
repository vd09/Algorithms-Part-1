#include <iostream>
using namespace std;


int main()
{
    int n,x,l,lo,hi;
    cin >>n;

	int ar[n];
	for(int a=0; a<n; a++)
    {
        int p;
        cin >>p;
        ar[a]=p;
        if(p<=0)x=a;
    }

//cout<<x<<" "<<ar[0]<<endl;
    for(int b=0; b<=x; b++)
    {
        for(int c=x+1; c<n; c++)
        {
            l=-(ar[b]+ar[c]);//cout<<endl<<l<<endl;
//binary search
            lo=b+1;hi=n-1;
            if((ar[c]<l || l<0))
            {
                while(lo<=hi)
                {
                    int mid =(hi+lo)/2;
                    //cout<<mid<<" ";
                    if(l>ar[mid])lo=mid+1;
                    else if (l<ar[mid])hi=mid-1;
                    else {cout <<ar[b]<<" " <<ar[c]<<" " <<ar[mid]<<endl;break;}
                }
            }
        }
    }

}
