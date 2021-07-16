#ifndef SELECTIONSORT_H

#define SELECTIONSORT_H



int selection_sort(int *list, int qnt){

    int j, jmenor, aux, k, n;
    n = 0;
    

    for (k = 0; k < qnt; k++){

    for (j = k; j < qnt-1; j++){

       jmenor=k;
        if (list[jmenor] > list[j+1]){
            jmenor=j+1;
            n=n+1;
        }
        
        aux = list[k];
        list[k] = list[jmenor];
        list[jmenor] = aux;
        
    }// num menor encontrado


    //printf ("%8d\n", list[jmenor]);
    
    
        
    
    /*for (int i = 0; i < qnt; i++){
        
        printf ("%8d", list[i]);
        
    }
    printf ("\n");*/
    }
   //printf ("A quantidade de trocas para o selection foi  %d\n",  n);

}
#endif