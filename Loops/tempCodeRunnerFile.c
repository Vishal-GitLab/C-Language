int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n= n/10;
    }
    printf("the reversed number is %d",r);