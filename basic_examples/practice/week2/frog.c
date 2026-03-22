// Bài 4. Frog
// Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau:
// bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên
// trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái,
// v.v. .Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị
// trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x − b.
// Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy
// Input
// 3 số trên cùng một dòng tương ứng a,b,k (1<=a,b,k<=10^9), tương ứng với khoảng
// cách nhảy sang phải, sang trái và số lượng bước nhảy.
// Output
// Vị trí của con ếch sau k bước nhảy.
#include <stdio.h>

int main (){
    int a,b,k;
    int vi_tri;
    if (scanf ("%d %d %d", &a ,&b ,&k)==3){
        if (k%2==0){
            vi_tri = (a-b)*(k/2);
        }
        else{
            vi_tri = (a-b)*((k-1)/2) + a;
        }
    printf ("%d", vi_tri);
    }
    return 0;
}