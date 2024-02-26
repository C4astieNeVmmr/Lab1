//#include <iostream>
#include <stdio.h>
#include <math.h>
//using namespace std;

double f(double x){
    return sin(x)/x;
}

int main(){
    double begin, end,x;
    int numberOfPoints;
    //cout << "enter begin and end of interval, and  number of points\n";
    printf("enter begin and end of interval, and number of points\n");
    //cin >> begin >> end >> numberOfPoints;
    scanf("%lf %lf %d",&begin,&end,&numberOfPoints);
    //cout << begin << "\t" << end << "\t" << numberOfPoints << endl;
    printf("%lf %lf %d",begin,end,numberOfPoints);
    double step = (end-begin)/numberOfPoints;
    for(int i=0;i<numberOfPoints;i++){
        //cout << "in point number " << i << "\tx = " << begin+step*i << "\tf(x) = " << f(begin+step*i) << endl;
        x = begin+step*i;
        printf("in point number %d\tx = %2f\tf(x) = %2f\n",i,x,f(x));
    }
    return 0;
}