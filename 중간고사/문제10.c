for (int i = 0; i < 10; i += 2)
    printf(�� % d\n��, i);
/*����10-1
���: 2
        4
        6
        8
        */

int i = 0x10;
for (; i; i >>= 1)
printf(��hello��);
/*����10-2
��� : hellohellohellohellohello
*/

int x, y;
for (x = 0; x < 3; x++)
    for (y = 2; y >= 0; y--)
        printf(�� * ��);
/*����10-3
��� : *********
*/