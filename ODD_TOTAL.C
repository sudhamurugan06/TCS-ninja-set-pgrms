You are given an array A of N integers. Count the number of ways you can choose a pair (i, j), 1≤i<j≤N, i≠j, such that A_i + A_j is odd.

Input format:

The first line contains a single integer N.

The second line contains N integers representing the elements of A.

Output format:

Print the answer on the first line.

Example:

Input:

4

1 2 3 4

Output:

4
***********************************************************************************************************
// SPDX-License-Identifier: X11
// 2020-08-29
//Odd Sum (Easy)

#include <stdio.h>

int main() {
  int N;
  scanf("%d\n", &N);

  int a;
  int A[2] = {0, 0};
  for (int i=0;i< N;i++) {
    scanf("%d", &a);
    A[a & 1]++;
  }

  printf("%d\n", A[0] * A[1]);
}
