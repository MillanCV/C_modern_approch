double inner_product(const double *a, const double *b, int n){
    int i;
    double result = 0;

    while (i++ < n)
        result += a++ * b++;
    
    return result;
}