void getStarPattern(int n) {
    //  for(int i =0;i<n;++i){
    //     cout<<"*";
    // }
    // cout<<endl;
    // for(int i=0;i<n-2;++i){
    //     for(int j=0;j<1;++j){
    //         cout<<"*";
    //     }
    //     for(int j =0;j<2*(n)-4;++j){
    //         cout<<" ";
    //     }
    //      for(int j=0;j<1;++j){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //   for(int i =0;i<n;++i){
    //     cout<<"*";
    // }
    // Write your code here.
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==0 || i==(n-1) || j==0 || j==(n-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

// *****
// *   *
// *   *
// *   *
// *****