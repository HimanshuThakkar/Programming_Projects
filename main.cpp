#include <unistd.h>
#include "graphics.h"
#include <conio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<iostream>
#include<string>
#include<fstream>
#include<istream>
#include<sstream>
#include<stdlib.h>
#include<graphics.h>
#include<cmath>
#include<cstdlib>
#include<iomanip>
#include <time.h>
#include<Windows.h>
#include <stdio.h>

using namespace std;

class candle {
    
private:
    int r,h1;
    float a1,a2,v,e,D,p,cost;
    
public:
    //accessors
    void set_r(int m){
        r= m;
    }
    void set_h1(int n){
        h1 = n;
    }
    int get_r(){
        return r;
    }
    int get_h1(){
        return h1;
    }
    //constructor
    candle()
    {
        //cout<<"\nConstructor invoked"<<endl;
        a1=a2=v=e=D=p=0;
    }
    candle(int a, int b): r(a), h1(b){ }                     //constructor
    
    float curved_area(int r, int h1)
    {
        r=get_r();
        h1=get_h1();
        
        a1=3.14*r*h1*2;
        cout<<"\nCurved area : "<<a1<<" cm2";
        return a1;
        
    }
    
    float circular_area(int r)
    {
        r=get_r();
        a2=3.14*r*r;
        cout<<"\nCircular area : "<<a2<<" cm2";
        return a2;
    }
    
    float volume(int r,int h1)
    {
        v= 3.14*r*r*h1;
        cout<<"\nVolume of candle : "<<v<<" cm3";
        return v;
    }
    
    float Density(float w1,float v)
    {
        
        D=w1/v;
        cout<<"\nDensity of candle : "<<D<<" gram/cm3";
        return D;
    }
    
    float energy(float w1,float Temp)
    {
        
        e=w1/Temp;
        return e;
    }
    
    
    double power(double e,double tim)
    {
        p=e*tim;
        cout<<"\nPower : "<<p<<" W";
        return p;
    }
    
    float candle_cost(float cl,float cw)                    //cl-cost of labout,cw-cost of wax
    {
        cost=cl+cw;
        cout<<"\ncost of candle:"<<cost<<" $ \n";
        return cost;
    }
    
    void graphics_call()
    {
        //first candle
        initwindow(900,800,"My candle");
        //int gd = DETECT, gm;
        //initgraph(&gd, &gm, "");
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        rectangle(320,255,431,385);
        floodfill(400,300,BROWN);
        line(320,250,320,385);
        line(430,250,430,385);
        setcolor(BROWN);
        setfillstyle(CLOSE_DOT_FILL,BROWN);
        ellipse(375, 250, 360, 360, 55, 15);//top
        floodfill(375,250,BROWN);
        
        setcolor(BLACK);
        ellipse(385, 235, 90, 270, 10, 20);//for wick
        ellipse(375, 238, 80, 260, 10, 20);
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,LIGHTRED);
        ellipse(375, 168, 270, 270, 23, 65);//third layer fleme
        floodfill(375,168,BROWN);
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        ellipse(375, 180, 270, 270, 15, 55);//second layer flame
        floodfill(375,180,YELLOW);
        
        setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        ellipse(375, 210, 270, 270, 10, 25);//first layer flame
        floodfill(375,210,LIGHTCYAN);
        
        //second candle
        setcolor(CYAN);
        moveto(800,250);
        lineto(800,570);
        
        moveto(860,250);
        lineto(860,570);
        
        ellipse(830, 248, 0, 360, 30, 9); //top
        ellipse(830, 570, 180, 360, 30, 9);  // bottom
        ellipse(845, 235, 90, 270, 10, 20);//for wick
        ellipse(838, 238, 80, 260, 10, 20);
        delay(400);
        
        line(699,257,800,570);//first move
        line(757,252,860,570);
        ellipse(730,255,0,360,30,9);
        ellipse(745,242,90,270,10,20);//wick
        ellipse(738,245,80,260,10,20);
        
