#include <bits/stdc++.h>
//Micha³ Kossakowski 3E
using namespace std;
//n - liczba wierzcho3kow grafu , n jest maksymalnie 1 000 000
//m - liczba krawedzi grafu
vector<int> graf[1000001]; //tablica wektorowa
bool odwiedzony[1000001];
void dfs(int w){
	cout<< w <<" ";
	odwiedzony[w] = true;
	for(int i = 0 ; i <graf[w].size();i++){
		int s = graf[w][i];
		if(odwiedzony[s] == false) dfs(s);
	}
}
int main(){
//wczytanie danych grafu
	int n, m, w1, w2;
	cin>> n >> m;
	for(int i=0; i < m ; i++){
		cin>> w1 >> w2; // np. 1 2
		graf[w1].push_back(w2);
		graf[w2].push_back(w1);
	}
	
	//wypisanie grafu (lista sasiedztwa)
	for(int w =1; w<=n; w++){
		cout<< w <<": ";
		for(int j = 0; j < graf[w].size(); j++){
			cout<<graf[w][j] << " ";
		}
		cout<< endl;
	}
	//dfs
	for(int w=1; w<=n; w++){
		odwiedzony[w] = false;
	}
	dfs(1);




return 0;
}

