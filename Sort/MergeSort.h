#ifndef MERGESORT_H   // guardas de cabeçalho, impedem inclusões cíclicas

#define MERGESORT_H


int merge(int *list, int menor, int meio, int max){ // Criar as sublistas e organizar elas


    int o1 = meio - menor +1;
    int o2 = max - meio;
    int *E;
    int *D;


        E = malloc (o1 * sizeof (int));
        D = malloc (o2 * sizeof (int));
    //separando  vetor    
    for (int i=0; i < o1; i++){
        E[i]=list[menor + i];
        //printf ("%8d", E[i]);
    }
    //printf("\n");
     for (int j=0; j < o2; j++){
        D[j]=list[meio + 1 + j];
        //printf ("%8d", D[j]);
    }
   //printf("\n");
    //acaba a separação

    //reorganizando o vetor
    int e = 0;
    int d = 0;
    int k = menor;

    
    
    while (e < o1 && d < o2){
        if (E[e] <= D[d]){
            list[k] = E[e];
            e++;
        }
        else {
            list[k] = D[d];
            d++;
        }
        k++;
    }

    //quando o vetor da esquerda ou da direita chegam no topo devemos copiar os elementos remanescentes
    while (e < o1){
            list[k] = E[e];
            e++;
            k++;
        }
    
    while (d < o2){
        list [k] = D[d];
        d++;
        k++;
    }

    free(E);
    free(D);


 }

void merge_sort(int *list, int menor, int max){

        if (menor < max){
            int meio = menor + (max - menor)/2;

            merge_sort (list, menor, meio);
            merge_sort (list, meio + 1, max);

            merge (list, menor, meio, max);



        }


}





#endif