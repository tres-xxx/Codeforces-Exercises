//My solution was wrong--> This is kind of the solution posted by DionysiosB
#include <cstdio>

int main(){
    FILE *input, *output;
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");
    int n(0),m(0);//n=boys|m=girls
    fscanf(input, "%d %d", &n, &m);
    
    if(m>n){
        for(int i = 0,j=0; i<n || j <m; ){
            if(j<m){ fprintf(output,"%c",'G');j++;}
            if(i<n){ fprintf(output,"%c",'B');i++;}
        }
    }
    else{
        for(int i = 0,j=0; i<n || j <m; ){
            if(i<n){ fprintf(output,"%c",'B');i++;}
            if(j<m){ fprintf(output,"%c",'G');j++;}
        }    
    }
    
    fprintf(output, "\n"); // new line
    fclose(input);fclose(output);
    return 0;
}