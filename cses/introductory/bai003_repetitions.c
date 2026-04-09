/*
Thời gian: 1.00 giây
Giới hạn bộ nhớ: 512 MB

Bạn được cho một chuỗi DNA: một xâu ký tự bao gồm các ký tự A, C, G và T
Nhiệm vụ của bạn là tìm đoạn lặp dài nhất trong chuỗi
Đó là một xâu con có độ dài lớn nhất chỉ chứa một loại ký tự

Đầu vào:
Dòng nhập duy nhất chứa một xâu có n ký tự

Đầu ra:
In ra một số nguyên: độ dài của đoạn lặp dài nhất

Ràng buộc:
1 ≤ n ≤ 10^6

# Ví dụ

Đầu vào:
ATTCGGGA

Đầu ra:
3
*/

#include <stdio.h>
#include <string.h>
#define SIZE(a) (int) strlen(a)

int main() {
    int n = 1e6;
    char note[n];
    scanf("%s", note);

    int max = 1;
    int c = 1;

    for(int i = 1; i < SIZE(note); i++) {
        if(note[i] != note[i - 1]) {
            c = 1;
        }
        else {
            c++;

            if(max < c) {
                max = c;
            }
        }
    }

    printf("%d", max);
    return 0;
}
