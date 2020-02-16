#include <stdio.h>
#include <stdlib.h>



typedef struct Point{
    int x;
    int y;
}Point;

typedef struct Triangle{
    Point a;
    Point b;
}Triangle;

int CheckingPoint(Point *tree,Triangle T,int K){
    for(int i=0;i<K;i++){
        if((tree[i].x>=T.a.x || tree[i].x>=T.b.x)&&(tree[i].y>T.a.y || tree[i].y>T.b.y))
            return 0;
    }
    return 1;
}

int main()
{
    FILE *in_file  = fopen("sample-A.1.in", "r");
    FILE *out_file = fopen("sample-A.1.out.in", "w");
    int K,M;
    Point *tree;
    Triangle *T;
    scanf("%d %d",&K,&M);
    tree=malloc(sizeof(Point)*K);
    T=malloc(sizeof(Triangle)*M);
    for(int i=0;i<K;i++){
        fscanf(file, "%d %d",&tree[i].x,&tree[i].y);
    }

    for(int j=0;j<M;j++){
        scanf("%d %d %d %d",&T[j].a.x,&T[j].a.y,&T[j].b.x,&T[j].b.y);
        fscanf(file, "%d %d %d %d",&T[j].a.x,&T[j].a.y,&T[j].b.x,&T[j].b.y);
    }
    for(int k=0; k<M;k++){
        if(CheckingPoint(tree,T[k],K)){
            printf("Y SI LAHSEN");
        }
        else{
            printf("N SI LAHSEN");
        }
    }
    return 0;
}
