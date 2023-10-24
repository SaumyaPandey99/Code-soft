#include<iostream>
#include<cstdlib>
using namespace std;
    int main(){
    string name;
    char input;
    int score;
    int inputuser;
    cout<<"Enter your name";
    getline(cin,name);
    do{
        
        int variable=rand()%5+1;
        cout<<"enter any number in between range 1 to 5";
        cin>>inputuser;
        cout<<endl;
      if(inputuser==variable){
        cout<<"Congratulations ! you guessed the correct number"<<endl;
        score++;

      }
      else{
        cout<<"sorry, you guessed worng number try again"<<endl;
      }
      cout<<"would you like to try again Y/N"<<endl;
      cin>>input;
    
    }while(input!='N');
    cout <<"Game end"<<endl;
    cout<<score;
    }