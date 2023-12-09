int calcGCD(int n, int m){
        while(n>0 && m>0){
        if(n>m) n%=m;
        else m%=n;
    }


    if(n==0) return m;
    return n;   
    // Write your code here.
}

// 4 6 output 2
// 3 1        1