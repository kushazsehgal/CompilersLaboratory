int main() {
    int i, j, k;

    // for loop
    for(i = 0; i < j; i++) {
        for(j = 0; j < k && j < 5; ++j, ++k)
            k = j;
    }

    // while loop
    while(i < j || i < k) {
        j--;
    }

    while(true) {
        int j = 10125, k = 10125, t; // this will initialize the variables j & k of main ST to 10125
        return 0;                    // and make temporary variables t1 and t2 in the current ST
    }

    // do while loop
    do {
        i = k++;
        // nested while
        while(i < j)
            j--;
    }while(k <= 10);

    return 0;
}