int main(void)
{
for (int i = 0; i <= 99; i++)
{
for (int j = i; j <= 99; j++)
{
if (i != j)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
