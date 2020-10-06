#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    //Variaveis para o menu
    int id_Ferramenta = -1;
    //Variaveis para verificação de primos
    int n_primo, result = 0, i;
    //Variaveis para calculo das areas
    int area;
    float ladofigura_1, ladofigura_2;
    //Variaveis Fibonacci
    int fibo_a = 0, fibo_b=1, fibo_aux, fibo_i, fibo_n;
    //Variaveis Fatorial
    int n_Fatorial,Fatorial = 1;
    //Variaveis Numero X elevado y
    int variavel_X,variavel_Y,result_elevado,variavel_controle;
    //Variaveis para media de n numeros
    float cont_media = 0,soma_media = 0,media,n_media;
    //Variaveis para M.M.C
    int MMC, MDC, n1_MMC, n2_MMC,resto,aux_MMC,IMMC;
    //Variaveis para calculadora basica
    float soma = 0,subtracao = 0,multiplicacao = 1,divisao = 1,num_calculo,num_operacoes_div,num_operacoes;
    int operacoes;
    //Variaveis para diferença de datas
    int ano_1,ano_2,mes_1,mes_2,dia_1,dia_2,diferenca_ano,diferenca_mes,diferenca_dia;
    //Variaveis para conversao de decimais em romanos
    int num_decimal,contM=0,contD=0,contC=0,contL=0,contX=0,contV=0,contI=0;
    char result_romano;
    //Variaveis para juros simples
    float capital_aplicado,taxa_juros,tempo_aplicacao;

