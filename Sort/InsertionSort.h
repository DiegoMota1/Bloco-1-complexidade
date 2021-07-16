#ifndef INSERTIONSORT_H

#define INSERTIONSORT_H



int insertion_sort(int *list, int qnt){
    int i, j, n, k;
  
    int comparador;
   for (j=1; j < qnt; j++) // j começa na posição 1 do vetor e vai até a ultima posição;
    {
        // k recebe a posição que está passando no "for";
        comparador = list[j];
        k = j - 1;
        while (list[k] > comparador && k>=0) 
        { // Ocorre a troca;
            list [k+1] = list [k];
            k= k-1;
        
        }

        list[k+1] = comparador;

           /* for (i=0; i<qnt; i++){
        
        printf ("%8d", list[i]);
    }*/
    }


        

//printf ("A quantidade de trocas para o insertion foi  %d\n",  n);

}

#endif