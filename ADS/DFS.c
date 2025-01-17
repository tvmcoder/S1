#include<stdio.h>
void dfs(int n,int g[n][n],int v[],int source){
    printf("%d -> ",source);
    v[source]=1;
    for(int i=0;i<n;i++){
        //recursive function called when adajcent node is not already visited
        if(v[i]!=1 && g[source][i]!=0){
            dfs(n,g,v,i);
        }
    }
}
 int main(){
    int n,i,j,source;
    printf("\nEnter the size if node:");
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++){
        v[i]=0;
    }
    //adjacency matrix
    int g[n][n];
    for(i=0;i<n;i++){
        printf("\nNext row:");
        for(j=0;j<n;j++){
            printf("\nEnter the edges:");
            scanf("%d",&g[i][j]);
        }
    }
    printf("\nEnter the source:");
    scanf("%d",&source);
    if(source < 0 || source >n){
        printf("invalid source");
        return 0;
    }
    printf("DFS-> ");
    dfs(n,g,v,source);
    return 0;
 }