        delay(400);
        
        line(570,340,820,600);//second move
        line(611,298,875,590);
        arc(580,313,255,30,30);
        // ellipse(602,340,180,360,30,9);
        ellipse(830, 590, 230, 5, 50, 9);  // bottom
        ellipse(600,313,110,270,10,20);//wick
        ellipse(592,318,90,270,10,20);
        delay(400);
        
        for(int i=0;i<=200;i=i+10)
        {line(570-i,340-i,820-i,600-i);
            line(611-i,298-i,875-i,590-i);
            arc(580-i,313-i,255,30,30);
            //ellipse(602-i,340-i,180,360,30,9);
            ellipse(830-i, 590-i, 230, 5, 50, 9);//bottom
            ellipse(600-i,313-i,110,270,10,20);
            ellipse(592-i,318-i,90,270,10,20);
            delay(100);
            
            if( i == 200)
                break;
            
            delay(300);
            cleardevice();
            
            //first candle
            
            setcolor(BROWN);
            setfillstyle(SOLID_FILL,BROWN);
            rectangle(320,255,431,385);
            floodfill(400,300,BROWN);
            
            line(320,250,320,385);
            line(430,250,430,385);
            setcolor(BROWN);
            setfillstyle(CLOSE_DOT_FILL,BROWN);
            ellipse(375, 250, 360, 360, 55, 15);//top
            floodfill(375,250,BROWN);
            
            setcolor(BLACK);
            ellipse(385, 235, 90, 270, 10, 20);//for wick
            ellipse(375, 238, 80, 260, 10, 20);
            
            setcolor(BROWN);
            setfillstyle(SOLID_FILL,LIGHTRED);
            ellipse(375, 168, 270, 270, 23, 65);//third layer fleme
            floodfill(375,168,BROWN);
            
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);
            ellipse(375, 180, 270, 270, 15, 55);//second layer flame
            floodfill(375,180,YELLOW);
            
            
            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            ellipse(375, 210, 270, 270, 10, 25);//first layer flame
            floodfill(375,210,LIGHTCYAN);
        }
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,LIGHTRED);
        ellipse(390, 68, 270, 270, 23, 65);//third layer fleme
        floodfill(390,68,BROWN);
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        ellipse(390, 80, 270, 270, 15, 55);//second layer flame
        floodfill(390,80,YELLOW);
        setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        ellipse(390, 108, 270, 270, 10, 25);//first layer flame
        floodfill(390,108,LIGHTCYAN);
        
        for(int j=0; j<=200; j=j+10)
        {line(370+j,140+j,620+j,400+j);
            line(411+j,98+j,675+j,390+j);
            arc(380+j,113+j,255,30,30);
            //ellipse(402+j,140+j,180,360,30,9);
            ellipse(630+j, 390+j, 230, 5, 50, 9);//bottom
            ellipse(400+j,113+j,110,270,10,20);
            ellipse(392+j,118+j,90,270,10,20);
            setcolor(BROWN);
            setfillstyle(SOLID_FILL,LIGHTRED);
            ellipse(390+j, 68+j, 270, 270, 23, 65);//third layer fleme
            floodfill(390+j,68+j,BROWN);
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);
            ellipse(390+j, 80+j, 270, 270, 15, 55);//second layer flame
            floodfill(390+j,80+j,YELLOW);
            
            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            ellipse(390+j, 108+j, 270, 270, 10, 25);//first layer flame
            floodfill(390+j,108+j,LIGHTCYAN);
            delay(300);
            
            if( j == 200)
                break;
            cleardevice();
            
            //first candle
            setcolor(BROWN);
            setfillstyle(SOLID_FILL,BROWN);
            rectangle(320,255,431,385);
            floodfill(400,300,BROWN);
            line(320,250,320,385);
            line(430,250,430,385);
            setcolor(BROWN);
            setfillstyle(CLOSE_DOT_FILL,BROWN);
            ellipse(375, 250, 360, 360, 55, 15);//top
            floodfill(375,250,BROWN);
            
            setcolor(BLACK);
            ellipse(385, 235, 90, 270, 10, 20);//for wick
            ellipse(375, 238, 80, 260, 10, 20);
            
            setcolor(BROWN);
            setfillstyle(SOLID_FILL,LIGHTRED);
            ellipse(375, 168, 270, 270, 23, 65);//third layer fleme
            floodfill(375,168,BROWN);
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);
            ellipse(375, 180, 270, 270, 15, 55);//second layer flame
            floodfill(375,180,YELLOW);
            
            setcolor(LIGHTCYAN);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            ellipse(375, 210, 270, 270, 10, 25);//first layer flame
            floodfill(375,210,LIGHTCYAN);
        }
        delay(500);
        
        line(699,257,800,570);//first move
        line(757,252,860,570);
        ellipse(730,255,0,360,30,9);
        ellipse(745,242,90,270,10,20);//wick
        ellipse(738,245,80,260,10,20);
        
        
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,LIGHTRED);
        ellipse(729,168, 270, 270, 23, 65);//third layer fleme
        floodfill(729,168,BROWN);
        
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        ellipse(729, 180, 270, 270, 15, 55);//second layer flame
        floodfill(729,180,YELLOW);
        
        
        setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        ellipse(729, 210, 270, 270, 10, 25);//first layer flame
        floodfill(729,210,LIGHTCYAN);
        delay(500);
        
        cleardevice();
        
        //first candle
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        rectangle(320,255,431,385);
        floodfill(400,300,BROWN);
        
        line(320,250,320,385);
        line(430,250,430,385);
        setcolor(BROWN);
        setfillstyle(CLOSE_DOT_FILL,BROWN);
        ellipse(375, 250, 360, 360, 55, 15);//top
        floodfill(375,250,BROWN);
        
        setcolor(BLACK);
        ellipse(385, 235, 90, 270, 10, 20);//for wick
        ellipse(375, 238, 80, 260, 10, 20);
        
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,LIGHTRED);
        ellipse(375, 168, 270, 270, 23, 65);//third layer fleme
        floodfill(375,168,BROWN);
        
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        ellipse(375, 180, 270, 270, 15, 55);//second layer flame
        floodfill(375,180,YELLOW);
        
        setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        ellipse(375, 210, 270, 270, 10, 25);//first layer flame
        floodfill(375,210,LIGHTCYAN);
        delay(300);
        
        //second candle
        moveto(800,250);
        lineto(800,570);
        
        moveto(860,250);
        lineto(860,570);
        
        ellipse(830, 248, 0, 360, 30, 9); //top
        ellipse(830, 570, 180, 360, 30, 9);  // bottom
        ellipse(845, 235, 90, 270, 10, 20);//for wick
        ellipse(838, 238, 80, 260, 10, 20);
        
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,LIGHTRED);
        ellipse(830, 168, 270, 270, 23, 65);//third layer fleme
        floodfill(830,168,BROWN);
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        ellipse(830, 180, 270, 270, 15, 55);//second layer flame
        floodfill(830,180,YELLOW);
        setcolor(LIGHTCYAN);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        ellipse(830, 210, 270, 270, 10, 25);//first layer flame
        floodfill(830,210,LIGHTCYAN);
        
        getch();
        closegraph();
    }
    
    
    //destructor
    ~candle()
    {
        //cout<<"Destructor invoked"<<endl;
    }
    
};

