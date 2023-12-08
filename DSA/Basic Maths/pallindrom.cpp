bool palindrome(int n)
{
    int remainder,reverse=0;
    int num = n;
    while(n!=0){
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n = n/10;
    }
    if(reverse == num){
        return true;
    }
    else{
        return false;
    }
    // Write your code here
}


// 121
// 121
// then true

// 123
// 321
// then false
