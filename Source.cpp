/* Ler um conjunto de números reais, armazenando-o em um vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor.
Imprimir todos os conjuntos.
*/

#include <iostream>

using namespace std;


void ler_vetor(double* v, int tam) {
	for (int i = 0; i < tam; i++)
	{
		cout << "informe os numeros: ";
		cin >> v[i];
	}
}



void quadrado(double* v,double*v2, int tam) {
	for (int i = 0; i < tam; i++)
	{
		v2[i] = v[i] * v[i];
	}

}


void imprimir(double* v, int tam) {
	for (int i = 0; i < tam; i++){
		cout << v[i] << " ";

	}



}


int main() {
	int tam;
	cout << "informe o tamanho: ";
	cin >> tam;


	double* vetor = new double[tam];

	double* vetor2= new double[tam];

	ler_vetor(vetor, tam);

	quadrado(vetor,vetor2 , tam);

	cout << "\n vetor: " << endl;

	imprimir(vetor, tam);

	cout <<"\nvetor quadrado: " << endl;

	imprimir(vetor2, tam);



	return 0;






}


