#include <bits/stdc++.h>
//Micha³ Kossakowski 3E
using namespace std;
vector<int>graf[1000001];
int main(){
ios_base::sync_with_stdio(0);
int n,m,w1,w2,wyn=0;
cin>>n>>m;
for(int i=0;i<m;i++)
{
	cin>>w1>>w2;
	graf[w1].push_back(w2);
	graf[w2].push_back(w1);
}
for(int w=1;w<=n;w++)
{
		if(graf[w].size()>2)
		{
			wyn++;
		}	
}
cout<<wyn;




return 0;
}

