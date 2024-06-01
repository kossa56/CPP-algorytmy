#include <bits/stdc++.h>
//Micha� Kossakowski 3E
using namespace std;
vector<int> G[1000005];//Lista s�siedztwa
int odw[1000005];//czy odwiedzono
int odl[1000005];//odleg�o�� od pocz�tkowego

void BFS(int v){//od kt�rego zaczynamy
    queue<int> Q;
    odw[v]= 1;//punkt od kt�rego zaczynamy odwiedzony
    odl[v]= 0;//odleg�o�� jego od pocz�tku to 0
    Q.push(v);//dodanie punktu do kolejki

    while(!Q.empty()){
        int w=Q.front();
        Q.pop();
        for(int i=0;i<G[w].size();i++){
            int sasiad=G[w][i];
            if(odw[sasiad]==0){//jesli nie jest odwiedzony
                odw[sasiad]=1;
                odl[sasiad]=odl[w]+1;
                Q.push(sasiad);
            }
        }
    }

}
int main(){

    int ile_punktow,ile_polaczen,a,b, Tomek, Ksiezniczka;
    cin>>ile_punktow>>ile_polaczen;

    for(int i=1;i<=ile_polaczen;i++){
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
	cin>>Tomek>>Ksiezniczka;
    BFS(Tomek);
	if(odl[Ksiezniczka]!=0){
		 cout<<odl[Ksiezniczka];
	}
	else{
		cout<<"-1";
	}



return 0;
}


