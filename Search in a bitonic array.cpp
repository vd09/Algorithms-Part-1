#include <iostream>
using namespace std;


int main()
{
    int n,x,l,lo,hi,flag=1;
    cin >>n;

	int ar[n];
	for(int a=0; a<n; a++)
    {
        int p;
        cin >>p;
        ar[a]=p;
        if(ar[a-1]<ar[a])x=a;
    }

    cin >>l;

    lo=0;hi=x;

                while(lo<=hi)
                {
                    int mid =(hi+lo)/2;
                    //cout<<mid<<" ";
                    if(l>ar[mid])lo=mid+1;
                    else if (l<ar[mid])hi=mid-1;
                    else {cout <<ar[mid]<<" " <<mid+1<<endl;flag=0;break;}
                }

    if(flag ==1){
         lo=x+1;hi=n-1;

                while(lo<=hi)
                {
                    int mid =(hi+lo)/2;
                    //cout<<mid<<" ";
                    if(l>ar[mid])hi=mid-1;
                    else if (l<ar[mid])lo=mid+1;
                    else {cout <<ar[mid]<<" " <<mid+1<<endl;flag=0;break;}
                }
    }

    if (flag ==1)cout<<"element not present";

}
