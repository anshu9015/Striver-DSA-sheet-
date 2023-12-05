bool isPrime(int n)
{
	// Write your code here.
	if(n<=1){
		return false;
	}
	for(int i = 2; i*i<=n;++i){
		if(n%i==0){
			return false;
		}
	}
	return true;
}








// Sample Input 1:
// 5


// Sample Output 1:
// YES


// Explanation of sample input 1 :
// 5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.


// Sample Input 2:
// 6


// Sample Output 2:
// NO


// Explanation of sample input 2 :
// 6 is divisible by 1, 2, 3, and 6. Therefore it is not a prime number.
// Numbers having more than two factors are known as composite numbers.