// https://zerojudge.tw/ShowProblem?problemid=a867
// 2024/03/19
#include <iostream>
using namespace std;


int dy[8] = {0,0,1,-1,1,-1,1,-1};
int dx[8] = {1,-1,0,0,1,-1,-1,1};

// k, dx[k], dy[k]  -> k = 0
// offsetY = i + dy[k]
// offsetX = j + dx[k]
int main(){
    string n[20]; // 0 ... 19 // index
    int mp[25][50];
    // 初始化
    for(int i=0;i<15;i++){
        for(int j=0;j<30;j++){
            mp[i][j]=0;
        }
    }
    
    
    for(int i=0; i<15; i++){
        cin>> n[i];
    }
    
    for(int i=0;i<15;i++){
        for(int j=0;j<30;j++){
            if(n[i][j]=='*'){
                for(int index=0;index<8;index++) {
//                    原本的位置： (i, j)
//                    新的位置：(i + dy[index], j + dx[index])
                    int offsetY = i + dy[index], offsetX = j + dx[index];
                    // 判斷是否踩到炸彈
                    if(mp[offsetY][offsetX]=='*' ){
                        continue;
                    }
                    // 是否掉出邊界
                    if(offsetX<0 ||offsetY<0||offsetX>29||offsetY>29){
                        continue;
                    }
                    mp[offsetY][offsetX]++;
                }
            
            }
        }
    }
    
    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 30; j++) {
            if(mp[i][j]>0){
                cout << mp[i][j];
            }
            else {
                cout<< n[i][j];
            }
        }
        cout<<"\n";
    }
    
    
    
}

