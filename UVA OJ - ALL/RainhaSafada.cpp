#include <bits/stdc++.h>
using namespace std;


#define ull unsigned long long

int main(){
	
	ull l,c;

	while(scanf("%llu %llu",&l,&c) == 2 && (l || c)){
		ull ans = 0llu;


		ans += (l-1)*c*l; // PARA CADA POSICAO DA MATRIZ, TEMOS UMA VARIACAO DE ELEMENTOS POR LINHA
		ans += (c-1)*l*c; // E POR COLUNA...

		// NO CASO NOSSA INTENÇAO FOI CONTAR PARA CADA POSICAO, A QUATIDADE TOTAL DE MANEIRAS DE DISPOR A SEGUNDA RAINHA...

		while(l > 1 && c > 1)
			ans += (l*c - 2 - (l-1) -(c-1) + 1) * 4,l--,c--;

		// L*C VAI DAR O NUMERO TOTAL DE POSICOES
		// L*C - 2 VAI DAR O NUMERO TOTAL DE POSICOES PERTENCENTES AS DIVERSAS DIAGONAIS FORMADAS
		// (L*C - 2 -(L-1) - (C-1)) VAI DAR O NUMERO DE POSICOES QUE A SEGUNDA RAINHA PODE ASSUMIR CONTANTO QUE A PRIMEIRA ESTEJA EM UMA DAS BORDAS
		// (L*C - 2 -(L-1) - (C-1))*4 VAI DAR O NUMERO TOTAL DE POSICOES QUE A SEGUNDA RAINHA PODE ASSUMIR NOS 4 SENTIDOS!!!!!!!!!!!
		// SENTIDO DE 	SUPERIOR ESQUERDO PARA INFERIOR DIREITO
		// 				INFERIOR DIREITO PARA SUPERIOR ESQUERDO
		//				SUPERIOR DIREITO PARA INFERIOR ESQUERDO
		//				INFERIOR ESQUERDO PARA SUPERIOR DIREITO

		printf("%llu\n",ans);

	}



	return 0; 	
}