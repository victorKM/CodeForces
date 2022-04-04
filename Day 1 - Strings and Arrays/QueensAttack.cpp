#include <bits/stdc++.h>

using namespace std;

int main () {
    int N;
    int Q;
    int linha;
    int coluna;
    int linha_temporaria;
    int coluna_temporaria;

    cin >> N >> Q;

    int tabuleiro[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    for (int i = 0; i < Q; i++) {
        cin >> linha >> coluna;

        if (tabuleiro[linha-1][coluna-1] == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            
            for (int i = 0; i < N; i++) {
                tabuleiro[linha-1][i] = 1;
            }

            for (int i = 0; i < N; i++) {
                tabuleiro[i][coluna-1] = 1;
            }
            
            //PREENCHE A DIAGONAL SUPERIOR ESQUERDA
            linha_temporaria = linha-1;
            for (int i = coluna-2; i >= 0; i--) {
                linha_temporaria--;
                if (linha_temporaria >= 0) {
                    tabuleiro[linha_temporaria][i] = 1;
                }
                else {
                    break;
                }
            }

            //PREENCHE A DIAGONAL INFERIOR DIREITA
            linha_temporaria = linha-1;
            for (int i = coluna; i < N; i++) {
                linha_temporaria++;
                if (linha_temporaria < N) {
                    tabuleiro[linha_temporaria][i] = 1;
                }
                else {
                    break;
                }
            }

            //PREENCHE A DIAGONAL SUPERIOR DIREITA
            coluna_temporaria = coluna-1;
            for (int i = linha-2; i >= 0; i--) {
                coluna_temporaria++;
                if (coluna_temporaria < N) {
                    tabuleiro[i][coluna_temporaria] = 1;
                }
                else {
                    break;
                }
            }

            //PREENCHE A DIAGONAL INFERIOR ESQUERDA
            coluna_temporaria = coluna-1;
            for (int i = linha; i < N; i++) {
                coluna_temporaria--;
                if (coluna_temporaria >= 0) {
                    tabuleiro[i][coluna_temporaria] = 1;
                }
                else {
                    break;
                }
            }
        }
    }
}