#include <stdio.h>
int main()
{
    int n = 2;
    int a[2][2] = { {10,20}, {11,22} };
    int b[2][2] = { {2,1}, {3,2} };
    int c[2][2];
    ///Part 1 �|Ū a[i][j]�C���]�n,�N���ΦAŪ
    ///Part 2 �|Ū b[i][j]�C���]�n,�N���ΦAŪ
    int *p1, *p2, *p3;
    for(int i=0;i<n;i++){ ///Part3 �L���
        for(int j=0;j<n;j++){
            c[i][j] = 0;
            for(int k=0;k<n;k++){
                p1 = & a[i][k];///���F�b Tutor �q�b�Y
                p2 = & b[i][k];
                p3 = & c[i][k];
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%3d ",c[i][j]);
        }
        printf("\n");
    }
}
