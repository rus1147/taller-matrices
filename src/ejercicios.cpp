#include "ejercicios.h"
#include <vector>

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
	vector<vector<int> > res{};
    vector<int> filar{};
	int i=0;
    int acum=0;
    int j=0;
    int k=0;
	while(i<m1.size()){
         
         j=0;
        while(j<m2[0].size()){
            acum=0;
            k=0;
            while(k<m1[0].size()){
                acum+=m1[i][k]*m2[k][j];
                k++;
            }
            filar.push_back(acum);
            j++;
        }
        res.push_back(filar);
        filar={};
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


