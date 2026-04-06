#include <stdio.h>  
#include <stdlib.h>
#include <string.h> 
#include <time.h> 
#include <windows.h>

int Pergunta_E_Resposta();
int Cobra_Na_Caixa();
int Gousmas_War();
int Sair();

int main() {
    int opcao;
	int scoreTotal;
	scoreTotal= 0;
    
    do {
        system("cls");
        printf("ARCADE SEU SCORE ATUAL E: %d \n", scoreTotal);
        printf("1: Pergunta e Resposta \n");
        printf("2: Cobra na Caixa!\n");
        printf("3: Gousmas War\n");
        printf("4: Sair \n");
        printf("Escolha uma opcao:");

        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            opcao = 0;
        }

        switch (opcao) {
            case 1: {
                int jogar;
                do {
                    scoreTotal = scoreTotal + Pergunta_E_Resposta();
                    do {
                        printf("\nGostaria de jogar novamente Pergunta e Resposta?\n");
                        printf("Digite 1 para Sim\n");
                        printf("Digite 2 para voltar ao menu\n");

                        if (scanf("%d", &jogar) != 1) {
                            while (getchar() != '\n');
                            jogar = 0;
                        }
                    } while (jogar != 1 && jogar != 2);
                } while (jogar == 1);
                break;
            }
            case 2: {
                int jogar2;
                do {
                    scoreTotal = scoreTotal + Cobra_Na_Caixa();
                    do {
                        printf("\nGostaria de jogar novamente Cobra na Caixa?\n");
                        printf("Digite 1 para Sim\n");
                        printf("Digite 2 para voltar ao menu\n");

                        if (scanf("%d", &jogar2) != 1) {
                            while (getchar() != '\n');
                            jogar2 = 0;
                        }
                    } while (jogar2 != 1 && jogar2 != 2);
                } while (jogar2 == 1);
                break;
            }
            case 3: {
                int jogar3;
                do {
                    scoreTotal = scoreTotal + Gousmas_War();
                    do {
                        printf("\nGostaria de jogar novamente Gousmas War?\n");
                        printf("Digite 1 para Sim\n");
                        printf("Digite 2 para voltar ao menu\n");

                        if (scanf("%d", &jogar3) != 1) {
                            while (getchar() != '\n');
                            jogar3 = 0;
                        }
                    } while (jogar3 != 1 && jogar3 != 2);
                } while (jogar3 == 1);
                break;
            }
            case 4:
                printf("Voce esta saindo a sua pontuacao foi %i\n", scoreTotal);
                break;
            
            default:
                printf("Essa opcao nao e valida bonitao, Digite apenas numeros de 1 a 4\n");
                Sleep(4000);
        }
    } while (opcao != 4);
    
    return 0;
}

