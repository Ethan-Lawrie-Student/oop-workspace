int num_count(int array[], int n, int number) {
    
    int count;

    count = 0;

    if(!(n<1)) {
        for (int i = 0; i < n; i++) {

            if(array[i] == number) {
                count++;
            }
            
        }

    }
    
    return count;
}