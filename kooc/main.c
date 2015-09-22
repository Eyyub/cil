#include <stdio.h>

int k;
void	foo(char *a, int *b)
{
  if (k)
    {
      puts("");
      if (k-1)
	{
	  puts("");
	  return;
	}
    }
   else if(-k)
     {
       puts("");
       return;
     }
  puts("End");
}

@begin(foo)
{
  puts("Begin");
}

@end(foo)
{
  puts("Before before end");
  puts("Before end");
}

@callback(foo);

int	main(void)
{
  int n;
  callback_foo f = foo;
  f("lol", &n);
  return (0);
}
