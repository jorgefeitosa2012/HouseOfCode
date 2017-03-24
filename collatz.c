/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   collatz.c
 * Author: Jorge
 *
 * Created on 4 de Março de 2017, 15:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    const int number = 1000000;

    int sequenceLength = 0;
    int startingNumber = 0;
    long sequence;

    int[] cache = new int[number + 1];
    //Initialise cache
    for (int i = 0; i < cache.Length; i++) {
        cache[i] = -1;
    }
    cache[1] = 1;

    for (int i = 2; i <= number; i++) {
        sequence = i;
        int k = 0;
        while (sequence != 1 && sequence >= i) {
            k++;
            if ((sequence % 2) == 0) {
                sequence = sequence / 2;
            } else {
                sequence = sequence * 3 + 1;
            }
        }
        //Store result in cache
        cache[i] = k + cache[sequence];

        //Check if sequence is the best solution
        if (cache[i] > sequenceLength) {
            sequenceLength = cache[i];
            startingNumber = i;
        }
    }
}