printf("\n************************************\n");
printf("\n    CAIXA DE FERRAMENTAS BASICAS\n");
printf("\n------------------------------------\n");
printf("\n      -> SEJA BEM VINDO(A)! <-  \n");
printf("\n************************************\n\n");
while(id_Ferramenta != 0){
        printf("POR FAVOR,ESCOLHA APENAS UMA DAS OPCOES ABAIXO.\n");
        printf("[ 1 ] - VERIFICACAO DE NUMERO PRIMO.\n");
        printf("[ 2 ] - CALCULO DA AREA.(QUADRADO,TRIANGULO,RETANGULO)\n");
        printf("[ 3 ] - CALCULO DO ENESIMO TERMO DE FIBONACCI.\n");
        printf("[ 4 ] - CALCULO DO FATORIAL.\n");
        printf("[ 5 ] - CALCULO DE x ELEVADO A y.(x^y)\n");
        printf("[ 6 ] - CALCULO DA MEDIA DE n NUMEROS.\n");
        printf("[ 7 ] - CALCULO DO M.M.C ENTRE DOIS NUMEROS.\n");
        printf("[ 8 ] - CALCULADORA BASICA.(x,/,+,-)\n");
        printf("[ 9 ] - CALCULO DA DIFERENCA ENTRE DUAS DATAS.(DIAS,MESES E ANOS)\n");
        printf("[ 10 ] - CONVERSAO DE NUMERO DECIMAL PARA ROMANO.\n");
        printf("[ 11 ] - CALCULO JUROS SIMPLES.\n");
        printf("\n-> DIGITE A SUA OPCAO / ZERO PARA SAIR : ");
        scanf("%d",&id_Ferramenta);

switch(id_Ferramenta){
    case 1:
        system("cls");
        printf("\n[ 1 ] - VERIFICACAO DE NUMERO PRIMO.\n\n");
        printf("-> DIGITE UM NUMERO PARA A VERIFICACAO: ");//Pega o numero do usuario
        scanf("%d",&n_primo);
        fflush(stdin);
        result = 0;
    for (i = 2; i <= n_primo/2; i++){//Realizar divisões sucessivas do número dado por todos os números a partir de 2 até a metade dele próprio
        if(n_primo % i == 0){//Verifica o resto da divisao e atribui ao contador chamado de result.
            result++;
            break;
    }}if(result == 0){//Se o resto for 0 e um numero primo , caso contrario nao e.
        printf("O NUMERO %d E UM NUMERO PRIMO!\n\n", n_primo);
      }   
      else{
        printf("O NUMERO %d NAO E NUMERO PRIMO!\n\n", n_primo);
      }
        
    printf("\n----------------------------------------------------------------------\n");
    break;
    case 2:
        system("cls");
        printf("\n[ 2 ] - CALCULO DA AREA.(QUADRADO,TRIANGULO,RETANGULO)\n\n");
        printf("-> QUAL FIGURA DESEJA SABER A AREA? DIGITE UMA DAS OPCOES ABAIXO:");
        printf("\n[ 1 ] - QUADRADO\n");
        printf("[ 2 ] - RETANGULO\n");
        printf("[ 3 ] - TRIANGULO\n");
        printf("-> QUAL A SUA OPCAO ?: ");
        scanf("%d",&area);
        switch(area){
            case 1:
                system("cls");
                printf("\n[ 1 ] - QUADRADO\n\n");
                printf("-> DIGITE,RESPECTIVAMENTE,DOIS LADOS DO QUADRADO: ");
                scanf("%f %f",&ladofigura_1,&ladofigura_2);//pega os lados do quadrado inserido pelo usuario 
                ladofigura_1=ladofigura_1*ladofigura_2;// realiza o calculo da area multiplicando um lado com o outro
                printf("AREA DO QUADRADO = %.2f\n",ladofigura_1);
                printf("\n----------------------------------------------------------------------\n");
                break;
            case 2:
                system("cls");
                printf("\n[ 2 ] - RETANGULO\n\n");
                printf("-> DIGITE,RESPECTIVAMENTE,DOIS LADOS DO RETANGULO: ");
                scanf("%f %f",&ladofigura_1,&ladofigura_2);//pega os lados do retangulo inserido pelo usuario 
                ladofigura_1=ladofigura_1*ladofigura_2;// realiza o calculo da area multiplicando um lado com o outro
                printf("AREA DO RETANGULO = %.2f\n",ladofigura_1);
                printf("\n----------------------------------------------------------------------\n");
                break;
            case 3:
                system("cls");
                printf("\n[ 3 ] - TRIANGULO\n\n");
                printf("-> DIGITE,RESPECTIVAMENTE,A BASE E A ALTURA DO TRIANGULO: ");
                scanf("%f %f",&ladofigura_1,&ladofigura_2);//pega os dados  do triangulo  inserido pelo usuario lado_1,lado_2 e a altura
                ladofigura_1=(ladofigura_1*ladofigura_2)/2;// realiza o calculo da area do triangulo multiplicando base com a altura e dividindo tudo por 2.
                printf("AREA DO TRIANGULO = %.2f\n",ladofigura_1);
                printf("\n----------------------------------------------------------------------\n");
                break;
                }break;
    case 3:
        system("cls");
        printf("\n[ 3 ] - CALCULO DO ENESIMO TERMO DE FIBONACCI.\n\n");
        printf("-> QUANTOS NUMEROS DA SEQUENCIA DESEJA SABER ?: ");
        scanf("%d",&fibo_n);
        printf("Sequencia de Fibonacci -> ");
        for(fibo_i = 0;fibo_i < fibo_n;fibo_i++){//O número lido entra em um laço para a verificação da adição da sequência.
                fibo_aux = fibo_a + fibo_b;//Faz a soma do ultimo valor com o primeiro.
                fibo_a = fibo_b;//Iguala os valores lidos.
                fibo_b = fibo_aux;//Pega o valor anterior para ser somado na proxima verificação.
                printf("%d -> ", fibo_aux);
        }
        printf("FIM !");
        printf("\n----------------------------------------------------------------------\n");
        break;

    case 4:
        system("cls");
        printf("\n[ 4 ] - CALCULO DO FATORIAL.\n\n");
        printf("-> DIGITE UM NUMERO INTEIRO POSITIVO: ");
        scanf("%d",&n_Fatorial);// pega um numero inteiro para realizar o calculo do fatorial 
        fflush(stdin);
        while(n_Fatorial <= 0){//enquanto o numero nao for um inteiro positivo printa para o usuario colocar um numero válido
            printf("-> POR FAVOR,DIGITE UM NUMERO INTEIRO POSITIVO: ");
            scanf("%d",&n_Fatorial);
        }
        for(Fatorial = 1; n_Fatorial > 1; n_Fatorial = n_Fatorial - 1){// a cada iteração 1 unidade é subtraída do número escolhido até que ele seja igual à 1.
            Fatorial = Fatorial * n_Fatorial;// multiplica a cada iteração pelo antecessor do número escolhido.
        }
        printf("FATORIAL = %d",Fatorial);
        printf("\n----------------------------------------------------------------------\n");
        break;
    case 5:
        system("cls");
        printf("\n[ 5 ] - CALCULO DE x ELEVADO A y.(x^y)\n\n");
        printf("-> DIGITE,RESPECTIVAMENTE,AS VARIAVEIS X(BASE) E Y(EXPOENTE): ");
        scanf("%d %d",&variavel_X,&variavel_Y);// pega a base e o expoente do usuario
        result_elevado = variavel_X;//inicializa a variavel do resultado do calculo   
        for ( variavel_controle = 0; variavel_controle < variavel_Y-1; variavel_controle++){     result_elevado *=variavel_X;} // faz um laco de repeticao ate que o expoente seja 0, incrementando um do expoente a cada laco, e a cada interação  realiza o calculo multiplicando a base e salvando na variavel do resultado.
        printf("\n%d ELEVADO A %d = %d.\n",variavel_X,variavel_Y,result_elevado);
        printf("\n----------------------------------------------------------------------\n");
        break;
    case 6:
        system("cls");
        printf("\n[ 6 ] - CALCULO DA MEDIA DE n NUMEROS.\n\n");
        while(true){//Uso do true para condição infinita.
          printf("-> DIGITE OS VALORES DESEJADOS / ZERO para CONCLUIR: ");
          scanf("%f",&n_media);
        if(n_media==0){
            break;}
          cont_media ++;
          soma_media += n_media;
          media = soma_media/cont_media;//Faz a soma de cada elemento lido e divide pela quantidade total.
          }
          printf("\nA MEDIA DOS NUMEROS DIGITADOS = %.2f\n",media);
        printf("\n----------------------------------------------------------------------\n");
        break;
    case 7:
        system("cls");
        printf("\n[ 7 ] - CALCULO DO M.M.C ENTRE DOIS NUMEROS.\n\n");
        printf("-> DIGITE,RESPECTIVAMENTE,DOIS NUMEROS: ");
        scanf("%d %d", &n1_MMC, &n2_MMC);// pega os dois numeros do usuario para realizar o calculo do mmc
        if (n2_MMC>n1_MMC){//se o segundo numero for maior que o primeiro , vou fazer o primeiro numero ser maior para dar certo o calculo do mmc.
          aux_MMC=n1_MMC;//uma variavel auxiliar recebe o primeiro numero
          n1_MMC=n2_MMC;//o primeiro numero que o usuario digitou recebe o valor do segundo numero
          n2_MMC=aux_MMC;//e por fim o segundo numero recebe o valor do auxiliar
        }if ((n1_MMC%n2_MMC)==0){//se  o resto do primeiro numero com o segundo numero que o usuario digitou  for zero entao
            MMC=n1_MMC;//mmc recebe o valor do primeiro numero que o usuario digitou
        }else{
            for (IMMC=2;IMMC<=n2_MMC;IMMC++){//enquanto o segundo numero for menor igual ao segundo numero digitado e incrementado em 1 a variavel de incremento.
                aux_MMC=n1_MMC*IMMC;//cria um auxiliar para receber a multiplicacao entre o immc e o primeiro numero digitado.
                if ((aux_MMC%n2_MMC)==0){// se o resto entre o auxiliar do minimo multiplo comum com o segundo numero que o usuario digitou for igual a 0
                    MMC=aux_MMC;//a variavel minimo multiplo comum recebe o valor do auxiliar do minimo multiplo comum
                    IMMC=n2_MMC+1;//immc recebe segundo numero que o usuario digitou +1.
                }}}
        printf("\nO M.M.C ENTRE %i E %i = %i\n",n1_MMC,n2_MMC,MMC);
        printf("\n----------------------------------------------------------------------\n");
        break;
    case 8:
        system("cls");
        printf("\n[ 8 ] - CALCULADORA BASICA.(x,/,+,-)\n\n");
        printf("-> QUAL OPERACAO DESEJA CALCULAR? DIGITE UMA DAS OPCOES ABAIXO:");
        printf("\n[ 1 ] - SOMA\n");
        printf("[ 2 ] - SUBTRACAO\n");
        printf("[ 3 ] - DIVISAO\n");
        printf("[ 4 ] - MULTIPLICACAO\n");
        printf("-> QUAL A SUA OPCAO ?: ");
        scanf("%d",&operacoes);//Lê a opção do usuario.
        switch(operacoes){
          case 1:
            system("cls");
            printf("\n[ 1 ] - SOMA\n\n");
            while(true){
            printf("-> DIGITE OS VALORES DESEJADOS / ZERO para CONCLUIR: ");
            scanf("%f",&num_operacoes);
            if(num_operacoes == 0){//Condição de parada do laço.
              break;}
            soma += num_operacoes;}
            printf("\nA SOMA DOS NUMEROS DIGITADOS = %.2f.\n",soma);
            printf("\n----------------------------------------------------------------------\n");
            break;
        case 2:
          system("cls");
          printf("\n[ 2 ] - SUBTRACAO\n\n");
          while(true){
          printf("-> DIGITE OS VALORES DESEJADOS / ZERO para CONCLUIR: ");
          scanf("%f",&num_operacoes);
          if(num_operacoes == 0){//Condição de parada do laço.
            break;}
          subtracao = 0;
          subtracao -= num_operacoes;}
          printf("\nA SUBTRACAO DOS NUMEROS DIGITADOS = %.2f.\n",subtracao*-1);//Multiplicação por -1 para obter o modulo do valor.
          printf("\n----------------------------------------------------------------------\n");
          break;
        case 3:
          system("cls");
          printf("\n[ 3 ] - DIVISAO\n\n");
          printf("-> DIGITE,RESPECTIVAMENTE,O DIVIDENDO E O DIVISOR: ");
          scanf("%f %f",&num_operacoes,&num_operacoes_div);
          while(num_operacoes_div == 0){//Verifica que o divisor não equivale a zero,pois seria impossivel a divisão.
            printf("\nO DIVISOR NAO PODE SER IGUAL A ZERO!\n");
            printf("-> DIGITE,RESPECTIVAMENTE,O DIVIDENDO E O DIVISOR DIFERENTE DE ZERO: ");
            scanf("%f %f",&num_operacoes,&num_operacoes_div);}
          divisao = num_operacoes/num_operacoes_div;
          printf("\nA DIVISAO ENTRE %.2f E %.2f  = %.2f.\n",num_operacoes,num_operacoes_div,divisao);
          printf("\n----------------------------------------------------------------------\n");
          break;
        case 4:
          system("cls");
          printf("\n[ 4 ] - MULTIPLICACAO\n\n");
          while(true){
          printf("-> DIGITE OS VALORES DESEJADOS / ZERO para CONCLUIR: ");
          scanf("%f",&num_operacoes);
          if(num_operacoes == 0){//Condição de parada.
            break;}
          multiplicacao *= num_operacoes;}
          printf("\nA MULTIPLICACAO DOS NUMEROS DIGITADOS = %.2f.\n",multiplicacao);
          printf("\n----------------------------------------------------------------------\n");
          break;
          }
          break;
    case 9:
        system("cls");
        printf("\n[ 9 ] - CALCULO DA DIFERENCA ENTRE DUAS DATAS.(DIAS,MESES E ANOS)\n\n");
        printf("-> DIGITE A PRIMEIRA DATA,RESPECTIVAMENTE,DIA MES ANO: ");
        scanf("%d %d %d",&dia_1,&mes_1,&ano_1);//Recolhe separadamnte cada valor de data.
        printf("-> DIGITE A SEGUNDA DATA,RESPECTIVAMENTE,DIA MES ANO: ");
        scanf("%d %d %d",&dia_2,&mes_2,&ano_2);
        diferenca_dia = dia_1 - dia_2;//Faz a subtração das duas datas lidas.
        if(diferenca_dia < 0){
          diferenca_dia*=-1;//Faz a conversão do modulo do resultado da subtração das datas caso seja negativo.
        }
        diferenca_mes = mes_1 - mes_2;
        if(diferenca_mes < 0){
          diferenca_mes*=-1;//Faz a conversão do modulo do resultado da subtração das datas caso seja negativo.
        }
        diferenca_ano = ano_1 - ano_2;
        if(diferenca_ano < 0){
          diferenca_ano*=-1;//Faz a conversão do modulo do resultado da subtração das datas caso seja negativo.
        }
        printf("\nA DIFERENCA DAS DATAS = DIAS:%d /MESES:%d /ANOS:%d.\n",diferenca_dia,diferenca_mes,diferenca_ano);
        printf("\n----------------------------------------------------------------------\n");
        break;
    case 10:
        system("cls");
        printf("\n[ 10 ] - CONVERSAO DE NUMERO DECIMAL PARA ROMANO.\n\n");
        printf("-> DIGITE UM NUMERO DECIMAL PARA CONVERSAO (DEVE SER MAIOR QUE ZERO E MENOR QUE MIL): ");
        scanf("%d",&num_decimal);
        if((num_decimal>0) && (num_decimal<=1000)){
        //romanos = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        //arabicos = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        printf("\nO NUMERO %d CONVERTIDO PARA ROMANO EQUIVALE A: ",num_decimal);
        while(num_decimal > 0){//Lê e o valor inserido pelo usuario e conforme passa pelo if,retira a ->
          if(num_decimal >= 1000){//-> quantidade que foi inserida até que seja igual a zero.
              num_decimal -= 1000;
              printf("M");//A cada valor retirado é impresso uma letra referente ao valor retirado.
          } else if(num_decimal >= 900){
              num_decimal -= 900;
              printf("CM");
          } else if(num_decimal >= 500){
              num_decimal -= 500;
              printf("D");
          } else if(num_decimal >= 400){
              num_decimal -= 400;
              printf("CD");
          } else if(num_decimal >= 100){
              printf("C");
              num_decimal -= 100;
          } else if(num_decimal >= 50){
              printf("L");
              num_decimal -= 50;
          } else if(num_decimal >= 40){
              printf("XL");
              num_decimal -= 40;
          } else if(num_decimal >= 10){
              printf("X");
              num_decimal -= 10 ;
          } else if(num_decimal >= 9){
              num_decimal -= 9;
              printf("IX");
          } else if(num_decimal >= 5){
              num_decimal -= 5;
              printf("IV");
          } else if(num_decimal >= 4){
              num_decimal -= 4;
              printf("IV");
          } else if(num_decimal >= 1){
              num_decimal -= 1;
              printf("I");
            }}}
        printf("\n----------------------------------------------------------------------\n");
        break;
    case 11:
        system("cls");
        printf("\n[ 11 ] - CALCULO JUROS SIMPLES.\n\n");
        printf ("\n-> DIGITE O VALOR DO CAPITAL: ");
        scanf ("%f",&capital_aplicado);
        printf ("-> DIGITE O VALOR DA TAXA (%%): ");
        scanf ("%f",&taxa_juros);
        printf ("-> DIGITE O NUMERO DE MESES APLICADOS: ");
        scanf ("%f",&tempo_aplicacao);
        taxa_juros = (((capital_aplicado * taxa_juros)/100)* tempo_aplicacao);//Lê os valores digitados pelo usuario de forma que a taxa de juros ja esteja convertida para porcentagem.
        printf ("TAXA DE JUROS SIMPLES = %.2f %%.",taxa_juros);//Devolve o output em valor de porcentagem,por se tratar de juros.
        printf("\n----------------------------------------------------------------------\n");
        break;
        default:
            system("cls");
            break;

}}if(id_Ferramenta == 0){
        printf("\n-> FECHANDO A CAIXA...MUITO OBRIGADO! <-\n");
        return 0;
}}