int Pergunta_E_Resposta() { 
int PontosRodada= 0;
char resposta1;
char resposta2;
char resposta3;
char resposta4;
char resposta5;

system("cls");
printf("=====================================\n");
printf("| Bem vindo ao Pergunta e Resposta  |\n");
printf("=====================================\n");
do {
        printf("\nPrimeira pergunta: Qual o melhor vingador?\n");
        printf("A: Capitao America | B: Homem de Ferro | C: Hulk | D: Thor\n");
        printf("Sua resposta: ");
        scanf(" %c", &resposta1);
		while (getchar() != '\n');
		
        if (resposta1 == 'B' || resposta1 == 'b') {
            printf("Parabens! Correta! +10 pontos.\n");
            PontosRodada += 10;
        } else if ((resposta1 == 'A' || resposta1 == 'a') || 
         (resposta1 == 'C' || resposta1 == 'c') || (resposta1 == 'D' || resposta1 == 'd')) {
            printf("Incorreta! Zero pontos por enquanto(Resposta Certa:Homem de Ferro).\n");
        } else {
            printf("Opcao invalida! Digite apenas A, B, C ou D\n");
        }
        
        
    } while (resposta1 != 'A' && resposta1 != 'a' && resposta1 != 'B' && resposta1 != 'b' && resposta1 != 'C' && resposta1 != 'c' && resposta1 != 'D' && resposta1 != 'd');

    Sleep(2000);

	printf("Segunda pergunta: Qual o nome do campeao do BB de 2025\n");
	Sleep(3000);
	printf("Pensou mesmo que era isso?\n");
	Sleep(3000);
do 	{
		printf("Segunda pergunta de verdade: Qual o nome do filme com a maior bilheteria da historia?\n");
		Sleep(1000);
		printf("Qual o filme com a maior bilheteria da historia?\n");
		Sleep(1000);
		printf("A: Vingadores Ultimato | B: Titanic | C: Avatar (2009) | D: Star Wars O Despertar da Forca\n");
		printf("Sua resposta: ");			
		scanf(" %c",&resposta2);
		while (getchar() != '\n');
		
		if(resposta2 == 'C' || resposta2 == 'c'){
    		printf("Correto! Voce acertou e ganhou 10 pontos por essa pergunta continue assim\n");
    		PontosRodada += 10;
		}
		else if((resposta2 == 'A' || resposta2 == 'a' || resposta2 == 'B' || resposta2 == 'b' || resposta2 == 'D' || resposta2 == 'd')){
		 printf("Incorreta! Errou amigao acabou nao ganhando nessa vai pra terceira pergunta(Resposta Certa:Avatar 2009)\n");	
		}
		else{
    		 printf("Opcao impossivel! Somente pode A, B, C ou D\n");
	    }
	    
	  }	while (resposta2 != 'A' && resposta2 != 'a' && resposta2 != 'B' && resposta2 != 'b' && resposta2 != 'C' && resposta2 != 'c' && resposta2 != 'D' && resposta2 != 'd');
	Sleep(2000);
 do{
 		printf("Terceira pergunta : Qual o maior time do Norte?\n");
		printf("A: Paysandu | B: Aguia de Maraba | C: ManausFC | D: Remo\n");
		printf("Sua resposta: ");
		scanf(" %c",&resposta3);
		while (getchar() != '\n');
		
		if(resposta3 == 'D' || resposta3 == 'd'){
    	printf("Correto!Voce acertou e ganhou 10 pontos e sabe a verdade\n");
    	PontosRodada += 10;
		}else if((resposta3 == 'A' || resposta3 == 'a' || resposta3 == 'B' || resposta3 == 'b' || resposta3 == 'C' || resposta3 == 'c')){
    	printf("Incorreta! Tem que acompanhar mais o futebol nessa em, nao ganhou nada nessa pergunta(Resposta Certa: Remo)\n");
 	    }else{
		printf("Nao pode essa nao digita somente A, B, C ou D\n");
       }
       
       
 	 } while  (resposta3 != 'A' && resposta3 != 'a' && resposta3 != 'B' && resposta3 != 'b' && resposta3 != 'C' && resposta3 != 'c' && resposta3 != 'D' && resposta3 != 'd');
 
	Sleep(2000);

 do{	
		printf("Quarta pergunta : Qual a melhor linguagem para iniciantes?\n");
		printf("A: Pascal | B: Cobol | C: Assembly | D: Linguagem C/C++\n");
		printf("Sua resposta: ");
		scanf(" %c",&resposta4);
		while (getchar() != '\n');
		
		if(resposta4 == 'D' || resposta4 == 'd'){
    	printf("Correto! Boa ja tem uma nocao de C e uma linguagem mais entendivel ganhou 10 pontos e sabe a verdade\n");
    	PontosRodada += 10;
		}else if((resposta4 == 'A' || resposta4 == 'a' || resposta4 == 'B' || resposta4 == 'b' || resposta4 == 'C' || resposta4 == 'c')){
    	printf("Incorreta! Essas sao complexas demais para entender agora, melhor estudar depois\n");
		}else{
		printf("Nao pode essa guerreiro digita so A, B, C ou D\n");	
		}
		
		
 	  }while  (resposta4 != 'A' && resposta4 != 'a' && resposta4 != 'B' && resposta4 != 'b' && resposta4 != 'C' && resposta4 != 'c' && resposta4 != 'D' && resposta4 != 'd');
  
	Sleep(2000);
do{
		printf("Quinta e ultima pergunta : Qual o melhor heroi da Liga da Justica?\n");
		printf("A: Batman | B: Superman |  C: Flash | D: Mulher-Maravilha\n");
		printf("Sua resposta: ");
		scanf(" %c",&resposta5);
		while (getchar() != '\n');
		
		if(resposta5 == 'A' || resposta5 == 'a'){
 		printf("Correto! Boa tem bom gosto \n");
    	PontosRodada += 10;
		}else if((resposta5 == 'B' || resposta5 == 'b' || resposta5 == 'C' || resposta5 == 'c' || resposta5 == 'D' || resposta5 == 'd')){
   	    printf("Incorreta! O melhor superpoder do heroi e ser rico lembre-se\n");
   		} else{
		printf("Resposta Indisponivel use so A, B, C ou D\n");
		  }
		  

  }while(resposta5 != 'A' && resposta5 != 'a' && resposta5 != 'B' && resposta5 != 'b' && resposta5 != 'C' && resposta5 != 'c' && resposta5 != 'D' && resposta5 != 'd');
	Sleep(5000);
return PontosRodada;
}



