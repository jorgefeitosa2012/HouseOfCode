/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   forca.h
 * Author: Jorge
 *
 * Created on 8 de Janeiro de 2017, 07:10
 */

#ifndef FORCA_H
#define FORCA_H
#define TAMANHO_PALAVRA 20
#define FACIL 10
#define MEDIO 5
#define DIFICIL 2

int enforcou();
void abertura();
void chuta();
int jachutou(char letra);
int ganhou();
void desenhaforca();
void escolhepalavra();
void adicionapalavra();
void escolhedificuldade();

#endif /* FORCA_H */

