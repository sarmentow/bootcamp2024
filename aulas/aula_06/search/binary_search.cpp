#include <bits/stdc++.h>

using namespace std;

int CHECKING_COUNT = 0;

int binary_search(vector<int> list, int element) {
    int left = 0;
    int right list.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        CHECKING_COUNT = CHECKING_COUNT + 1;
        // Verifica se o elemento alvo está presente no meio
        if (list[mid] == target) {
            return mid; // Retorna o índice do elemento
        }

        // Se o elemento alvo for maior, ignore a metade esquerda
        if (list[mid] < target) {
            left = mid + 1;
        }
        // Se o elemento alvo for menor, ignore a metade direita
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n; // quantidade de elementos do vetor
    int x; // número procurado
    vector <int> vec; // lista de entrada
    
    cin >> n;
    cin >> x;

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        vec.push_back(aux);
    }

    cout << "result: " << binary_search(vec, x) << '\n';
    cout << "checking count: " << CHECKING_COUNT << '\n';

    return 0;
}
