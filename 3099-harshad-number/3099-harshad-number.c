int sumOfTheDigitsOfHarshadNumber(int x) {
    int n=x,rem=0,sum=0;
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum+=rem;
    }
    if (x % sum == 0)
        return sum;

    return -1;

}