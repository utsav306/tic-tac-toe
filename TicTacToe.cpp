#include <iostream>
using namespace std;
 char space[3][3] = {{'1','2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
 int row,col;
  char token='X';
  bool draw=false;
   string name1, name2;
  void input()
  {

   
   
   
    cout << "         |           |" << endl;
    cout << "         |           |" << endl;
     cout<< "    "<<space[0][0]<<"    |      "<<space[0][1]<<"    |      "<<space[0][2]<<endl;
    cout << "         |           |" << endl; 
    cout << "         |           |" << endl;
    cout << "_________|___________|_________" << endl;
    cout << "         |           |" << endl;
    cout << "         |           |" << endl;
   cout<< "    "<<space[1][0]<<"    |      "<<space[1][1]<<"    |      "<<space[1][2]<<endl;
    cout << "         |           |" << endl;
    cout << "         |           |" << endl;
    cout << "         |           |" << endl;
    cout << "_________|___________|__________" << endl;
    cout << "         |           |" << endl;
    cout << "         |           |" << endl;
    cout<< "    "<<space[2][0]<<"    |      "<<space[2][1]<<"    |      "<<space[2][2]<<endl;
    cout << "         |           |" << endl;
    cout << "         |           |" << endl;
}
void work()
{
 int digit;
 if(token=='X')
 {
    cout<<name1<<" please enter: "<<endl;
    cin>>digit;
 }
 else if(token=='O')
 {
    cout<<name2<<" please enter: "<<endl;
    cin>>digit;
 }
  if(digit==1)
 {
    row=0;
    col=0;
 } else if(digit==1)
 {
    row=0;
    col=0;
 } else if(digit==2)
 {
    row=0;
    col=1;
 } else if(digit==3)
 {
    row=0;
    col=2;
 } else if(digit==4)
 {
    row=1;
    col=0;
 } else if(digit==5)
 {
    row=1;
    col=1;
 } else if(digit==6)
 {
    row=1;
    col=2;
 } else if(digit==7)
 {
    row=2;
    col=0;
 }
  else if(digit==8)
 {
    row=2;
    col=1;
 } else if(digit==9)
 {
    row=2;
    col=2;
 }
 else if(digit<1 || digit>9)
 {
    cout<<"wrong input !!!";

 }
 if(token=='X' && space[row][col]!='X' && space[row][col]!='O')
 {
    space[row][col]='X';
    token='O';
 }
else if(token=='O' && space[row][col]!='X' && space[row][col]!='O')
 {
    space[row][col]='O';
    token='X';
 }
 else{
    cout<<"Invalid space choice !!!"<<endl;
    work();
 }
 input();
}
bool win()
{
 for(int i=0;i<3;i++)
 {
    if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
    {
        return true;
    }
 }
        if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[2][0]==space[1][1])
        {
            return true;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(space[i][j]!='X' ||  space[i][j]!='O')
                return false;
            }
        }
    draw=true;
    return false;
 }
 int main()
 {
     cout << "Enter first person name :" << endl;
    getline(cin, name1);
    cout << "Enter second person name :" << endl;
    getline(cin, name2);

    while(!win())
    {
        input();
        work();
        win();
    }
    if(token=='O' && draw==false)
    cout<<name1<<" Wins !!"<<endl;
    else
    if(token=='X' && draw==false)
    cout<<name2<<" Wins !!"<<endl;
    else
    cout<<"Its a Draw"<<endl;

 }
