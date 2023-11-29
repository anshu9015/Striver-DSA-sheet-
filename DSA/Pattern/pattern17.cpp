void alphaHill(int n) {
    for(int i =0;i<n;++i){
   for(int j =0;j<n-i-1;j++){
       cout<<" ";
   }
   char s = 'A';
   int breakpoint = (2*i+1)/2;
   for(int g =0;g<(2*i+1);++g){
       cout<<s<<" ";
       if(g < breakpoint){s++;}
        else {s--;}
   }
//    for(int j =0;j<n-i-1;++j){
//        cout<<" ";
//    }
   cout<<endl;
    }
    // Write your code here.
}


//         A 
//       A B A 
//     A B C B A 
//   A B C D C B A 
// A B C D E D C B A 