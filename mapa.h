/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mapa.h
 * Author: Jorge
 *
 * Created on 14 de Janeiro de 2017, 22:13
 */

#ifndef MAPA_H
#define MAPA_H

struct mapa {
	char** matriz;
	int linhas;
	int colunas; 
};

typedef struct mapa MAPA;

void alocamapa(MAPA* m);
void lemapa(MAPA* m);
void liberamapa(MAPA* m);
void imprimemapa(MAPA* m);

struct posicao {
	int x;
	int y;
};

typedef struct posicao POSICAO;

void encontramapa(MAPA* m, POSICAO* p, char c);

#endif /* MAPA_H */

