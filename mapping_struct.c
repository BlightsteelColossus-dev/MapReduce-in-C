struct map_argument {
        void** things;
        void** results;
        void* (*f)(void*);
        int from;
        int to;
};