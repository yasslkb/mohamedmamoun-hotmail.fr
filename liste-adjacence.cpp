#include<iostream>
#include<vector>
#include<iterator >
using namespace std  ;
	void ajouterarc(vector<int>graphe[] , int u,int v){
		graphe[u].push_back(v);
		graphe[v].push_back(u);
	} 
	void print(vector<int>graphe[],int n){
		vector<int> :: iterator it ; 
		cout<<"************************************"<<endl ; 
		for(int i=0;i<n;i++){
			cout<<"la liste d'adjacence de : "<<i <<endl ; 
			for(it=graphe[i].begin();it!=graphe[i].end();it++){
				cout<<*it<<'\t';
				cout<<'\n';
			}
		}
	}
int main(){
	int n , e ,u,v ; 
	cout<<"entrez le nombre de sommets : " ; 
	cin>>n ; 
	cout<<"entrez le nombre d arrets  ";
	cin>>e ; 
	vector <int> graphe[n] ;
	
	for(int i=0;i<e ; i++){
		cout<<"saisir le debut et la fin d'arret : \n ";
		cin>>u ; 
		cin>>v ; 
		ajouterarc(graphe,u,v) ; 
	}
	print(graphe,n) ; 

	
}
