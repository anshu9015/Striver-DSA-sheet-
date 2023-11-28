int countDigits(int n){
	int count =0;
	int quotient = n;	
	while(quotient>0){
		int remainder = quotient%10;
		quotient /= 10;
		if(remainder>0 && n%remainder == 0){
			count++;
		}
	}
	return count;
	// Write your code here.	
}

// Input : n = 12
// Output : 2
// 1 and 2 divide 12.

// Input : n = 1012
// Output : 3
// 1, 1 and 2 divide 1012.