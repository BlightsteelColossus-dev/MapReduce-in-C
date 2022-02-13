
void* chunk_map(void* argument){
    struct map_argument* arg = (struct map_argument*) argument;
    for(int i = arg->from; i < arg->to; i++){
        arg->results[i] = (*(arg->f))(arg->things[i]);
    }
    return NULL;
}