# include <iostream>
# include <string>
using namespace std;



int main()
{
    string name1,name2;
    char sign1,sign2;
    int place1,place2,occur=0;
    int input_of_first_player[5],input_of_second_player[4];
    input_of_first_player[0]=0;
    input_of_first_player[1]=0;
    input_of_first_player[2]=0;
    input_of_first_player[3]=0;
    input_of_first_player[4]=0;

    input_of_second_player[0]=0;
    input_of_second_player[1]=0;
    input_of_second_player[2]=0;
    input_of_second_player[3]=0;

    cout<<"Enter the name of first player"<<endl;
    cin>>name1;


    cout<<"Enter the name of second player"<<endl;
    cin>>name2;


    cout<<name1<<" please select the character "<<endl;
    cin>>sign1;

  if(sign1=='x'||sign1=='X'||sign1=='0'||sign1=='o'||sign1=='O')
  cout<<endl;
  else
  goto stop;
  

    cout<<name2<<" please select the character "<<endl;
    cin>>sign2;

  if((sign2=='x'||sign2=='X'||sign2=='0'||sign2=='o'||sign2=='O')&&sign1!=sign2)
  cout<<endl;
  else
  goto stop;


     char position[3][3];
     position[0][0]='1';
     position[0][1]='2';
     position[0][2]='3';
     position[1][0]='4';
     position[1][1]='5';
     position[1][2]='6';
     position[2][0]='7';
     position[2][1]='8';
     position[2][2]='9';
    

 


    cout<<"               |            |"<<endl;
    cout<<"        ";cout<<position[0][0]<<"      |     ";cout<<position[0][1]<<"      |   ";cout<<position[0][2]<<"   "<<endl;
    cout<<"               |            |"<<endl;
    cout<<"   ____________|____________|____________"<<endl;
    cout<<"               |            |"<<endl;
    cout<<"        ";cout<<position[1][0]<<"      |     ";cout<<position[1][1]<<"      |   ";cout<<position[1][2]<<"   "<<endl;
    cout<<"               |            |"<<endl;
    cout<<"   ____________|____________|____________"<<endl;
    cout<<"               |            |"<<endl;
    cout<<"               |            |       "<<endl;
    cout<<"         ";cout<<position[2][0]<<"     |        ";cout<<position[2][1]<<"   |   ";cout<<position[2][2]<<"   "<<endl;
    cout<<"               |            |"<<endl;


for(int i=0;i<4;i++){
cout<<name1<<" your turn please select your position "<<endl;
cin>>place1;

input_of_first_player[i]=place1;

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if (input_of_first_player[i]==input_of_second_player[j]&&input_of_first_player[i]!=0){
            goto stop;  
            }
    }
    }

if (place1==1||place1==2||place1==3)
position[0][place1-1]=sign1;

else if (place1==4||place1==5||place1==6)
position[1][place1-4]=sign1;

else if (place1==7||place1==8||place1==9)
position[2][place1-7]=sign1;

else
goto stop;

    cout<<"               |            |"<<endl;
    cout<<"        ";cout<<position[0][0]<<"      |     ";cout<<position[0][1]<<"      |   ";cout<<position[0][2]<<"   "<<endl;
    cout<<"               |            |"<<endl;
    cout<<"   ____________|____________|____________"<<endl;
    cout<<"               |            |"<<endl;
    cout<<"        ";cout<<position[1][0]<<"      |     ";cout<<position[1][1]<<"      |   ";cout<<position[1][2]<<"   "<<endl;
    cout<<"               |            |"<<endl;
    cout<<"   ____________|____________|____________"<<endl;
    cout<<"               |            |"<<endl;
    cout<<"               |            |       "<<endl;
    cout<<"         ";cout<<position[2][0]<<"     |     ";cout<<position[2][1]<<"      |   ";cout<<position[2][2]<<"   "<<endl;
    cout<<"               |            | "<<endl;

   
    
 if((position[0][0]==sign1&&position[0][1]==sign1&&position[0][2]==sign1)||(position[1][0]==sign1&&position[1][1]==sign1&&position[1][2]==sign1)||(position[2][0]==sign1&&position[2][1]==sign1&&position[2][2]==sign1)||(position[0][0]==sign1&&position[1][0]==sign1&&position[2][0]==sign1)||(position[0][1]==sign1&&position[1][1]==sign1&&position[2][1]==sign1)||(position[0][2]==sign1&&position[1][2]==sign1&&position[2][2]==sign1)||(position[0][0]==sign1&&position[1][1]==sign1&&position[2][2]==sign1)||(position[2][0]==sign1&&position[1][1]==sign1&&position[0][2]==sign1)){
        cout<<name1<<" Win the match";
        occur++;
        break;
 }

cout<<name2<<" your turn please select your position "<<endl;
cin>>place2;

input_of_second_player[i]=place2;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
       if(input_of_first_player[i]==input_of_second_player[j]&&input_of_first_player[i]!=0){
            goto stop;  
       }
    }
    }

if (place2==1||place2==2||place2==3)
position[0][place2-1]=sign2;

else if (place2==4||place2==5||place2==6)
position[1][place2-4]=sign2;

else if (place2==7||place2==8||place2==9)
position[2][place2-7]=sign2;

else
goto stop;

    cout<<"               |            |"<<endl;
    cout<<"        ";cout<<position[0][0]<<"      |     ";cout<<position[0][1]<<"      |   ";cout<<position[0][2]<<"   "<<endl;
    cout<<"               |            |"<<endl;
    cout<<"   ____________|____________|____________"<<endl;
    cout<<"               |            |"<<endl;
    cout<<"        ";cout<<position[1][0]<<"      |     ";cout<<position[1][1]<<"      |   ";cout<<position[1][2]<<"   "<<endl;
    cout<<"               |            |"<<endl;
    cout<<"   ____________|____________|____________"<<endl;
    cout<<"               |            |"<<endl;
    cout<<"               |            |       "<<endl;
    cout<<"         ";cout<<position[2][0]<<"     |     ";cout<<position[2][1]<<"      |   ";cout<<position[2][2]<<"   "<<endl;
    cout<<"               |            | "<<endl;

   
    
 if((position[0][0]==sign2&&position[0][1]==sign2&&position[0][2]==sign2)||(position[1][0]==sign2&&position[1][1]==sign2&&position[1][2]==sign2)||(position[2][0]==sign2&&position[2][1]==sign2&&position[2][2]==sign2)||(position[0][0]==sign2&&position[1][0]==sign2&&position[2][0]==sign2)||(position[0][1]==sign2&&position[1][1]==sign2&&position[2][1]==sign2)||(position[0][2]==sign2&&position[1][2]==sign2&&position[2][2]==sign2)||(position[0][0]==sign2&&position[1][1]==sign2&&position[2][2]==sign2)||(position[2][0]==sign2&&position[1][1]==sign2&&position[0][2]==sign2)){
        cout<<name2<<" Win the match";
        occur++;
        break;
    }
 }

    if(occur==0)
    cout<<"match draw"<<endl;

stop:
cout<<"Invalid Input"<<endl;

return 0;
}