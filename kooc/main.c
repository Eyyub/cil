//#include <stdio.h>
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
/*@module Foo
{
  char a = 'c';
  int foobar(char c, int a);
  int toz();
  typedef struct l {} L;
}

int __KOOC_3Foo_3toz4void() { return 0;}
int __KOOC_3Foo_6foobar3int4char3int(char c, int a) { return 0; }*/

/*
int a;
double a;*/
/* @module Bar { */
/*   int foo(char c, int a); */
/*   char foo(char c, int a); */
/*   int a = 3; */
/* } */
/* int main(void) {  */
/*   int k; */

/*   k = [Bar foo :'c' :9]; */
/*   [Foo toz]; */
/*   __KOOC_3Foo_3toz4void();printf("%c\n", __KOOC_3Foo_1a4char); __KOOC_3Foo_6foobar3int4char3int('l', 3); */
/* return (0);} */
/*struct bar { int x;};
struct foo { char y;};
char *toz(int n, char p) {
  return 0;
}
*/
@module A {
  int c(void);
  int c = 8;
}
@implementation A {
 // int c = 8;
  int lol(void)
  {
    return @!(int)[A lol];
  }
}
void toz(int n) {}
struct f {};
int __KOOC_1A_1b_3int = 3;
//extern int __KOOC_1A_1c_3int4void(void);
int __KOOC_1A_1b_3int4void(void) { return 3 ;}
int __KOOC_1A_1c_3int4void(void) { return 3 ;}
int main(void)
{
//  struct foo e;
//  struct bar k = 0.5;
  
//  @!(int)[A.b];
  
   toz(@!(int)[A.b]);
   toz(@!(int)[A b]);
   toz(@!(int)[A c]);
//  char *p = toz(1.7, k);
//  if(2 || k) {return 1;}
  return 0;
}
