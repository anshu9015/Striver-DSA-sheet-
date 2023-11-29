void nStarDiamond(int n) {
    for(int i =0;i<n;++i){
        for(int k = 0;k<n-i-1;++k){
            cout<<" ";
        }
        for(int j =0;j<(2*i)+1;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n;i>0;i--){
        for(int j = n;j>i;j--){
            cout<<" ";
        }
        for(int k = (2*i)-1;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
    // Write your code here.
}


//     *
//    ***
//   *****
// *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
