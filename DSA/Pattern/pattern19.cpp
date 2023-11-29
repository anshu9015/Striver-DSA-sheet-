void symmetry(int n) {
       
    for(int i =0;i<n;++i){
         int space = 0;  
        for(int j =0;j<n-i;++j){
            cout<<"* ";
        }
        for(int j=0;j<space;++j){
            cout<<" ";
        }
        for(int j =0;j<n-i;++j){
            cout<<"* ";
        }
        space +=2;
        cout<<endl;
    } 
    for(int i =0;i<n;++i){
        int space1 = (2*n-2);
        for(int j =0;j<=i;++j){
            cout<<"* ";
        }
        for(int j=0;j<space1;++j){
            cout<<" ";
        }
        for(int j =0;j<=i;++j){
            cout<<"* ";
        }
        space1 -=2;
        cout<<endl;
    }
    
    // Write your code here  //https://takeuforward.org/wp-content/uploads/2022/08/P19.png.
}


