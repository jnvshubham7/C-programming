
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};


double euclidean(struct point a[10],struct point b[10],int k){
    int p= (a[k].x-b[k].x)*(a[k].x-b[k].x) + (a[k].y-b[k].y)*(a[k].y-b[k].y);
    double v=sqrt(p);
    return v;
}

int manhattan(struct point a[10],struct point b[10],int k){
    int p= abs(a[k].x - b[k].x) + abs(a[k].y - b[k].y);
    return p;
}

int main() {
    
    struct point a[10],b[10];
    int i=1,k;
    while(i<11){
        printf("Enter x-coordinates of the points %d: ",i);
        scanf("%d %d",&a[i-1].x,&b[i-1].x);
        printf("Enter y-coordinates of the points %d: ",i);
        scanf("%d %d",&a[i-1].y,&b[i-1].y);
        i++;
    }
    
    printf("Enter the index of the points between which distance is to found:  ");
    scanf("%d",&k);
    
    printf("The euclidean dist. b/w the two points is %f.\n",euclidean(a,b,k));
    printf("The manhattan dist. b/w the two points is %d.\n",manhattan(a,b,k));
    
    
    return 0;
}