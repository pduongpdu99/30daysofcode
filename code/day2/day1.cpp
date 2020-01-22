#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Khai báo 2 biến số nguyên:integer, thực:double và 1 biến chuỗi:string
    
    // Gán giá trị vào 3 biến đó.    
    // Hiển thị tổng 2 số nguyên (trên 1 dòng)    
    // Hiển thị tổng 2 số thực (trên 1 dòng)

    /*
    Print số nguyên
    Print số thực
    print chuỗi với biến "s" + biến chuỗi
    */

    int a;
    double b;
    string c;
    
    cin>>a>>b;
    cin.ignore();
    getline(cin,c);

    cout<<a+i<<endl;
    printf("%.1f\n",b+d);
    cout<<s<<c;

    return 0;
}