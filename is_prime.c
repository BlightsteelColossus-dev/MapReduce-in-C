// returns 1 if the number is a prime, 0 otherwise
void* naivePrime(void* number){
    int n = *((int*) number);
    int* res = malloc(sizeof(int));
    *res = 1;
    for(int i = 2; i < n; i++){
        if(n%i==0){
            *res=0;
            return res;
        }
    }
    return res;
}

int main(int argc, char** argv){
    int N = 1000;

    int** numbers = malloc(sizeof(int*)*N);
    for(int i = 0 ; i < N ; i++){
        int* n = malloc(sizeof(int));
        *n = i;
        numbers[i] = n;
    }

    int** resulting_numbers = NULL;
    void** is_prime = map((void**) numbers, naivePrime, N);
    resulting_numbers = (int**) is_prime;
}