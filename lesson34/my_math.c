int square(int x)
{
    return x * x;
}

int factorial(int x)
{
    int y = x;
    while (--x)
    {
        y *= x;
    }
    return y;
}