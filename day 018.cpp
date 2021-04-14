#include<bits/stdc++.h>
using namespace std;


int main(){
    int noOfBoxes, noOfObstacles;
    cin>>noOfBoxes>>noOfObstacles;
    
    int queenPair[2];
    cin>>queenPair[0]>>queenPair[1];
    
    int obstacles[noOfObstacles][2];
    
    for(int i=0;i<noOfObstacles;i++){
        cin>>obstacles[i][0]>>obstacles[i][1];
    }

    int up,down,left,right,topRight,bottomRight,topLeft,bottomLeft;
    
    up=noOfBoxes-queenPair[0];
    down=queenPair[0]-1;
    left = queenPair[1]-1;
    right = noOfBoxes-queenPair[1];
    
    topRight=(up>=right?right:up);
    topLeft=(up>=left?left:up);
    bottomRight=(down>=right?right:down);
    bottomLeft=(down>=left?left:down);
    

    
    for(int i=0;i<noOfObstacles;i++){
        if(obstacles[i][0]==queenPair[0]){
            if(obstacles[i][1]>queenPair[1]){
                up=min(up,obstacles[i][1]-queenPair[1]-1);
            }
            else{
                down=min(down,queenPair[1]-obstacles[i][1]-1);
            }
        }
        else if(obstacles[i][1]==queenPair[1]){
            if(obstacles[i][0]>queenPair[0]){
                right=min(right,obstacles[i][0]-queenPair[0]-1);
            }
            else{
                left=min(left,queenPair[0]-obstacles[i][0]-1);
            }
        }
        else if(abs(obstacles[i][1]-queenPair[1])==abs(obstacles[i][0]-queenPair[0])){
            if(obstacles[i][1]>queenPair[1] && obstacles[i][0]>queenPair[0]){
                topRight=min(topRight,obstacles[i][1]-queenPair[1]-1);
            }
            else if(obstacles[i][1]>queenPair[1] && obstacles[i][0]<queenPair[0]){
                bottomRight=min(bottomRight,obstacles[i][1]-queenPair[1]-1);
            }
            else if(obstacles[i][1]<queenPair[1] && obstacles[i][0]>queenPair[0]){
                topLeft=min(topLeft,queenPair[1]-obstacles[i][0]-1);
            }
            else if(obstacles[i][1]<queenPair[1] && obstacles[i][0]<queenPair[0]){
                bottomLeft=min(bottomLeft,queenPair[1]-obstacles[i][0]-1);
            }
        }
    }
    
    int totalMoves=up+down+left+right+topRight+bottomRight+topLeft+bottomLeft;
    cout<<totalMoves;
    
    //cout<<"Up :"<<up<<endl;
    //cout<<"Down :"<<down<<endl;
    //cout<<"left :"<<left<<endl;
    //cout<<"right :"<<right<<endl;
    //cout<<"topRight :"<<topRight<<endl;
    //cout<<"topLeft :"<<topLeft<<endl;
    //cout<<"bottomRight:"<<bottomRight<<endl;
    //cout<<"bottomLeft :"<<bottomLeft<<endl;
    
}