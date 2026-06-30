bool isHappy(int n) {
    int p = n;

    while (p != 1 && p != 4) {
        int sum = 0;

        while (p > 0) {
            int rem = p % 10;
            sum += rem * rem;
            p /= 10;
        }

        p = sum;
    }

    return p == 1; 
}