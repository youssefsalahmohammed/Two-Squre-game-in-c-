//  youssef salah

//  29/7/2018 : started

//  1/8/2018 : finished


#include <iostream>
#include <string>
#include <vector>
#include <iomanip>



using namespace std;




int main()
{


    tryagain:

    // Declaration \\

    int player1_firstGame,player1_secondGame,player2_firstGame,player2_secondGame,length=16,sum=0,againOrNot;
    int arr[16]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    vector<int>vec;
    vector<int>vec2;




    while(length>4)
    {
        // player 1 game \\



        // player 1 : first game
        for(int i=0; i<16; i=i+4)
        {
            cout<<arr[i]<<setw(5)<<arr[i+1]<<setw(5)<<arr[i+2]<<setw(5)<<arr[i+3]<<endl;
            cout<<endl;
            cout<<endl;
        }
        cout<<"player1: chose your first number \n"<<endl;
        cin>>player1_firstGame;

        for(int i=0;i<vec.size();i++)
        {
            if(player1_firstGame==vec[i])
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player1_firstGame;
            }
        }

        arr[player1_firstGame-1]=0;
        vec.push_back(player1_firstGame);





         // player 1 : second game
        cout<<"player1: chose your second number \n"<<endl;
        cin>>player1_secondGame;

        while((player1_firstGame-player1_secondGame)!=4 && (player1_firstGame-player1_secondGame)!=-4 && (player1_firstGame-player1_secondGame)!=-1 && (player1_firstGame-player1_secondGame)!=1)
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player1_secondGame;
        }
        while(player1_firstGame+player1_secondGame==25 || player1_firstGame+player1_secondGame==17 || player1_firstGame+player1_secondGame==9 )
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player1_secondGame;
        }



        for(int i=0;i<vec.size();i++)
        {
            if(player1_secondGame==vec[i])
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player1_secondGame;
            }
        }
        arr[player1_secondGame-1]=0;
        vec.push_back(player1_secondGame);

        // end of player 1 game \\








        // player 2 game \\



        // player 2 : first game
        for(int i=0; i<16; i=i+4)
        {
            cout<<arr[i]<<setw(5)<<arr[i+1]<<setw(5)<<arr[i+2]<<setw(5)<<arr[i+3]<<endl;
            cout<<endl;
            cout<<endl;
        }
        cout<<"player2: chose your first number \n"<<endl;
        cin>>player2_firstGame;

        for(int i=0;i<vec.size();i++)
        {
            if(player2_firstGame==vec[i])
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player2_firstGame;
            }
        }
        arr[player2_firstGame-1]=0;
        vec.push_back(player1_firstGame);



        // player 2 : second game
        cout<<"player2: chose your second number \n"<<endl;
        cin>>player2_secondGame;

        while((player2_firstGame-player2_secondGame)!=4 && (player2_firstGame-player2_secondGame)!=-4 && (player2_firstGame-player2_secondGame)!=-1 && (player2_firstGame-player2_secondGame)!=1)
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player2_secondGame;
        }
        while(player2_firstGame+player2_secondGame==25 || player2_firstGame+player2_secondGame==17 || player2_firstGame+player2_secondGame==9 )
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player1_secondGame;
        }


        for(int i=0;i<vec.size();i++)
        {
            if(player2_secondGame==vec[i])
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player2_secondGame;
            }
        }

        arr[player2_secondGame-1]=0;
        vec.push_back(player1_secondGame);

        // end of player 2 game \\




        length=length-4;
    }




    // check winner \\

    for(int i=0;i<16;i++)
    {
        if(arr[i]!=0)
        {
            vec2.push_back(arr[i]);
        }
    }



    for(int i=0;i<4;i++)
    {
         for(int j=i;j<4;j++)
         {
             if((vec2[i]-vec2[j]==4 || vec2[i]-vec2[j]==-4 || vec2[i]-vec2[j]==-1 || vec2[i]-vec2[j]==1) && (vec2[i]+vec2[j]!=25 || vec2[i]+vec2[j]!=17 || vec2[i]+vec2[j]!=9) )
             {
                 sum++;
             }
         }
    }





    if(sum<=0)
    {
         // The Result \\

        for(int i=0; i<16; i=i+4)
        {
            cout<<arr[i]<<setw(5)<<arr[i+1]<<setw(5)<<arr[i+2]<<setw(5)<<arr[i+3]<<endl;
            cout<<endl;
            cout<<endl;
        }

        cout<<"player 2 is the winner \n \n";
        cout<<"Do you want to : \n 1)close game \n 2)play again \n ";
        cin>>againOrNot;
        if(againOrNot==1)
            return 0;
        if(againOrNot==2)
        {
            for(int i=0;i<16;i++)
            {
                arr[i]=i+1;
            }
            goto tryagain;
        }
    }
    if(sum==1)
    {
        // player 1 game \\



        // player 1 : first game
        for(int i=0; i<16; i=i+4)
        {
            cout<<arr[i]<<setw(5)<<arr[i+1]<<setw(5)<<arr[i+2]<<setw(5)<<arr[i+3]<<endl;
            cout<<endl;
            cout<<endl;
        }
        cout<<"player1: chose your first number \n"<<endl;
        cin>>player1_firstGame;

        for(int i=0;i<vec.size();i++)
        {
            if(player1_firstGame==vec[i])
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player1_firstGame;
            }
        }

        arr[player1_firstGame-1]=0;
        vec.push_back(player1_firstGame);





         // player 1 : second game
        cout<<"player1: chose your second number \n"<<endl;
        cin>>player1_secondGame;

        while((player1_firstGame-player1_secondGame)!=4 && (player1_firstGame-player1_secondGame)!=-4 && (player1_firstGame-player1_secondGame)!=-1 && (player1_firstGame-player1_secondGame)!=1)
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player1_secondGame;
        }
        while(player1_firstGame+player1_secondGame==25 || player1_firstGame+player1_secondGame==17 || player1_firstGame+player1_secondGame==9 )
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player1_secondGame;
        }



        for(int i=0;i<vec.size();i++)
        {
            if(player1_secondGame==vec[i] )
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player1_secondGame;
            }
        }
        arr[player1_secondGame-1]=0;
        vec.push_back(player1_secondGame);

        // end of player 1 game \\



        // The Result \\


        for(int i=0; i<16; i=i+4)
        {
            cout<<arr[i]<<setw(5)<<arr[i+1]<<setw(5)<<arr[i+2]<<setw(5)<<arr[i+3]<<endl;
            cout<<endl;
            cout<<endl;
        }
        cout<<"player 1 is the winner \n \n"<<endl;
        cout<<"Do you want to : \n 1)close game \n 2)play again \n "<<endl;
        cin>>againOrNot;
        if(againOrNot==1)
            return 0;
        if(againOrNot==2)
        {
            for(int i=0;i<16;i++)
            {
                arr[i]=i+1;
            }
            goto tryagain;
        }

    }
    if(sum>1)
    {
        // player 1 game \\



        // player 1 : first game
        for(int i=0; i<16; i=i+4)
        {
            cout<<arr[i]<<setw(5)<<arr[i+1]<<setw(5)<<arr[i+2]<<setw(5)<<arr[i+3]<<endl;
            cout<<endl;
            cout<<endl;
        }
        cout<<"player1: chose your first number \n"<<endl;
        cin>>player1_firstGame;

        for(int i=0;i<vec.size();i++)
        {
            if(player1_firstGame==vec[i])
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player1_firstGame;
            }
        }

        arr[player1_firstGame-1]=0;
        vec.push_back(player1_firstGame);





         // player 1 : second game
        cout<<"player1: chose your second number \n"<<endl;
        cin>>player1_secondGame;

        while((player1_firstGame-player1_secondGame)!=4 && (player1_firstGame-player1_secondGame)!=-4 && (player1_firstGame-player1_secondGame)!=-1 && (player1_firstGame-player1_secondGame)!=1)
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player1_secondGame;
        }
        while(player1_firstGame+player1_secondGame==25 || player1_firstGame+player1_secondGame==17 || player1_firstGame+player1_secondGame==9 )
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player1_secondGame;
        }



        for(int i=0;i<vec.size();i++)
        {
            if(player1_secondGame==vec[i] )
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player1_secondGame;
            }
        }
        arr[player1_secondGame-1]=0;
        vec.push_back(player1_secondGame);

        // end of player 1 game \\








        // player 2 game \\



        // player 2 : first game
        for(int i=0; i<16; i=i+4)
        {
            cout<<arr[i]<<setw(5)<<arr[i+1]<<setw(5)<<arr[i+2]<<setw(5)<<arr[i+3]<<endl;
            cout<<endl;
            cout<<endl;
        }
        cout<<"player2: chose your first number \n"<<endl;
        cin>>player2_firstGame;

        for(int i=0;i<vec.size();i++)
        {
            if(player2_firstGame==vec[i])
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player2_firstGame;
            }
        }
        arr[player2_firstGame-1]=0;
        vec.push_back(player1_firstGame);



        // player 2 : second game
        cout<<"player2: chose your second number \n"<<endl;
        cin>>player2_secondGame;

        while((player2_firstGame-player2_secondGame)!=4 && (player2_firstGame-player2_secondGame)!=-4 && (player2_firstGame-player2_secondGame)!=-1 && (player2_firstGame-player2_secondGame)!=1)
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player2_secondGame;
        }
        while(player2_firstGame+player2_secondGame==25 || player2_firstGame+player2_secondGame==17 || player2_firstGame+player2_secondGame==9 )
        {
            cout<<"please chose a right number \n"<<endl;
            cin>>player1_secondGame;
        }


        for(int i=0;i<vec.size();i++)
        {
            if(player2_secondGame==vec[i])
            {
                cout<<"please chose a right number \n"<<endl;
                cin>>player2_secondGame;
            }
        }

        arr[player2_secondGame-1]=0;
        vec.push_back(player1_secondGame);

        // end of player 2 game \\

        // The result \\


        for(int i=0; i<16; i=i+4)
        {
            cout<<arr[i]<<setw(5)<<arr[i+1]<<setw(5)<<arr[i+2]<<setw(5)<<arr[i+3]<<endl;
            cout<<endl;
            cout<<endl;
        }
        cout<<"It is a tie situation , There is no winner"<<endl;
        cout<<"Do you want to : \n 1)close game \n 2)play again \n "<<endl;
        cin>>againOrNot;
        if(againOrNot==1)
            return 0;
        if(againOrNot==2)
        {
            for(int i=0;i<16;i++)
            {
                arr[i]=i+1;
            }
            goto tryagain;
        }
    }

    // end of check winner \\


    //end of Game \\

}








