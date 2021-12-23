int *find_largest(int a[], int n){
    int *p, *tmp = a;

    for (p = a; p < a + n; p++){
        if(*p > *tmp)
            tmp = p;
    }

    return tmp;
}
