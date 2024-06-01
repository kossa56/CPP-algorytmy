#include <bits/stdc++.h>
//Micha³ Kossakowski 3E
using namespace std;
vector<int>graf[100001];
int main(){
ios_base::sync_with_stdio(0);
int n=5,m,w1,w2;
cin>>m;
for(int i=0;i<m;i++)
{
	cin>>w1>>w2;
	graf[w1].push_back(w2);
	graf[w2].push_back(w1);
}
for(int w=1;w<=n;w++)
{
	cout<<w<<": ";
	for(int j=0;j<graf[w].size();j++)
	{
		cout<<graf[w][j]<<" ";
	}
	cout<<endl;
	
}




return 0;
}

