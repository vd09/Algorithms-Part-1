#include <iostream>

#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector < pair <int,string> > vp;
    int r;
    cin >>r;

    for (int a=0; a<r; a++)
    {
        string n;int p;
        cin >>n >>p;

        vp.push_back( make_pair(p,n) );
    }

    int i, j, k, temp;string temps;

    for (i = 1; i < vp.size(); i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (vp[j].first < vp[j-1].first)
            {
                temp = vp[j].first;
                vp[j].first = vp[j-1].first;
                vp[j-1].first = temp;

                temps = vp[j].second;
                vp[j].second = vp[j-1].second;
                vp[j-1].second = temps;
            }
            else
                break;
        }
    }

    for (i = 1; i < vp.size(); i++)
    {
        for (j = i; j >= 1; j--)
        {
            //int l=compare(vp[j].second,vp[j-1].second)
            if (vp[j].second.compare(vp[j-1].second)>0 && vp[j].first == vp[j-1].first)
            {
                temps = vp[j].second;
                vp[j].second = vp[j-1].second;
                vp[j-1].second = temps;

            }
        }
    }


    for (int j=vp.size()-1;j>=0;j--)cout<<vp[j].second<<" "<<vp[j].first<<endl;


      //  for (int j=0; j<=vp.size()-1;j++)cout<<vp[j].second<<" "<<vp[j].first<<endl;

}
