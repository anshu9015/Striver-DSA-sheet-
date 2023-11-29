void alphaTriangle(int n) {
    for(int i=0;i<n;++i){
        char ch = 'A'+n-1;
        for(int j=0;j<i+1;++j){
            cout<<ch<<" ";
            ch--;            
        }
        cout<<endl;
    }
    // Write your code here.
}

// E 
// E D 
// E D C 
// E D C B 
// E D C B A 