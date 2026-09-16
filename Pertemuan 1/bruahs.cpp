#include <iostream>
using namespace std;

int main(){
    system ("cls");
    int je = 0;
    int cih [2][2];

    for (int i=0; i<2; i++){
        cout<<"mahasiswa ke-"<<i+1<<" \n";
        for (int j=0; j < 2; j++){
            cin>>je;
            cih[i][j]=je;
        }
        cout<<endl;
    }
}