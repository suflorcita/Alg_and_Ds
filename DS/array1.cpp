
/*Ingreso una serie de números, los agrego a una array e imprimo el array en reversa*/

#include <iostream>

using namespace std; 

int main(){
	int num, i;
	int A[100];

	cin >> num; 

	for(i = 0; i < num; i++){
		cin >> A[i]; 
	}

	for(i = num - 1; i >= 0; i--){
		cout << A[i] << endl; 
	}

}
