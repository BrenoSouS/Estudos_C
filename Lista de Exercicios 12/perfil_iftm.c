#include"perfl_iftm.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

void InicializaPerfis(perfil VetorRedeSocial[], int tamanho){
    
    for (int i = 0 ; i < tamanho ; i++){
        strcopy(VetorRedeSocial[i].nome , " ");
        strcopy(VetorRedeSocial[i].profissao , " ");
        strcopy(VetorRedeSocial[i].sexo , " ");
        strcopy(VetorRedeSocial[i].estado_civil , " ");

        VetorRedeSocial[i].idade = 0;
        VetorRedeSocial[i].codigo = 0;
        VetorRedeSocial[i].disciplina_favorita = 0;
        VetorRedeSocial[i].media_notas = 0;

        
        
    }

}

void RecebePerfis(perfil VetorRedeSocial[], int tamanho){
    for(int i = 0 ; i < tamanho ; i++){
        VetorRedeSocial[i].codigo = i;
        printf("Entre com o nome do aluno %d: " , i);
        gets(VetorRedeSocial[i].nome);

        printf("Entre com a idade do aluno %d: " , i);
        scanf("%d" , &VetorRedeSocial[i].idade);

        printf("Entre com o sexo do aluno %d: " , i);
        gets(&VetorRedeSocial[i].sexo);
        
        printf("Entre com o estado civil do aluno %d: " , i);
        fgets(VetorRedeSocial[i].estado_civil, 1 , stdin );

        printf("Entre com a profissão do aluno %d: " , i);
        fgets(VetorRedeSocial[i].profissao, 1 , stdin );

        printf("Entre com a media de notas do aluno %d: " , i);
        scanf("%f" , &VetorRedeSocial[i].media_notas);

        printf("Entre com a disciplina favorita do aluno %d: " , i);
        fgets(VetorRedeSocial[i].disciplina_favorita, 1 , stdin );

        
        


        


    }

}