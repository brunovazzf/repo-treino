float exponencial(float x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }

    return x * exponencial(x, n-1);
}