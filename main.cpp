#include <iostream>

using namespace std;

int main()
{
    int i, n, j, maior;
    cout << "Digite um numero" << endl;
    cin >> n;
    int vetor[n];
    cout << "Digite " << n << " numeros " << endl;
    for (i=0; i<n; i++){
        cin >> vetor[i];
    }
    for (i=0; i<n; i++)
        for (j=0; j<n; j++){
            if (vetor[i] > vetor[j]){
                maior = vetor[i];
                vetor[j] = vetor[i];
                vetor[i] = maior;}}
        cout << "maior " << maior <<endl;
    return 0;
}
