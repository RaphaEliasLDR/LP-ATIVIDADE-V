#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



void menuDeOpcoes (){
printf ("\n+======================================================+\n");
printf ("|                BEM VINDO(a) AO MENU                  |\n");
printf ("+======================================================+\n");
printf ("| 1 - PRODUTOS A VENDA       | 2- PRODUTOS EM ESTOQUE  |\n");
printf ("| 3 - VER CUPOM              | 4- ENTREGA              |\n");
printf ("| 5 - PRODUTOS EM PROMOÇÃO   | 6- SAIR DO MENU         |\n");
printf ("=======================================================+\n");
}


void limparTela(){
	system ("cls");
}


int main (){
	setlocale (LC_ALL, "portuguese");
	
	int opcao;
	int cadernoTilibra = 300, cadernoForoni = 250, mouse = 200, teclado = 190, pendrive = 150;
	int preco, cupom, inserirCupom;
	float codigo, cep;
	
	menuDeOpcoes ();
	printf ("\nSelecione uma das opções para continuar: ");
	scanf("%d", &opcao);
	
	
switch (opcao){
	case 1: 
		printf("Caderno Tilibra - 96 Folhas - Capa Dura \n");
        printf("Caderno Foroni - 96 Folhas - Capa Dura \n");
        printf("Mouse s/ fio Multilaser \n");
        printf("Teclado usb Login \n");
        printf("Pendrive 32 gb Sandisk \n");
        
        printf("\nDeseja ver os preços? (1 - Sim | 2- Não) ");
        scanf ("%d", &preco);
        
        	if (preco == 1){
        		limparTela();
        		printf("\nPREÇOS:");
        		printf("\nCaderno Tilibra - R$: 20,00 \n");
        		printf("Caderno Foroni - R$: 25,00\n");
        		printf("Mouse s/ fio Multilaser - R$: 30,00 \n");
        		printf("Teclado usb Login - R$: 15,00 \n");
        		printf("Pendrive 32 gb Sandisk - R$: 35,00\n");
				} else {
					printf ("\nSaindo...");
				}
	break;		
	case 2: 
		printf ("\nPRODUTOS EM ESTOQUE: ");
		printf("\nCaderno Tilibra - 96 Folhas - Capa Dura: %d Uni \n", cadernoTilibra);
        printf("Caderno Foroni - 96 Folhas - Capa Dura: %d Uni \n", cadernoForoni);
        printf("Mouse s/ fio Multilaser: %d Uni \n", mouse);
        printf("Teclado usb Login: %d Uni \n", teclado);
        printf("Pendrive 32 gb Sandisk: %d Uni \n", pendrive);
    	break;
    case 3:
    	printf ("\nCUPONS DE DESCONTO:");
    	printf ("\n DESC5 - "5%" de desconto");
    	printf ("\n DESC10 - "10%" de desconto");
    	printf ("\nDESEJA INSERIR UM CUPOM? (1- Sim | 2- Não)");
    	scanf ("%d", &cupom);
    		if (cupom == 1){
			printf ("(1 - DESC5 | 2 - DESC10 ");
			scanf ("%d", inserirCupom);
				if (inserirCupom == 1){
					printf("\nCaderno Tilibra - DE R$: 20,00 PARA R$: 19,00 \n");
        			printf("Caderno Foroni - DE R$: 25,00  PARA R$: 23,75 \n");
				}if(inserirCupom == 2){
					printf("Mouse s/ fio Multilaser - DE R$: 30,00  PARA R$: 27,00 \n");
        			printf("Teclado usb Login - DE R$: 15,00 PARA R$: 13,50 \n");
        			printf("Pendrive 32 gb Sandisk - DE R$: 35,00 PARA R$: 31,50 \n");
				}
    		}else {
    		printf ("Saindo...");
			}
	break;
	case 4:
        printf("\nDigite o codigo de rastreamento :");
        scanf("%f",&codigo);
        printf("\nInforme o seu cep : ");
        scanf("%f",&cep);
        if (cep >=4110000) {
            printf("O Item será entregue no prazo de 15 dias \n");
        }else {
            printf("O Item será entregue no prazo de 30 dias \n");
        }
        break;
    case 5: 
    	printf ("\nPRODUTOS EM PROMOÇÃO:");
    	printf("\nCaderno Tilibra - DE R$: 20,00 POR R$: 18,00\n");
        printf("Caderno Foroni - DE R$: 25,00 POR R$: 23,00\n");
        printf("Teclado usb Login - DE R$: 15,00 POR 13,00 \n");
	case 6: 
	      printf("Agradecemos pelo contato, Até a Proxima!! \n");
            break;
        default:
            printf("Obrigado pela preferencia\n");
            printf ("Saindo do menu...");
            break;
}

return 0;
}
