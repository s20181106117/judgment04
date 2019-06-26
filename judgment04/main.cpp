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
{ int a,b;
    ifstream in1("/Users/s20181106117/Desktop/caipan.txt ");
    ifstream in2("/Users/s20181106117/Desktop/caipan-2.txt ");
    ofstream out("/Users/s20181106117/Desktop/chengji.txt ");
    if(in1.is_open())
    {
        cout<<"file ok"<<endl;
        in1>>a;
        cout<<a<<" "<<endl;
        in1.close();
    }
    if(in2.is_open())
    {
        cout<<"file ok"<<endl;
        in2>>b;
        cout<<b<<" "<<endl;
        in2.close();
    }
    if(out.is_open())
    {
        out<<"c="<<a+b<<endl;
        cout<<"c="<<a+b<<endl;
        out.close();
    }
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


