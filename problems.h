
//In the comments after each problem functions' names are provided. Your task to define correct datatype and parameters.
//DO NOT CHANGE FUNCTIONS' NAMES.
//You may check your functions in main.cpp as shown by exampleFunction;
void exampleFunction() {
    std::cout<<"Example Function that can be called in main."<<std::endl;
}
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
void swap_values(float a,float b){
    // cout<<"a= "<<a<<" b= "<<b<<endl;    
    a=a*b;     
    b=a/b;     
    a=a/b;   
   
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
template <typename T>
T midValue(T n1, T n2, T n3){
    if(n1>n2 && n1<n3) return n1;
    else if(n2>n1 && n2<n3) return n2;
    return n3;
}
