void CountX(int a[], int n){
    int count =0, x;
    scanf("%d", x);
    for(int i=0;i<n;i++){
        if(a[i]==x)
            count ++;
    }
}