#include <stdio.h>
#include <limits.h>

void f1(void) {
  int a, b, sum = 0;
  scanf("%d", &a);

  if(a <= 0)
    return;
  int i;

  for (i = 0; i < a; i++) {
    scanf("%d", &b);
    sum += b;
  };

  printf("total is: %d\n", sum);
}


/*наим из нескольких целых чисел*/
void f2(void) {
  int a, b, min = INT_MAX;
  scanf("%d", &a);

  if(a <= 0)
    return;
  int i;

  for(i = 0; i < a; i++) {
    scanf("%d", &b);

    if(b < min)
      min = b;
  };

  printf("min el is: %d\n", min);
}


/*сумма и кол-во эл-в*/
void f3(void) {
  int sum = 0, a = 0, b;
  printf("you need to enter the sequence\n");

  while((scanf("%d", &b)) & (b != EOF)) {
    a++;
    sum += (int)b;
  }

  printf("amount of elements: %d\nsum is: %d\n", a, sum);
}


/*1-й эл-т > k*/
void f4(void) {
  int k, a, b = 1, c = -1;
  printf("enter k\n");
  scanf("%d", &k);
  printf("enter the sequence\n");

  while((scanf("%d", &a)) & (a != EOF)) {
    if((k < (int)a) & (c == -1))
      c = b;
    b++;
  }
  printf("the first el that > k is:  %d\n", c);
}


/*возрастает ли посл-ть*/
void f5(void) {
  int a, b = 1, f = INT_MIN;
  printf("enter the sequence\n");

  while((scanf("%d", &a)) & (a != EOF)) {
      if(f >= a)
        b = 0;
       f = a;
  }

  if(b == 1)
    printf("the increasing sequence\n");
}


void f6(void) {
  int a, b = 0, c = 1, l = INT_MIN;
  printf("enter the sequence\n");

  while((scanf("%d", &a)) & (a != EOF)) {

    if(l > a) {
      b++;
      printf("el number %d is less than his left\nnumber of elements in sequence is: %d\n", c, b);
    }

    c++;
    l = a;
  }
}


void f7(void) {
  int n, n1, f = 0, min = INT_MAX;
  printf("enter the sequence\n");

  while((scanf("%d", &n1)) & (n1 != EOF)) {
    if (n1 < min) {
      min = n1;
      n = f;
    }

    f++;
  }
  printf("there are %d elements before the first min el\n", n);
}


void f8(void) {
  int in, max = 0, f = 0;
  printf("enter the sequence\n");

  while((scanf("%d", &in)) & (in != EOF)) {

    if (in % 2 == 0) {
      f++;
    } else {

      if (max < f){
        max = f;
      }

      f = 0;
    }
  }
  printf("max number of consecutive even elements is: %d\n", max);
}


void f9(void) {
  int a, even = 0, odd = 0, l = INT_MIN;
  printf("enter the sequence\n");

  while((scanf("%d", &a)) & (a != EOF)) {

    if (a % 2 == 0){
      even++;

      if (l % 2 == 1 & l != INT_MIN) {
        printf("length of sequence(odd numbers): %d\n", odd);
        odd = 0;
      }
    } else {
      odd++;

      if (l % 2 == 0 & l != INT_MIN) {
        printf("length of sequence (even numbers): %d\n", even);
        even = 0;
      }
    }
    l = a;
  }
}


void f10(void) {
  int a, b, l = INT_MIN;
  printf("ente the sequence\n");

  while((scanf("%d", &a)) & (a != EOF)) {

    if (l > a) {
      b++;
    }
    l = a;
  }
  printf("number of increases: %d\n", b);
}


void f11(void) {
  int a, b, c = 0, max = 0, m = 0, s = INT_MIN, l = INT_MIN;
  printf("enter the sequence\n");

  while((scanf("%d", &a)) & (a != EOF)) {

    if (l == a) {
      if (s != a){
        b = s;
      }
      c++;
    } else {
      if (c + 1 > max) {
        max = c + 1;
        m = b;
      }
      c = 0;
    }
    s = l;
    l = a;

  }
  printf("length of sequence of equal elements: %d\nthe el before this sequence: %d\n", max, m);
}


int main(void) {
  f1();
  f2();
  f3();
  f4();
  f5();
  f6();
  f7();
  f8();
  f9();
  f10();
  f11();
  return 0;
}
