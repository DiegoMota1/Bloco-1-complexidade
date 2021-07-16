int gerador(int *list, int maior){    
    int  i;

    
    



    list = malloc (maior * sizeof (int));
    // gerando um array até o valor selecionado
        for (i = 0; i < maior; i++){
            list[i] = rand() % 100;
            //printf ("%8d", list [i]);
            }

    return list;
}
