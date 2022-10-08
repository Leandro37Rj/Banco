#include<stdio.h>

int main()
{   int Resposta;    
    int meses;       
    int parcela;
    int senha;
    int acesso;
    int dinheiro; 
    
     printf(" Seja bem vindo ao Banco Rio de janeiro!\n ");
     printf ("\n ### Digite sua senha com 4 Digitos ###\n\n                   ");
     scanf ("%i", &senha );

     if ( senha == 1234){
       printf("\n 💢Seja bem vindo a sua conta Leandro💢\n");
       printf("\n ## Menu ##\n\n (1) Saldo:\n (2) Investimentos: ");
        scanf("%i",&acesso );
    }
     if ( acesso == 1){
       printf("\n   ## Saldo na conta R$300 Reais ## ");
       printf("\n\n (1) Depositar dinheiro:\n\n (2) Sacar dinheiro:  ");
        scanf("%i", &dinheiro);
    }
     if ( dinheiro == 1){
        printf("\n ### Qual valor do depósito? ###\n            ");
         scanf("%i", &dinheiro);
    
        printf("\n     ###  Novo saldo = R$%i ###\n", dinheiro + 300  );
      } 
    
     if( dinheiro == 2){
        printf(" \n  ### Qual o valor de Retirada? ###\n            ");
         scanf("%i",&dinheiro);
        
         printf("\n   ###  Novo saldo = R$%i  ###\n", 300  - dinheiro );
              
     }   
      if(acesso == 2 ){
       printf("\n Digite: (1) Poupança (2) Empréstimo\n            ");
        scanf("%i", &acesso);
    
      if( acesso == 1) {
        printf("\n Digite o valor do Investimento\n         ");
          scanf("%i", &acesso);
        
         printf("\n Digite quantos meses de Investimento\n       ");
          scanf("%i", &meses);
         printf("\n    ## Total ( R$%i)  ##\n" , acesso * meses);
      }
      }
      
       if ( acesso == 2){
         printf("\n  # Digite o valor do Empréstimo:\n           ");
          scanf("%i", &dinheiro);
         printf("\n  # Digite quantas Vezes que Pagar #\n                ");
          scanf("%i", &parcela);
         printf("\n       Total (R$%i) Reais\n\n ", dinheiro / parcela );
      }    
   
     
      
     
    
    
           
       
       
    
    
    
     if ( senha !=1234){
         printf(" senha incorreta");
         printf("\n\n Deseja cadastra nova senha?\n\n Digite: 1 para sim, ou 2 para não ?\n ");
           scanf("%i", &Resposta);
      
     if ( Resposta == 1){
          printf("\n  Digite sua nova senha de 4 Digitos ");
           scanf("%i", &Resposta);
   }
     if(Resposta == 2)
         printf("\n seção encerrada");
       
   }

       

}  