#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;time.h&gt;
/**
* main - program that generates random valid
* passwords for the program 101-crackme
*
* Return: Always 0 (Success)
*/
int main(void)
{
int pass[100];
int i, sum, n;

sum = 0;
srand(time(NULL));
for (i = 0; i &lt; 100; i++)
{
pass[i] = rand() % 78;
sum += (pass[i] + &#39;0&#39;);
putchar(pass[i] + &#39;0&#39;);
if ((2772 - sum) - &#39;0&#39; &lt; 78)
{
n = 2772 - sum - &#39;0&#39;;
sum += n;
putchar(n + &#39;0&#39;);
break;
}
}
return (0);
}
