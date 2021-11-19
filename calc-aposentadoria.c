#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define pontosH 98
#define pontosM 88
#define TcH 35
#define TcM 30
#define IdadeMinimaM 57
#define IdadeMinimaH 62
#define ano 2021

float idade, Tc, calcia;

float calcPontos(float idade, float Tc) {
	float pontos;
	
	pontos = idade + Tc;
	
	printf("Seus pontos atuais: %.1f\n", pontos);

return pontos;
}

void calcPontosH(){
	float pontos, resPontos, calcano;
	
	resPontos = pontosH - pontos;
	calcano = ano + resPontos;
	
	if(pontos < pontosH){
		printf("Você precisa de mais %.1f pontos para alcançar os %d pontos\n", resPontos, pontosH);
		printf("Você terá direito a aposentadoria integral a partir de %.0f" ,calcano);
	}else{
		printf("Pode se aposentar");
	}
}

void calcPontosM(){
	float pontos, resPontos, calcano;
	
	resPontos = pontosM - pontos;
	calcano = ano + resPontos;
	
	if(pontos < pontosM){
		printf("Você precisa de mais %.1f pontos para alcançar os %d pontos\n", resPontos, pontosM);
		printf("Você terá direito a aposentadoria integral a partir de %.0f" ,calcano);
	}else{
		printf("Pode se aposentar");
	}
}

void calcIdadeMinimaM(){
	int calcIdadeMinima = IdadeMinimaM - idade;
	float calcTc = TcM - Tc;
	
	if((idade < IdadeMinimaM) && (Tc >= TcM)){
		printf("Sua idade é %.0f, a idade minima é %d\n", idade, IdadeMinimaM);
		printf("Você atingiu o tempo minimo de contribuição (%d anos) para aposentar\n", TcM);
		printf("Faltam %d anos pra poder se aposentar\n", calcIdadeMinima);
	}else if((idade < IdadeMinimaM) && (Tc < TcM)){
		printf("Sua idade é %.0f, a idade minima é %d\n", idade, IdadeMinimaM);
		printf("Seu tempo de contribuição é %.1f anos, e o minimo é %d anos\n", Tc, TcM);
		printf("Faltam %d anos pra poder se aposentar\n", calcIdadeMinima);
		printf("Faltam %.1f anos de contribuição pra poder se aposentar\n", calcTc);
	}else if((idade >= IdadeMinimaM) && (Tc < TcM)){
		printf("Sua idade é %.0f, a idade minima é %d\n", idade, IdadeMinimaM);
		printf("Seu tempo de contribuição é %.1f anos, e o minimo é %d anos\n", Tc, TcM);
		printf("Faltam %.1f anos de contribuição pra poder se aposentar\n", calcTc);
	}else{
		printf("Pode aposentar");
	}
}

void calcIdadeMinimaH(){
	int calcIdadeMinima = IdadeMinimaH - idade;
	float calcTc = TcH - Tc;
	
	if((idade < IdadeMinimaH) && (Tc >= TcH)){
		printf("Sua idade é %.0f, a idade minima é %d\n", idade, IdadeMinimaH);
		printf("Você atingiu o tempo minimo de contribuição (%d anos) para aposentar\n", TcH);
		printf("Faltam %d anos pra poder se aposentar\n", calcIdadeMinima);
	}else if((idade < IdadeMinimaH) && (Tc < TcH)){
		printf("Sua idade é %.0f, a idade minima é %d\n", idade, IdadeMinimaH);
		printf("Seu tempo de contribuição é %.1f anos, e o minimo é %d anos\n", Tc, TcH);
		printf("Faltam %d anos pra poder se aposentar\n", calcIdadeMinima);
		printf("Faltam %.1f anos de contribuição pra poder se aposentar\n", calcTc);
	}else if((idade >= IdadeMinimaH) && (Tc < TcH)){
		printf("Sua idade é %.0f, a idade minima é %d\n", idade, IdadeMinimaH);
		printf("Seu tempo de contribuição é %.1f anos, e o minimo é %d anos\n", Tc, TcH);
		printf("Faltam %.1f anos de contribuição pra poder se aposentar\n", calcTc);
	}else{
		printf("Pode aposentar");
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");
		
		char sexo;
		int regra;
		//float idade, Tc;
		
		printf("\t\t\tDigite M para Masculino e F para Feminino\n\n");
		printf("Digite seu sexo: ");
		scanf("%c", &sexo);
		
		
		switch(toupper(sexo)) {
		case 'M':
			printf("\t\t\tDigite 1 para regra de pontuação ou 2 para regra de idade mínima\n\n");
			printf("Digite a opção: ");
			scanf("%d", &regra);
			switch(regra){
				case 1:
					printf("Digite sua idade: ");
					scanf("%f", &idade);
					printf("Digite seu tempo de contribuição: ");
					scanf("%f", &Tc);
					calcPontos(idade, Tc);
					calcPontosH();
				break;
				case 2:
					printf("Digite sua idade: ");
					scanf("%f", &idade);
					printf("Digite seu tempo de contribuição: ");
					scanf("%f", &Tc);
					calcIdadeMinimaH();
				break;
			}
		break;
		case 'F':
			printf("\t\t\tDigite 1 para regra de pontuação ou 2 para regra de idade mínima\n\n");
			printf("Digite a opção: ");
			scanf("%d", &regra);
			switch(regra){
				case 1:
					printf("Digite sua idade: ");
					scanf("%f", &idade);
					printf("Digite seu tempo de contribuição: ");
					scanf("%f", &Tc);
					calcPontos(idade, Tc);
					calcPontosM();
				break;
				case 2:
					printf("Digite sua idade: ");
					scanf("%f", &idade);
					printf("Digite seu tempo de contribuição: ");
					scanf("%f", &Tc);
					calcIdadeMinimaM();
				break;
			}
		break;
		default:
			printf("Sexo incorreto");
		break;
		}

	
 return(0);
} 

