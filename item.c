#include <stdlib.h>
#include <stdio.h>

#include "item.h"

struct item_{
  int chave;
  /*Outros componentes*/
};

ITEM *item_criar(int ch){
  ITEM *item;
  item =(ITEM *)malloc(sizeof(ITEM));

  if(item != NULL)
    item->chave = ch;

  return item;
}

boolean item_apagar(ITEM **item){
  if(item != NULL){
    free(*item);
    *item = NULL;
    return(TRUE);
  }
  return(FALSE);
}

void item_imprimir(ITEM *item){
  if(item != NULL)
    printf("\n --> item: %d", item->chave);
}

int item_get_chave(ITEM *item){
  if(item!=NULL)
    return item->chave;
    else{
      printf("\nERRO: item_get_chave\n");
      exit(1);
    }
}

boolean item_set_chave(ITEM *item, int chave){
  if(item!=NULL){
      item->chave = chave;
      return(TRUE);
  }else{
    return(FALSE);
  }
}