int main()
{
    
    ofstream myfile;
    myfile.open("c:\\example.txt",sios::app);
   
    cout<<"\n Hello Welcome to My Candle project \n"<<endl;
    myfile<<"Writing this to a file.\n";
    int   r,h1;
    float h2, H,V,D;
    string z;
    float Br,tim,tem1,tem2,Temp,e,cl,cw,a1,a2,v,cost,w1,w2,w; double p;
    
    candle c1;                                                      //c1 is the object of class candle
    
    cout<<"Enter Radius of Candle (in cm) : ";
    cin>>r;
    cout<<"Enter Initial Height of Candle (in cm) : ";
    cin>>h1;
    cout<<"Enter Initial Weight of Candle (in gram) : ";
    cin>>w1;
    cout<<"Enter Initial Temperature of Candle (in celcius) : ";
    cin>>tem1;
    
    a1=c1.curved_area(r,h1);                                     //calling function curved_area with object c1
    myfile<<"Curved_area:"<<a1<<"\n";
    
    a2=c1.circular_area(r);                                     //calling function circular_area with object c1
    myfile<<"Circular_area:"<<a2<<"\n";
    
    v=c1.volume(r,h1);
    myfile<<"volume:"<<v<<"\n";
    D=c1.Density(w1,v);
    myfile<<"Density:"<<D<<"\n";
    
    
again:
    cout <<"\n\nEnter the method for life calculation of canlde life Weight or Height(w/h) : ";
    cin >>z;
    
    
    if (z =="W" || z=="w")
    {
        cout << "\nEnter the final weight of a candle (In grams) : ";
        cin>> w2;
        
        w=w1-w2;
        //cout <<"change in weight is "<<w<<"\n";
        
        cout << "\nEnter the final Temperature of a candle (in celcius) : ";
        cin>> tem2;
        
        Temp = tem2-tem1;
        //cout <<"change in temperature is "<<Temp<<"\n";
        
        
        
        cout<<"\nEnter the time duration (In hours) : ";
        cin>>tim;
        
        e=c1.energy(w1,Temp);         // storing the value of energy in a variable e since we will use it to calculate power
        cout<<"\nEnergy : "<<e<<" J";
        myfile<<"\n Energy:"<<e;
        p=c1.power(e,tim);                       //calling function power
        myfile<<"\n Power:"<<p<<"\n";
        Br = w/tim;
        myfile<<"\n Br:"<<Br<<"\n";
        
        
        
        
        cout <<"\nBurn rate of candle is  "<<Br<<" gram/hour \n";
        
        cout <<"\nTotal life cycle of this candle is : "<< w1/Br<<" hours \n";
        
        
    }
    else if (z =="H" || z=="h")
    {
        cout << "\nEnter the final Height of a candle (in cm) : ";
        cin >> h2;
        
        H = h1-h2;
        //cout <<"change in Height is "<<H<<"\n";
        
        V= 3.14*r*r*H;
        //cout <<"change in volume is "<<V<<"\n";
        
        w=D*V;
        cout <<"change in Weight is "<<w<<"\n";
        
        cout << "\nEnter the final Temperature of a candle (in celcius) : ";
        cin>> tem2;
        
        Temp = tem2-tem1;
        //cout <<"change in temperature is "<<Temp<<"\n";
        
        cout<<"\nEnter the time duration (In hours) : ";
        cin>>tim;
        
        
        e=c1.energy(w1,Temp);         // storing the value of energy in a variable e since we will use it to calculate power
        cout<<"\nEnergy : "<<e<<" J";
        myfile<<"\n Energy:"<<e;
        
        p=c1.power(e,tim);                       //calling function power
        myfile<<"\n Power:"<<p<<"\n";
        
        
        Br = w/tim;
        myfile<<"\n Br:"<<Br<<"\n";
        
        cout <<"\nBurn rate of candle is  "<<Br<<" gram/hour \n";
        
        cout <<"\nTotal life cycle of this candle is : "<< w1/Br<<" hours \n";
        
        
    }
    
    else
    {
        cout <<"Please make a proper selection\n";
        goto again;
        
    }
    
    cout<<"\nEnter the cost of labour : ";
    cin>>cl;
    cout<<"\nEnter the cost of wax : ";
    cin>>cw;
    cost=c1.candle_cost(cl,cw);
    myfile<<"\n candle_cost:"<<cost;
    
    cout<<"\n Bye..I will invoke the destructor now"<<endl;
    myfile.close();
    c1.graphics_call();
    
    getche();
    
    
}