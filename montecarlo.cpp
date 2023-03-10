include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<ctime>
 
#include<graphics.h>
using namespace std;
void generate_random_points(double &x,double &y){
    x= (double)rand()/RAND_MAX*2-1;
    y= (double) rand()/RAND_MAX *2-1;
 
}
 
int main(){
    int gd=DETECT,gm;
    int i,circlepoints=0,squarepoints=0,itetration;
    double x,y;
    cout<<"Enter number of itetration";
    cin>>itetration;
    initgraph(&gd,&gm,NULL);
    srand(time(0));
 
    circle(300,300,200);
    rectangle(100,100,500,500);
 
    for (i=0;i<itetration;i++){
        generate_random_points(x,y);
 
        if((x*x+y*y)<=1){
            circlepoints++;
            putpixel(300+x*200,300+y*200,GREEN);
 
        }
        else{
            putpixel(300+x*200,300+y*200,RED);
            
        }
        squarepoints++;
        
    }
    double pi_estimate = 4.0*circlepoints/squarepoints;
        cout<<"EStimated value of pie is = "<<pi_estimate<<endl;
 
    getch();
    closegraph();
return 0 ;
}
 
// /* to Run the graphics file , install graphics.h library and 
//  * run gcc -pi montecarlo.cpp -lstdc++ -lgraph 
//  * windows (pi.exe)
//  * unix (./pi.out)
//  * 
//  * /