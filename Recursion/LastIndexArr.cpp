int lastIndex(int input[], int size, int x) {
    if(size == 0) return -1;
    
    int last_index = lastIndex(input +1, size -1, x);
    if(last_index != -1) return last_index +1;
    
    if(last_index == -1 && input[0] == x) return 0;
    
    return last_index;
}