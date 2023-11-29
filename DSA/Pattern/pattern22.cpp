void getNumberPattern(int n) {
    for(int i=0;i<2*n-1;++i){
        for(int j=0;j<2*n-1;++j){
          cout<<1+max(abs(n-i-1),abs(n-j-1));
        }
        cout<<endl;
    }
    // Write your code here.
}



// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555