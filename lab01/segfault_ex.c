int main()
{
    int a[20];

    // Problem: write ints out of the boundary of the array
    // for (int i = 0; ; i++) {
    //     a[i] = i;
    // }

    // Solution: add terminate condition
    for (int i = 0; i < 20; i++)
    {
        a[i] = i;
    }
}