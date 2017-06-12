#include "ejercicios.h"

void trasponer(vector<vector<int> > &m) {
	vector<vector<int>> matriz;
	matriz=m;
	int i=0;
	if(m.size()>0) {
		while (i < m.size()) {
			int j = 0;
			while (j < m.size()) {
				m[i][j] = matriz[j][i];
				j++;
			}
			i++;
		}
	}
}

vector<vector<int> > multiplicar(vector<vector<int> > m1, vector<vector<int> > m2){
	vector<vector<int> > res;
	int i=0;
	int j=0;
	int suma=0;
/*		int sum(vector<vector<int> > ma1, vector<vector<int> > ma2){
			int k=1;
			while(k<ma2.size()){
				 suma= suma+ma1[i][k]*ma2[k][j];
				k++;
			}
			return suma;
		}*/
	int k=1;
	while(i<m1.size()){
		int j=0;
		while (j<m2[0].size()){
			suma=suma+m1[i][j]*m2[i][j];
			res[i].push_back(suma);
			j++;
		}
		i++;
	}
	
	return res;
}

vector<vector<int> > promediar(vector<vector<int> > m){
	
	vector<vector<int> > res;
	return res;
}

int contarPicos(vector<vector<int> > m){
	//COMPLETAR
	return 0;
}

int hayAmenaza(vector<vector<int> > m){
	//COMPLETAR
	return 0;
}


