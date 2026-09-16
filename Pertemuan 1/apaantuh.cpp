#include <iostream>
using namespace std;
int main(){
    system("cls");
    int var;
    // int meh[10];

    cout<<"Masukkan ukurannya bre : ";
    cin>>var;
    
    int* meh=new int[var];

    cout<<"Masukkan waipumu "<<var<<" waipu : \n";
    for (int i=0; i<var: i++){
        cin<<meh[i];
    }

    cout<<"isi array : ";
    for (int i=0; i < meh; i++){
        cout<<meh[i]<<" ";
    }

    return 0;
}