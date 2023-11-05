#include <bits/stdc++.h>
using namespace std;
 
int PrimerElementoPar(vector<int> V);
int main(){
	int n;
	vector<int>V;
	cout<<"ingrese la cantidad de numeros: "<<endl;
		cin>>n; 
		
		cout<<"ingrese los numeros: "<<endl;
		
		for(int i=0 ; i<n ; i++){
			int num;
			cin>>num; 
			V.push_back(num);
		}
		int resultado=PrimerElementoPar(V);
		
		cout<<"El primer numero divisible por 3 es : "<<resultado<<endl;
		
		return 0;
}
int PrimerElementoPar(vector<int> V){
	int num;
        for (int  i = 0; i < V.size(); i++) {
        if (i % 2 == 0 && i % 3 == 0){
           num+=V[i] ;
        }
        return num;
}
}