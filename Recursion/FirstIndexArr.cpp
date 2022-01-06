int firstIndex(int input[], int size, int x) {
	if(size == 0) return -1;
    
    if(input[0] == x) return 0;
    
    int first_ind = firstIndex(input + 1, size -1, x);
    if(first_ind == -1){
        return -1;
    }else {
        return first_ind +1;
    }
}
