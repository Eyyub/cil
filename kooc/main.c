#include <stdio.h>
/*
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
  }*/
/*
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
*/
/*int loool(int n) { return n; }
int Foo_bar(int a, int b, int c, const char *foo, int d) { return a; }
const char *Toz_baw(void) { return "foo"; }
int	main(void)
{
  int Ching_chong, Bli_par, Baw_toz;
    int n;
  callback_foo f = foo;
  f("lol", &n);
  [Ching.chong] = 3;
  [Bli.par] = loool([Foo bar :3 :8 :3+8 :[Toz baw] :[Baw.toz]]);
  return (0);
}*/
@module Foo
{
  char a = 'c';
  int foobar(char c, int a);
  int toz();
}

int __KOOC_3Foo_3toz4void() { return 0;}
int __KOOC_3Foo_6foobar3int4char3int(char c, int a) { return 0; }
/*
int a;
double a;*/
int main(void) { __KOOC_3Foo_3toz4void();printf("%c\n", __KOOC_3Foo_1a4char); __KOOC_3Foo_6foobar3int4char3int('l', 3);return (0);}

