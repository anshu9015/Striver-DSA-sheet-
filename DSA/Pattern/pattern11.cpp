void nBinaryTriangle(int n) {
    int s;
    for(int i =1;i<=n;++i){
         if(i%2 != 0){
                s = 1;
            }
            else{
                s = 0;
            }
        for(int j =0;j<i;++j){
            cout<<s<<" ";
            s = 1-s;
        }
        cout<<endl;

    }
    // Write your code here.
}

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 