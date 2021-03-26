double _myPow(double x, long n){
        if(n == 1)return x;
        double temp = _myPow(x, n >> 1);
        temp *= temp;
        if(n & 1)
            temp *= x;
        return temp;
    }
    
    double myPow(double x, int n) {
        
        if(n == 0)return 1;
        if(x == 0)return 0;
        
        double ans = _myPow(x, abs(n));
        
        if(n < 0)
            return 1.0 / ans;
        return ans;
        
    }
