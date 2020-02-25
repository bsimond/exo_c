

#include<stdio.h>
#include <math.h>

int main(void){

int position_1x=30;
int position_1y=38;
int position_2x=45;
int position_2y=48;
double distance_y;
double distance_x;
double distance_tt;

distance_x = (position_1x - position_2x);
distance_x = distance_x * distance_x;

distance_y= position_1y - position_2y;
distance_y= distance_y * distance_y;

distance_tt=  sqrt(distance_x + distance_y);


printf("%.2f",distance_tt);

	return 0;

}
