void symmetry(int n) {
  for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){

            cout<<"* ";

        }

        for(int k=0;k<2*n-2*i;k++){

            cout<<" ";

        }

        for (int j = 0; j <i+1; j++) {

          cout << "* ";

        }

        cout << endl;

    }

 

for(int i=0;i<n-1;i++){

    for(int j=0;j<n-i-1;j++){

        cout<<"* ";

    }

    for(int k =0;k<2*i+2;k++){

        cout<<" ";

    }

    for(int j=0;j<n-i-1;j++){

        cout<<"* ";

    }

    cout<<endl;

}


    // Write your code here.//https://takeuforward.org/wp-content/uploads/2022/08/P20.png
}