int Cobra_Na_Caixa(){

printf("Historinha do jogo\n");
Sleep(1000);
printf("A historia do jogo se passa dentro de uma tumba egipcia onde dois exploradores ficaram presos.\n");
Sleep(2000);
printf("No centro da sala, existem cinco caixas: uma delas contem o botao para abrir a porta, enquanto uma outra esconde uma cobra mortal.\n");
Sleep(2000);
printf("A cada rodada (final do jogo), o local do botao e da cobra muda de caixa de forma aleatoria, aumentando o desafio e a imprevisibilidade do jogo.\n");
Sleep(6000);

    #define Botao 1
    #define Cobra 2
    #define Total_Caixas 5

    char nomes[7][12] = {"Augusto","Lara","Leonardo","Erika","Luca","Larissa","Felipe"};
    int  escolha1, escolha2, escolha3, escolha4;
    int protagonista, secundario;
    int pontos_rodada = 0;
    int player1 = -1, player2 = -1; 
    char digitado1[12], digitado2[12];  
    int abertas[6] = {0,0,0,0,0,0}; 
    int i,j; 

    srand(time(NULL));
    
int Posicao_Do_Botao = rand() % 5 + 1;
int Posicao_Da_Cobra;

do {
    Posicao_Da_Cobra = rand() % 5 + 1;
} while (Posicao_Da_Cobra == Posicao_Do_Botao);

system ("cls");
printf("===============================\n");
printf("| Bem vindo ao Cobra na caixa |\n");
printf("===============================\n");
	Sleep(2000);

printf("Lista dos nomes dos exploradores dessa tumba (Escreva exatamente como mostrado)\n");
for(i = 0; i < 7; i++) { 
    printf("%s\n", nomes[i]);
} 
Sleep(1000);

  while (player1 == -1) {
        printf("Digite o Nome para o  Jogador 1: ");
        scanf("%s", digitado1);
        for(i = 0; i < 7; i++) {
            if(strcmp(digitado1, nomes[i]) == 0) { 
                player1 = i;
            }
        }
        if(player1 == -1) printf("Nome nao encontrado! Digite igual a lista.\n");
    }
	Sleep(1000);
	 while (player2 == -1) {
        printf("Digite o Nome para o Jogador 2: ");
        scanf("%s", digitado2);
        for(i = 0; i < 7; i++) {
            if(strcmp(digitado2, nomes[i]) == 0) {
                player2 = i;
            }
        }
        if(player2 == -1) {
            printf("Nome nao encontrado!\n");
        }
        else if(player2 == player1){
           printf("Esse nome o player 1 ja possui escolha outro\n"); 
           player2 = -1;
        }
    }

int quem_comeca_sorteio = rand() % 2;

    if (quem_comeca_sorteio == 0) {
        protagonista = player1;
        secundario = player2;
    } else {
        protagonista = player2;
        secundario = player1;
    }
    Sleep(2000);
     printf("O(A) pessoa que vai comecar ,ou seja, nosso protagonista foi o(a) : %s\n", nomes[protagonista]);
    Sleep(2000);

    printf("\n--- STATUS DAS CAIXAS ---\n");
    for(j = 1; j <= 5; j++) {
        if(abertas[j] == 1) {
		printf("[ ABERTA ] ");
		}else printf("[ CAIXA %d ] ", j);
    }
    printf("\n-------------------------\n");
    
    do {
        printf("\n%s Protagonista escolha uma das caixas numeradas (1-5): ", nomes[protagonista]);
        
        if (scanf("%i", &escolha1) != 1) {
            printf("Voce digitou uma letra digite somente numeros de 1 a 5\n");
            while (getchar() != '\n');
            escolha1 = -1;
        } else if(escolha1 < 1 || escolha1 > 5 || abertas[escolha1] == 1 ) {
            printf("Caixa inexistente ou ja aberta, tente novamente.\n");
        }

    } while(escolha1 < 1 || escolha1 > 5 || abertas[escolha1] == 1); 

    abertas[escolha1] = 1;
    if(escolha1 == Posicao_Da_Cobra) { 
        printf("Eita %s achou a cobra.\n", nomes[protagonista]); 
         Sleep(2000); 
         pontos_rodada = 0; 
    return pontos_rodada;
    }
    if(escolha1 == Posicao_Do_Botao) { 
        printf("EXCELENTE! %s se salvou completamente! +100 pts\n", nomes[protagonista]); 
        Sleep(2000); 
         pontos_rodada = 100; 
    return pontos_rodada;
    }

	 printf("\n--- STATUS DAS CAIXAS ---\n");
    for(j = 1; j <= 5; j++) {
        if(abertas[j] == 1) {
		printf("[ ABERTA ] ");
		}else printf("[ CAIXA %d ] ", j);
    }
    printf("\n-------------------------\n");
    
    do {
        printf("\n%s Secundario escolha uma das caixas numeradas (1-5): ", nomes[secundario]);
        
        if (scanf("%i", &escolha2) != 1) {
            printf("Voce digitou uma letra digite somente numeros de 1 a 5\n");
            while (getchar() != '\n');
            escolha2 = -1;
        } else if(escolha2 < 1 || escolha2 > 5 || abertas[escolha2] == 1) {
            printf("Caixa que ja foi ocupada ou inexistente tente outra caixa\n");
        }
    } while(escolha2 < 1 || escolha2 > 5 || abertas[escolha2] == 1) ;
    
    abertas[escolha2] = 1;
    if(escolha2 == Posicao_Da_Cobra) { 
        printf("DERROTADO! %s a cobra te mordeu\n", nomes[secundario]); 
            Sleep(2000); 
         pontos_rodada = 0; 
    return pontos_rodada; }
    if(escolha2 == Posicao_Do_Botao) { 
        printf("SE SALVOU! %s encontrastes o botao! +100 pts\n", nomes[secundario]); 
       Sleep(2000); 
         pontos_rodada = 100;
    return pontos_rodada;
    }

	 printf("\n--- STATUS DAS CAIXAS ---\n");
    for(j = 1; j <= 5; j++) {
        if(abertas[j] == 1) {
		printf("[ ABERTA ] ");
		}else printf("[ CAIXA %d ] ", j);
    }
    printf("\n-------------------------\n");
    
    do {
        printf("\n%s, Segunda chance protagonista escolha mais uma caixa numerada (1-5): ", nomes[protagonista]);
        
        if (scanf("%i", &escolha3) != 1) {
            printf("Voce digitou uma letra digite somente numeros de 1 a 5\n");
            while (getchar() != '\n');
            escolha3 = -1;
        } else if(escolha3 < 1 || escolha3 > 5 || abertas[escolha3] == 1) {
            printf("Essa caixa nao esta disponivel,escolha outra\n");
        }
    } while(escolha3 < 1 || escolha3 > 5 || abertas[escolha3] == 1);
    
    abertas[escolha3] = 1;
    if(escolha3 == Posicao_Da_Cobra) { 
        printf("Foi pra terra do pe junto, a cobra estava na caixa %d.\n", escolha3); 
     Sleep(2000); 
         pontos_rodada = 0;
    return pontos_rodada; }
    if(escolha3 == Posicao_Do_Botao) { 
        printf("CONSEGUIU! O botao esta na caixa %d fuja! +100 pts\n", escolha3); 
       Sleep(2000); 
         pontos_rodada = 100;
    return pontos_rodada;
    }

	 printf("\n--- STATUS DAS CAIXAS ---\n");
    for(j = 1; j <= 5; j++) {
        if(abertas[j] == 1) {
			     printf("[ ABERTA ] ");
		}	else printf("[ CAIXA %d ] ", j);
    }
    printf("\n-------------------------\n");
    
 do {
        printf("\n%s, Restam apenas duas caixas, TUDO OU NADA! (1-5): ", nomes[secundario]);
        
        if (scanf("%i", &escolha4) != 1) {
            printf("Voce digitou uma letra digite somente numeros de 1 a 5\n");
            while (getchar() != '\n');
            escolha4 = -1;
        } else if(escolha4 < 1 || escolha4 > 5 || abertas[escolha4] == 1) {
            printf("Escolha uma das duas caixas que sobraram!\n");
        }
    } while(escolha4 < 1 || escolha4 > 5 || abertas[escolha4] == 1);
    
    abertas[escolha4] = 1;

    if(escolha4 == Posicao_Da_Cobra) { 
        printf("Que azar! Na ultima chance voce achou a cobra mais sorte na proxima\n"); 
       Sleep(2000); 
         pontos_rodada = 0;
    return pontos_rodada;
    }
    else{ 
        printf("DECISIVO! O BOtao estava nela, fuja vencedor +100 pts\n"); 
        Sleep(2000); 
         pontos_rodada = 100;
    return pontos_rodada; 
     } 
}int Gousmas_War() {
    
    int p1_g1 = 1;
    int p1_g2 = 1;
    int p2_g1 = 1;
    int p2_g2 = 1;
    int turno = 1;
    int acao;
    int atacante;
    int alvo;
    int doadora;
    int pontos;

    while (1) { 
        system("cls");
        printf("====================================\n");
        printf("          GOUSMAS WAR\n");
        printf("====================================\n");
        printf("PLAYER 1: Gousma 1 = [%d] | Gousma 2 = [%d]\n", p1_g1, p1_g2);
        printf("PLAYER 2: Gousma 1 = [%d] | Gousma 2 = [%d]\n", p2_g1, p2_g2);
        printf("------------------------------------\n");
        printf("TURNO DO PLAYER %d\n", turno);
        printf("1 - ATACAR | 2 - DIVIDIR | 3 - DESISTIR\n");
        printf("Escolha: ");

        
        if (scanf("%d", &acao) != 1) {
            printf("\nSomente Numeros sao permitidos, tente de novo\n");
            while (getchar() != '\n'); 
            Sleep(1500);
            continue; 
        }

        
        if (acao < 1 || acao > 3) {
            printf("\nEsse numero nao esta disponivel no menu\n");
            Sleep(1500);
            continue;
        }

        
        if (acao == 3) {
        	printf("200 pontos foram adicionados ao arcade\n");
            printf("\n Um jogador desistiu(foi frouxo) Retornando ao comeco do jogo...\n");
            Sleep(2000);
            return 200; 
        }

        
        if (acao == 1) {
            printf("Qual gousma sua vai atacar? (1 ou 2): ");
            scanf("%d", &atacante);
            printf("Qual gousma inimiga e o alvo? (1 ou 2): ");
            scanf("%d", &alvo);

           
            if (atacante < 1 || atacante > 2 || alvo < 1 || alvo > 2) {
                printf("\Essa gousma nao existe escolha 1 ou 2\n");
                Sleep(1500);
                continue;
            }

            if (turno == 1) {
                if (atacante == 1 && p1_g1 == 0) { 
                    printf("Gousma 1 foi finalizada!\n"); 
                    Sleep(1500); 
                    continue; 
                }
                if (atacante == 2 && p1_g2 == 0) { 
                    printf("Gousma 2 foi derrotada!\n"); 
                    Sleep(1500); 
                    continue; 
                }
                if (alvo == 1 && p2_g1 == 0) { 
                    printf("Alvo Gousma 1 foi desligada!\n"); 
                    Sleep(1500); 
                    continue; 
                }
                if (alvo == 2 && p2_g2 == 0) { 
                    printf("Alvo Gousma 2 foi neutralizada!\n"); 
                    Sleep(1500); 
                    continue; 
                }

               if (atacante == 1) {
                    if (alvo == 1) { p2_g1 = p2_g1 + p1_g1; }
                    else { p2_g2 = p2_g2 + p1_g1; }
                } else {
                    if (alvo == 1) { p2_g1 = p2_g1 + p1_g2; }
                    else { p2_g2 = p2_g2 + p1_g2; }
                }
                turno = 2;  
            } 
            else { 
                if (atacante == 1 && p2_g1 == 0) { 
                    printf("Gousma 1 faleceu!\n"); 
                    Sleep(1500); 
                    continue; 
                }
                if (atacante == 2 && p2_g2 == 0) { 
                    printf("Gousma 2 foi derrotada!\n"); 
                    Sleep(1500); 
                    continue; 
                }
                if (alvo == 1 && p1_g1 == 0) { 
                    printf("Alvo Gousma 1 foi abatida!\n"); 
                    Sleep(1500); 
                    continue; 
                }
                if (alvo == 2 && p1_g2 == 0) { 
                    printf("Alvo Gousma 2 finalizada!\n"); 
                    Sleep(1500); 
                    continue; 
                }

                if (atacante == 1) {
                    if (alvo == 1) { p1_g1 = p1_g1 + p2_g1; }
                    else { p1_g2 = p1_g2 + p2_g1; }
                } else {
                    if (alvo == 1) { p1_g1 = p1_g1 + p2_g2; }
                    else { p1_g2 = p1_g2 + p2_g2; }
                }
                turno = 1;
            }
        }

        
        else if (acao == 2) {
            printf("Qual gousma vai doar? (1 ou 2): ");
            scanf("%d", &doadora);
            printf("Quantos pontos transferir? ");
            scanf("%d", &pontos);

            
            if (doadora < 1 || doadora > 2) {
                printf("\n Impossivel realizar essa doacao, essa gousma nao existe\n");
                Sleep(1500);
                continue;
            }

            if (turno == 1) {
                if (doadora == 1) {
                    if (pontos >= p1_g1 || pontos <= 0) {
                        printf("\nEssa doacao nao pode ser efetuada, pois %d pontos na Gousma 1\n", p1_g1);
                        Sleep(2000); 
                        continue;
                    }
                    
                    if (p1_g2 + pontos > 5) {
                        printf("Nao faz isso sua Gousma 2 vai explodir\n");
                        Sleep(1500);
                        continue;
                    }
                    p1_g1 = p1_g1 - pontos;
                    p1_g2 = p1_g2 + pontos;
                } else {
                    if (pontos >= p1_g2 || pontos <= 0) {
                        printf("\nEssa transferencia nao pode ser completa voce so tem %d pontos na Gousma 2\n", p1_g2);
                        Sleep(2000); 
                        continue;
                    }
                    if (p1_g1 + pontos > 5) {
                        printf("Essa acao faria sua Gousma 1 sucumbir\n");
                        Sleep(1500);
                        continue;
                    }
                    p1_g2 = p1_g2 - pontos;
                    p1_g1 = p1_g1 + pontos;
                }
                turno = 2;
            } 
            else { 
                if (doadora == 1) {
                    if (pontos >= p2_g1 || pontos <= 0) {
                        printf("Essa acao nao pode ser completa voce tem %d pontos na Gousma 1\n", p2_g1);
                        Sleep(2000); 
                        continue;
                    }
                    if (p2_g2 + pontos > 5) {
                        printf("ERRO: Isso faria sua Gousma 2 explodir!\n");
                        Sleep(1500);
                        continue;
                    }
                    p2_g1 = p2_g1 - pontos;
                    p2_g2 = p2_g2 + pontos;
                } else {
                    if (pontos >= p2_g2 || pontos <= 0) {
                        printf("Invalido! Voce tem %d pontos na Gousma 2.\n", p2_g2);
                        Sleep(2000); 
                        continue;
                    }
                    if (p2_g1 + pontos > 5) {
                        printf("ERRO: Isso faria sua Gousma 1 explodir!\n");
                        Sleep(1500);
                        continue;
                    }
                    p2_g2 = p2_g2 - pontos;
                    p2_g1 = p2_g1 + pontos;
                }
                turno = 1;
            }
        }

        
        if (p1_g1 > 5) { p1_g1 = 0; }
        if (p1_g2 > 5) { p1_g2 = 0; }
        if (p2_g1 > 5) { p2_g1 = 0; }
        if (p2_g2 > 5) { p2_g2 = 0; }

        
        if (p1_g1 == 0 && p1_g2 == 0) {
            printf("\n============================\n");
            printf("     PLAYER 2 VENCEU!         \n");
            printf("============================\n");
            printf("500 pontos foram adicionados ao arcade\n");
            Sleep(3000);
            return 500;
        }
        if (p2_g1 == 0 && p2_g2 == 0) {
            printf("\n============================\n");
            printf("     PLAYER 1 VENCEU!         \n");
            printf("============================\n");
            printf("500 pontos foram adicionados ao arcade\n");
            Sleep(3000);
            return 500;
        }
    }
}
