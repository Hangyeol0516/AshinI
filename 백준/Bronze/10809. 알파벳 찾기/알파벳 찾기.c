#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>
#include <stdlib.h>

int main() {

    char arr[100] = { '0' };
    scanf("%s", arr);

    int a = -1, b = -1, c = -1, d = -1, e = -1, f = -1,
        g = -1, h = -1, i = -1, j = -1, k = -1, l = -1,
        m = -1, n = -1, o = -1, p = -1, q = -1, r = -1,
        s = -1, t = -1, u = -1, v = -1, w = -1, x = -1,
        y = -1, z = -1;

    //printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);

    for (int ii = 0; ii <= 100; ii++)
    {
        if (arr[ii] == 'a' && a == -1) a = ii;
        if (arr[ii] == 'b' && b == -1) b = ii;
        if (arr[ii] == 'c' && c == -1) c = ii;
        if (arr[ii] == 'd' && d == -1) d = ii;
        if (arr[ii] == 'e' && e == -1) e = ii;
        if (arr[ii] == 'f' && f == -1) f = ii;

        if (arr[ii] == 'g' && g == -1) g = ii;
        if (arr[ii] == 'h' && h == -1) h = ii;
        if (arr[ii] == 'i' && i == -1) i = ii;
        if (arr[ii] == 'j' && j == -1) j = ii;
        if (arr[ii] == 'k' && k == -1) k = ii;
        if (arr[ii] == 'l' && l == -1) l = ii;

        if (arr[ii] == 'm' && m == -1) m = ii;
        if (arr[ii] == 'n' && n == -1) n = ii;
        if (arr[ii] == 'o' && o == -1) o = ii;
        if (arr[ii] == 'p' && p == -1) p = ii;
        if (arr[ii] == 'q' && q == -1) q = ii;
        if (arr[ii] == 'r' && r == -1) r = ii;

        if (arr[ii] == 's' && s == -1) s = ii;
        if (arr[ii] == 't' && t == -1) t = ii;
        if (arr[ii] == 'u' && u == -1) u = ii;
        if (arr[ii] == 'v' && v == -1) v = ii;
        if (arr[ii] == 'w' && w == -1) w = ii;
        if (arr[ii] == 'x' && x == -1) x = ii;

        if (arr[ii] == 'y' && y == -1) y = ii;
        if (arr[ii] == 'z' && z == -1) z = ii;
    }

    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);

    return 0;
}