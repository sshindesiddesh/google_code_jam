//============================================================================
// Name        : Practicecodejam.cpp
// Author      : Abhidnya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<new>
#include<algorithm>
#include <cstdio>

using namespace std;
int main() {
	freopen("A-large-practice.in","rt",stdin);
	freopen("A-largesl1.out","wt",stdout);
	int n,c,it,*items;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c>>it;
		items = new (nothrow) int[it];
		for(int j =0;j<it;j++)
		{
			cin>>items[j];
		}
		for(int j=0;j<it;j++)
		{
			if(items[j]>=c)
				continue;
			else
			{
				for(int k=j+1;k<it;k++)
				{
					if(items[k]== c- items[j])
					{
						cout<<"Case #"<<i+1<<": "<<j+1<<" "<<k+1<<"\n";
						break;
					}
				}
			}
		}

	}
	return 0;
}

