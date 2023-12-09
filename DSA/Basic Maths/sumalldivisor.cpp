int sumOfAllDivisors(int n){
	int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(n/i)*i;
    }
    return sum;
	// Write your code here.	
}

time limit exceed


int sumOfAllDivisors(int n){
	int sum =0;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=i;++j){
			if(i%j==0){
				sum +=j;
			}
		}
	}
		return sum;
	// Write your code here.	
}


// Sample Input 1:
// 3


// Sample Output 1:
// 8


// Explanation of sample output 1:
// We need to find sumOfDivisors(1) + sumOfDivisors(2) +sumOfDivisors(3).
// sumOfDivisors(1) = 1
// sumOfDivisors(2) = 2 + 1 = 3
// sumOfDivisors(3) = 3 + 1 = 4
// Therefore, the answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) = 1 + 3 + 4 = 8.