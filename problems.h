#include <bits/stdc++.h>
// Problem 1
//floorFunction
//ceilingFunction
int floorFunction(float num) {
    return static_cast<int>(num);
}
int ceilingFunction(float num) {
    int p = static_cast<int>(num);
    return (p < num ? p+1 : p);
}
// Problem 2
//swap_values
template<typename T>
void swap_values(T& x, T& y) {
    T temp = x;
    x=y;
    y=temp;
}
// Problem 3
//multiply
int multiply(int a, int b) {
    if (b == 0  a==0) {
        return 0;
    }
    if (b>0)
    return a+multiply(a, b-1);
    return -multiply(a, -b);
}
// Problem 4
//digitSum
int digitSum(int n) {
    int sum = 0;
    if (n == 0) {
        return 0;
    }return sum+=n%10+digitSum(n/10);


}
// Problem 5
//decimalToBinary
int decimalToBinary(int n) {
    int t=log2(n)/1;
    int res=0;
    for(int i=t;i>=0;i--) {
        if(pow(2,i)<=n) {
            res+=1*pow(10,i);
            n-=pow(2,i);
        }

    }return res;

}

// Problem 6
//midValue
template <typename T> T midValue (T a, T b,T c) {
    if((a>b && b>c)  (c>b && b>a)) {
        return b;
    } //if((a>c && c>b)  (b>c && c>a)) { return c;}
    if((b>a and a>c)  (a>b && a<c)) { return a;}
    return c;
}
