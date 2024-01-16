#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};

void check (int i, int j, int a[][100], int b[][100], int &count2, int m, int n) {
    int count1 = 0;
    a[i][j] = 0;

    for (int k = 0 ; k < 4 ; k++) {
        int i1 = i + dx[k]; 
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= m && j1 >= 1 && j1 <= n && b[i1][j1] == 1) {
            count1++;
        }
    }

    
    count2 += (4 - count1);
     for (int k = 0 ; k < 4 ; k++) {
        int i1 = i + dx[k]; 
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= m && j1 >= 1 && j1 <= n && a[i1][j1] == 1) {
            check (i1, j1, a, b, count2, m, n);
        }
    }
}

int main() {
    int m, n;
        cout << "Nhap so phan tu hang cua mang : " << endl;
            cin >> m;
        cout << "Nhap so phan tu cot cua mang : " << endl;
            cin >> n;    
    int a[100][100] = {0};
    int b[100][100] = {0};
    int count2;
    for (int i = 1 ; i <= m ; i++) {
        for (int j = 1 ; j <= n ; j++) {
            cout << "Nhap phan tu hang " << i << " va cot " << j << " cua mang : " << endl;
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }  
    

    cout << "Mang ban vua nhap co dang : " << endl;
    for (int i = 1 ; i <= m ; i++) {
        for (int j = 1 ; j <= n ; j++) {
            cout << a[i][j] << "  " ;
        }
        cout << endl;
    } 

    for (int i = 1 ; i <= m ; i++) {
        for (int j = 1 ; j <= n ; j++) {
            if (a[i][j]) {
                count2 = 0;
                check (i, j, a, b, count2, m, n);
                cout << "Chu vi cua hinh la : " <<  count2 << endl;
            }
        }
    } 
     
return 0;    
}"# Ki-thuat-loang" 
