int main()
{
    int sum = 0;
    int cfib = 0;
    int i = 1;
    int j = 1;

    while (cfib < 4000000) {
        cfib = i + j;
        i = j;
        j = cfib;
        if (cfib % 2 == 0) {
            sum += cfib;
        }
    }
    printf("%d", sum);
    return 0;
}
