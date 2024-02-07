(2) (Old exam question, week 2) What is the time complexity (Big-O) of myMethod?
Argue for your answer:
int myMethod(int N)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < N; i++)
    {

    for (int j = 0; j < N; j++)
    {

    for (int k = 0; k < N * sqrt(N); k++)
    {
    x++;
    }
}

}
    for (int i = 0; i < N * N; i++)
    {
    y++;
    }
    
    return x + y;
}