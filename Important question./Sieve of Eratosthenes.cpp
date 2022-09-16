//this algo is used to find all prime numbers less than or equal to thr given number 
vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int>a;                          //declare a vector to store all prime numbers
        vector<int>prime(N+1,true);            //declare a bool array and initially set all the elements as true;
        for(int p=2;p*p<=N;p++)
        {
             // If prime[p] is not changed, then it is a prime
            if(prime[p]==true)
            {
              // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
                for(int i=p*p;i<=N;i+=p)     
                {
                    prime[i]=false;
                }
            }
        }
        for(int p=2;p<=N;p++)
        {
            if(prime[p])a.push_back(p); //at the end if some elements are true in the array it means that it is prime so push it into a vector and return the vector
        }
        return a;
    }
