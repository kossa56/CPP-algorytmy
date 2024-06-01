#include <bits/stdc++.h>
//Micha³ Kossakowski 3E
using namespace std;
vector<int> G[1000001];//Lista s¹siedztwa
int odw[1000001];//czy odwiedzono
int odl[1000001];//odleg³oœæ od pocz¹tkowego

void BFS(int v){//od którego zaczynamy
    queue<int> Q;
    odw[v]= 1;//punkt od którego zaczynamy odwiedzony
    odl[v]= 0;//odleg³oœæ jego od pocz¹tku to 0
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
 
    int ile_punktow,ile_polaczen,a,b;
    cin>>ile_punktow>>ile_polaczen;

    for(int i=1;i<=ile_polaczen;i++){
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    BFS(1);

    for(int i=2;i<=ile_punktow;i++){
        if(odl[i] != 0){
        cout<<i<<" ";
        cout<<odl[i]<<"\n";
        }
    }




return 0;
}

