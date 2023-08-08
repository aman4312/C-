public: 
vector<long long int >prime;
void fun(int n){
    while(n%2==0){
        prime.push_back(2);
        n/=2;
    }
    for(int i =3;i<=sqrt(n);i+=2){
        while(n%i==0){
            prime.push_back(i);
            n/=i;
        }
        }
        if(n>2)prime.push_back(n);
    
}
    long long int largestPrimeFactor(int N){
        // code here
        fun(N);
        return *max_element(prime.begin(), prime.end());
        
    }
};
