vector<int> Solution::sieve(int A) {
    int Primes[A+1]; 
    for (int i = 0; i <= A; i++){
        Primes[i] = 1;
    }
    Primes[0] = 0;
    Primes[1] = 0;
    for (int i = 2; i <=A; i++){
        if(Primes[i] == 1){
            for (int j=2; i*j<=A; j++){
                Primes[i*j] = 0;
            }
        }
    }
    vector<int> answer;
        for (int k = 2; k <= A; k++){
        if (Primes[k] == 1){
            answer.push_back(k);
        }
    }
    return answer;
}
