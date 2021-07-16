#ifndef BUBBLESORT_H

#define BUBBLESORT_H



void bubble_sort (int *list, int qnt){
    int  j, aux;
  
   
    bool troca;

    troca = true;
    while (troca == true) {

        troca = false;
        for (j = 0; j < qnt-1; j++){
            
            if(list[j] > list[j+1]){
                aux         = list[j];
                list[j]     = list[j+1];
                list[j+1]   = aux;
                troca       = true;
                               
            }
            /*for (i=0; i<qnt; i++){
        
        printf ("%8d", list[i]);
        
    }
    printf ("   o par analisado e %4d e %d", list [j], list[j+1]);
    printf("\n");*/
            
        }               
    }       
    /*for (int i=0; i<qnt ; i++){
        
        printf ("%8d", list[i]);
    }
    printf("\n");
    printf ("A quantidade de trocas para o bubble foi  %d\n",  n);*/

}

#endif