#pragma once

// A linguagem C
#define define   define
#define inclui   include
#define se       if
#define senao    else
#define enquanto while
#define continua continue
#define faz      do

// io
// TODO: deviamos ter um header para cada traducao de header. 
// por exemplo se quisermos traduzir o que esta no iostream, deviamos ter um iostream-pt.h e fazer include dele aqui
#define imprime  printf
#define fimprime fprintf
#define scaneia  scanf
#define fscaneia fscanf
#define ficheiro FILE
#define fecha    fclose

// Multi-execucao
#define fio            thread
#define cadeado        lock
#define cadeado_unico  unique_lock
#define exclusao_mutua mutex
