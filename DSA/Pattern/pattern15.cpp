void nLetterTriangle(int n) {
    for(int i = n;i>0;i--){
        char s = 'A';
        for(int j = i;j>0;j--){
            cout<<s<<" ";
            s++;
        }
        cout<<endl;
    }
    // Write your code here.
}


// A B C D E 
// A B C D 
// A B C 
// A B 
// A 