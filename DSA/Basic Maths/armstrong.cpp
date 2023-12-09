bool checkArmstrong(int n){
	int k =0;
	int sum =0;
	int output = n;
	int original = n;
	while(output>0){
		output = output/10;
		k++;
	}
	output = original;
	while(output>0){
		int r = output%10;
		sum += pow(r,k);
		output = output/10;
	}
	if(sum == n){
		return true;
	}
	else{
		return false;
	}
	//Write your code here
}


// Sample Input 1 :
// 1


// Sample Output 1 :
// true


// Explanation of Sample Input 1 :
// 1 is an Armstrong number as, 1^1 = 1.