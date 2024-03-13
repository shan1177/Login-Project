#include<iostream>
#include<string.h>
#include<conio.h>
#include<time.h>
using namespace std;
class login{
        string username;
        char password[];
        public:
            login(){
                string u;
                cout<<"________________________________________________________________________________________________________________________"<<endl;;
                cout<<"_____________________________________________________LOGIN TERMINAL_____________________________________________________";
                char p1[6],p2[6],ch;
                cout<<"\n\n Username: ";
                cout.flush();
                getline(cin,u);
                cout<<" Password(Six characters only): ";
                for(int i=0;i<6;i++){
                    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch>='0' && ch<='9' || ch=='#' ||ch=='@' ||ch!=13 || ch!=8||ch!=32){
                        ch=getch();
                        p1[i]=ch;
                        ch='*';
                        cout<<ch;
                    }
                }
                cout<<"\n Re-enter Password: ";
                for(int i=0;i<6;i++){
                    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch>='0' && ch<='9' || ch=='#' ||ch=='@' ||ch!=13 || ch!=8||ch!=32){
                        ch=getch();
                        p2[i]=ch;
                        ch='*';
                        cout<<ch;
                        }
                    }
                user(u);
                pass(p1,p2);
            }
            void user(string u){
                username==u;
                cout<<"\n  Your Username is: "<<u;
            }
            void pass(char p1[6],char p2[6]){
                password==p1;
                password==p2;
                cout<<"\n  Your Entered Password is: ";
                for(int i=0;i<6;i++)
                    cout<<p1[i];
                cout<<"\n  Your Re-entered Password is: ";
                for(int i=0;i<6;i++)
                    cout<<p2[i];
                int g=0;
                for(int i=0;i<6;i++){
                    if(p1[i]==p2[i])
                        g++;
                }
                if(g==6){
                    cout<<"\n Password is correct"<<endl;
                    Captcha();
                }
                else
                    cout<<"\n Password is incorrect\n Account locked"<<endl;
            }
            void Captcha(){
                cout<<" Enter the given Captcha: ";
                string cap[10]={"S12et","eR45w","Ddf5G","Sjd1e","hsJi0","BuCh3","Bfj48","B837f","CCn9r","VId48"};
                int index;
                srand(time(NULL));
                index=rand()%10;
                cout<<cap[index];
                string c;
                cout<<"\n Enter: ";
                cin>>c;
                int f=0;
                for(int i=0;i<10;i++){
                    if(cap[i]==c)
                        cout<<" Successfully logged in (:"<<endl;
                        f++;
                }
                if(f=1)
                    exit(0);
            }
};
int main(){
    login l;
    char ch;
    cout<<"\n Would you like to try again?[Y/n]";
    cin>>ch;
    while(1){
        if(ch=='Y'||ch=='y')
            login();
        else
            break;
    }
    return 0;
}
