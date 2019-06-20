//
//  main.cpp
//  judgment04
//
//  Created by s20181106117 on 2019/6/20.
//  Copyright © 2019 s20181106117. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int i,j,n,a[10],pj=0,h=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                a[n]=a[i];
                a[i]=a[i+1];
                a[i+1]=a[n];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=1;i<n-1;i++)
    {
        h=a[i]+h;
        pj=h/(n-2);
    }
    cout<<pj<<endl;
    return 0;
}


