#include <iostream>
using namespace std;
void tree(int,int,char);
void trunk(int);
int main()
{
    int height,tri;
    char leaf,opt;
    do{
    cout << "Enter height of one triangle: ";
    cin >> height;
    cout << "Enter Number of triangles in your tree: ";
    cin >> tri;
    cout << "What character should make your tree? ";
    cin >> leaf;
    tree(height,tri,leaf);
    trunk(height);
    cout << "Wanna make another one? (y/n): ";
    cin >> opt;
    }while(opt=='y' || opt=='Y');
    system("pause");


    return 0;
}
void tree (int h,int t,char c)
{
    for(int i=0;i<t;i++){
        for(int j=1;j<=h;j++){
            for(int k=h-j;k>0;k--){
                cout << " ";
            }
            for(int l=1;l<=j;l++){
                cout << c;
            }
            for(int m=1;m<j;m++){
                cout << c;
            }
            for(int n=h-j;n>0;n--){
                cout << " ";
            }
            cout << '\n';
        }
    }
}
void trunk(int n)
{
    if(n>=1 && n<=3){
        for(int i=1;i<=3;i++){
            for(int j=1;j<n;j++){
                cout << " ";
            }
            cout << "|" << '\n';
        }
    }
    else{
        for(int i=1;i<=3;i++){
            for(int j=1;j<=n-2;j++){
              cout << " ";
            }
            cout << "|" << " " << "|" << '\n';
        }
    }
}