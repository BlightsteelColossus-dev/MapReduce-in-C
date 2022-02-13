// generic single-threaded map implementation using void* and pointer arithmetics.
void** map(void** things, void* (*f)(void*), int length){

    void** results = malloc(sizeof(void*)*length);

    for(int i = 0; i < length; i++){
        void* thing = things[i];
        void* result = (*f)(thing);
        results[i] = result;
    }

    return results;
}