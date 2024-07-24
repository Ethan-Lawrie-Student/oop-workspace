double array_mean(int array[], int n) {
    int sum;
    double mean;

    sum = 0;

    if(!(n<1)) {

        for (int i = 0; i < n; i++) {
            sum = sum + array[i];
        }

        mean = sum / n;

    } else {
        mean = 0.0;
    }

    return mean;
}