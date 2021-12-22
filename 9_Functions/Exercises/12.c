double inner_proguct(double a[], double b[], int n){
    double response = 0;

    for (int i = 0; i < n; i++){
        response += a[i] * b[i];
    }

    return response;
}