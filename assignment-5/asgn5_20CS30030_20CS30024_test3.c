int main() {
    int i, j, k, l;
    if(i < j && k > l) {
        l = k;
        j = i;
        if(i <= l || j >= k)
            j = k;
        else if(i == j && k != l)
            i = l;
        else if(true || false)
            i = k;
        else i = j;
    }

    return 0;
}