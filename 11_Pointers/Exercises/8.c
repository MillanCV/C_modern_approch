int *find_largest(int a[], int n)
{
    int *p = &a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > *p)
            p = &a[i];
    }

    return p;
}