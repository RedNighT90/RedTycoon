#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>


using namespace std;
#include <string>
#include <windows.h>
#include <time.h>


int main()
{

    int A;//money
    int nb1;//menu
    int buy,upd;//menu buy update
    int mc1=0,mc2=0,mc3=0,mc4=0;//machines
    int Q=0;//total
    int Pa=0,Pb=0,Pc=0,Pd=0,W=1,Y=0;//money per machine/power
    int of,st,T;//utility var
    string N;//Tycoon name
    int g=0,h=0,j=0;//succes

//-----------------------/START/---------------------------//
    label88:
    A=5000;
    st=0;
    cout << "     Welcome to the RedNighT's First Game," << endl;
    _sleep(200);
    cout << "Choice Tycoon Name:" << endl;
    cin >> N;
    _sleep(200);
    cout << endl <<"Congratulation, your tycoon's name is:" << N << endl;
    _sleep(200);
    cout << endl <<"you have "<<A<<" RedCoins to start"<< endl;
    _sleep(200);
    cout << endl <<"now to start you need to buy a machine,"<< endl;
    _sleep(100);

    label3:
    if (st==1)
        {
        Y=W-1;
        cout << "you have "<<A<<" RedCoins"<< endl;
        cout << "machines: "<<mc1<<" Starter / "<<Y<<" Fusion Power"<<endl;
        cout << "          "<<mc2<<" Normal"<< endl;
        cout << "          "<<mc3<<" Pro"<< endl;
        cout << "          "<<mc4<<" Future"<< endl;
        cout << endl;
//----------------------------------------------------------
                    //save
    ofstream Save1;
    Save1.open("Save1.txt");

    Save1 << A <<endl;
    Save1 << mc1 <<endl;
    Save1 << mc2 <<endl;
    Save1 << mc3 <<endl;
    Save1 << mc4 <<endl;
    Save1 << Q <<endl;
    Save1 << Pa <<endl;
    Save1 << Pb <<endl;
    Save1 << Pc <<endl;
    Save1 << Pd <<endl;
    Save1 << W <<endl;
    Save1 << Y <<endl;
    Save1 << of <<endl;
    Save1 << st <<endl;
    Save1 << T <<endl;
    Save1 << N <<endl;
    Save1 << g <<endl;
    Save1 << h <<endl;
    Save1 << j;







//----------------------------------------------------------
        //succes
    if (A>1000)
        g=1;

    if (A>1000000)
        h=1;

    if (A>10000000)
        j=1;

    if (g==1)
        cout << "Success:"<<"-Get Started!-"<<endl;
    if (mc1>=1)
        cout << "        -First machine-"<<endl;
    if (h==1)
        cout << "        -Make you Rich!-"<<endl;
    if (mc4>=1)
        cout << "        -Road to the Future!-"<<endl;
    if (j==1)
        cout << "        -Stop Playing, this game is short :D-"<<endl;
        }
    cout<<endl;

//-------------------------------------------------------------
        //Menu

    cout << "1/to go in shop" << endl;
    _sleep(60);
    cout << "2/to Fusion" << endl;
    _sleep(60);
    cout << "3/to generate RedCoins" << endl;
    _sleep(60);
    cout << "4/to load Save" << endl;
    _sleep(60);
    cout << "5/to reset Save" << endl;
    _sleep(60);
    cout << "9/to exit" << endl;
    st=1;

    cin >> nb1;
    if (nb1==9)
        return 0;


//--------------------------------------------------
    //get in shop

    label12:
    if (nb1==1){
        of=1;
        label8:
        system("cls");
        cout << "9/to exit" <<endl;
        cout << endl <<"you have "<<A<<" RedCoins"<< endl;
        cout << "1/Starter machine,Make 1500 RedCoins/cost:  5000" <<endl;
        cout << "2/Normal machine,Make 5000 RedCoins /cost: 30000" <<endl;
        cout << "3/Pro machine,Make 10000 RedCoins   /cost:100000" <<endl;
        cout << "4/Future machine,Make 20000 RedCoins/cost:200000" <<endl;

//----------------------------------------------
    //shop navigation

    cin >> buy;
    if (buy==9) {
        system("cls");
        goto label3;
        }

    if (buy==1){
         if (A>4999){
            (mc1=mc1+1);
            A=(A-5000);
            }
         else {
            T=1;
            if (T==1){
                T=0;
                cout <<"Not enough RedCoins"<< endl;
                _sleep(700);
                }
         }
    }

    if (buy==2){
        if (A>29999){
           (mc2=mc2+1);
           A=(A-30000);
           }
        else {
           T=1;
           if (T==1){
                T=0;
                cout <<"Not enough RedCoins"<< endl;
                _sleep(700);
                }
         }
    }



    if (buy==3){
        if (A>99999){
           (mc3=mc3+1);
           A=(A-100000);
           }
        else {
           T=1;
           if (T==1){
                T=0;
                cout <<"Not enough RedCoins"<< endl;
                _sleep(700);
                }
        }
    }

    if (buy==4){
        if (A>199999){
           (mc4=mc4+1);
           A=(A-200000);
           }
        else {
        T=1;
        if (T==1){
                T=0;
                cout <<"Not enough RedCoins"<< endl;
                _sleep(700);
                }
        }
    }
    goto label12;
    }
    of=1;



//--------------------------------------------------
        //get in Upgrade

    label13:
    if (nb1==2){
        system("cls");
        cout << "9/to exit" <<endl;
        cout << endl <<"you have "<<A<<" RedCoins"<< endl;
        cout << "1/Fusion all Machines to get Fusion Power/Cost 300000 RedCoins" <<endl;
        cout << "  Need 5 Starter, 10 Normal, 10 Pro and 5 Future Machines to Fusion" <<endl;
//--------------------------------------------------
        //Upgrades navigation

        cin >> upd;
        if (upd==9) {
            system("cls");
            goto label3;
            }
        if ((upd==1) && (mc1>4) && (mc2>9) && (mc3>9) && (mc4>4) && (A>=300000)){
            W=(W+1);
            mc1=(mc1-mc1+1);
            mc2=(mc2-mc2);
            mc3=(mc3-mc3);
            mc4=(mc4-mc4);
            }
        else
            cout <<"Not enough RedCoins or Machines"<< endl;
            _sleep(800);
            goto label13;
        }
//--------------------------------------------------
        //Get Money

    if (nb1==3) {
         if (mc1>=1) {
         system("cls");
         Pa=(mc1*1500)*W;
         Pb=(mc2*5000)*W;
         Pc=(mc3*10000)*W;
         Pd=(mc4*50000)*W;
         Q=Pa+Pb+Pc+Pd;
         A=A+Q;
         cout<<"Generating RedCoins";
         _sleep(300);
         system("cls");
         cout<<"Generating RedCoins .";
         _sleep(300);
         system("cls");
         cout<<"Generating RedCoins . .";
         _sleep(300);
         system("cls");
         cout<<"Generating RedCoins . . .";
         _sleep(300);
         system("cls");

         cout<<"you got "<<Pa+Pb+Pc+Pd<<" RedCoins";
         _sleep(700);
         system("cls");
         goto label3;
         }
        }

    if (nb1==3) {
        if (mc1<=1) {
            system("cls");
            cout<<"you need a machine to get RedCoins";
            _sleep(900);
            system("cls");
            goto label3;
        }
    }
//----------------------------------------------------------
                //save
    if (nb1==4) {
        system("cls");
        ifstream Save1;
        Save1.open("Save1.txt");
        Save1 >> A;
        Save1 >> mc1;
        Save1 >> mc2;
        Save1 >> mc3;
        Save1 >> mc4;
        Save1 >> Q;
        Save1 >> Pa;
        Save1 >> Pb;
        Save1 >> Pc;
        Save1 >> Pd;
        Save1 >> W;
        Save1 >> Y;
        Save1 >> of;
        Save1 >> st;
        Save1 >> T;
        Save1 >> N;
        Save1 >> g;
        Save1 >> h;
        Save1 >> j;
        goto label3;
        }
    if (nb1==5){
        ofstream Save1;
        Save1.open("Save1.txt");
        Save1<<"";
        system("cls");
        goto label88;
        }
}

