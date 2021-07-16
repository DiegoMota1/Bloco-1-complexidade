#ifndef QUICKSORT_H

#define QUICKSORT_H

 

int quick_sort(int lista, int menor, int max){
    int p;
    int i;
    
    if ( max > menor ){
        p = pivo (lista, menor, max);
        quick_sort (lista, menor, p-1);
        quick_sort (lista, p+1 , max);
    
       
    }

}

//escolha do pivo


int pivo(int *lista, int menor, int max){
//temos uma barra caminhando, ela vai compara o valor de cada elemento da lista com o pivo
//se ela encontra um elemento max que o pivo, nada acontece, se encontra um elemento menor, ela troca o elemento da lista com o elemento logo após o pivo
int pivo = lista[max-1];
int aux, i;
int j = menor; //elemento logo antes do pivo

    for (i = menor ; i < max; i++ ){ //barra
        if (lista[i] <= pivo){
            aux      = lista[i];
            lista[i] = lista[j];
            lista[j] = aux;
            j++; //o elemento logo a frente do pivo ja está organizado, agora vamos para o proximo
        }
    }
    /*for (i = 0; i < max; i++){
            printf ("%8d", lista [i]);
            }
        printf ("\n");*/

    
   
// agora colocamos o pivo na posição que ele pertence
    
  
            aux      = pivo;
            pivo = lista[j];
            lista[j] = aux;
    /*while ( lista[menor] > lista[menor+1]) {
            aux      = lista[menor];
            lista[menor] = lista[menor+1];
            lista[menor+1] = aux;

        menor++;
    }*/
return j;
    
}


#endif