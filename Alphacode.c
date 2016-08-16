#include <cstdio>
#include <cstring>
char Input[5001] = "";
unsigned long long DP[5001];
int main()
{
 freopen ("Input.txt", "r", stdin);
 freopen ("Scratch.txt", "w", stdout);
 scanf ("%s", Input);
 while (strcmp(Input, "0"))
 {
  int Len = strlen (Input), Index = 1;
  memset (DP, 0, sizeof DP);
  DP[0] = 1;
  while (Index < Len)
  {
   int temp = 0;
   temp = (Input[Index-1]-'0') * 10;
   temp += (Input[Index] -'0');
   if (Input[Index]-'0') DP[Index] = DP[Index-1];
   if (temp <= 26 && temp > 9) DP[Index] += DP[Index-2 < 0?0:Index-2];
   //printf ("%d\t%llu\n",Index, DP[Index]);
   Index++;
  }
  //printf ("%llu\t%s\n", DP[Len-1], Input);
  printf ("%llu\n", DP[Len-1]);
  scanf ("%s", Input);
 }
}
