#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int MAXN = 1e6 + 5;
char A[MAXN], B[MAXN];
int pi[MAXN];

void prefix_function(char *s, int *pi)
{
    int n = strlen(s);
    pi[0] = pi[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int j = pi[i - 1];
        while (j && s[i - 1] != s[j])
            j = pi[j];
        if (s[i - 1] == s[j])
            j++;
        pi[i] = j;
    }
}

int kmp(char *t, char *p, int *pi)
{
    int n = strlen(t), m = strlen(p);
    prefix_function(p, pi);
    int j = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        while (j && t[i] != p[j])
            j = pi[j];
        if (t[i] == p[j])
            j++;
        if (j == m)
        {
            cnt++;
            j = pi[j];
        }
    }
    return cnt;
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int caseno = 1; caseno <= T; caseno++)
    {
        scanf("%s%s", A, B);
        int ans = kmp(A, B, pi);
        printf("Case %d: %d\n", caseno, ans);
    }
    return 0;
}
