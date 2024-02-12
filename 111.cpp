int linearSearch(int a[], int n, int x)                      //n - сколько чисел в строке, х - кого ищем
{
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == x)
            return i;
    }
    return -1;
}