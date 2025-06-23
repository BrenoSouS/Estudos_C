#ifndef PERFIL_IFTM_H
#define PERFIL_IFTM_H

typedef struct 
{
    int codigo;
    char nome[40];
    int idade;
    char sexo;
    char estado_civil;
    char profissao;
    float media_notas;
    int disciplina_favorita;

}perfil;

#endif

void InicializaPerfis(perfil VetorRedeSocial[], int tamanho);
void RecebePerfis(perfil VetorRedeSocial[], int tamanho);
