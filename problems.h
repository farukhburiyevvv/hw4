
// Problem 1
int floorFunction(float a){
  return a;
}

int ceilingFunction(float a){
    int x = int (a);
    if(x-a==0){
        return a;
    }
    return a+1;
}

// Problem 2
template<typename T>
void swap_values(T& x, T& y) {
    T temp = x;
    x=y;
    y=temp;
}
// Problem 3
int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b < 0) {
        return -multiply(a, -b);
    }
    return a + multiply(a, b - 1);
}

// Problem 4
int digitSum(int a) {
    int s=0;
    if(a>0){
        s+=a%10;
        return s+digitSum(a/10);
    }
    return 0;
}

// Problem 5
int decimalToBinary(int n) {
    if (n <= 0) return 0; 
    int binary = decimalToBinary(n / 2);
    return binary * 10 + (n % 2);
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
