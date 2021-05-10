#ifndef AVL_H
	#define AVL_H

	#include "item.h"
	
	#include <stdlib.h>
	#include <stdio.h>

	#define max(a,b) ((a > b) ? a : b)
	
	typedef struct avl AVL;
	typedef struct no NO;
	
	void avl_apagar_aux(NO **raiz);
	void avl_apagar(AVL **arvore);

	int avl_altura_no(NO *raiz) ;
	NO *alv_cria_no(ITEM *item);

	NO *rodar_direita(NO *a);
	NO * rodar_esquerda(NO *a);

	NO *rodar_esquerda_direita(NO *a);
	NO *rodar_direita_esquerda(NO *a);

	NO *avl_inserir_no(NO *raiz, ITEM *item);


#endif