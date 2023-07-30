#include &lt;stdio.h&gt;
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &amp;n;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf(&quot;a[2] = %d\n&quot;, a[2]);
return (0);
}
