//Code based with the help of the submition by fuwutu @Github
#include <vector>
#include <cstdio>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    FILE *input,*output;
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");
    if(input==NULL || output==NULL){
        cout << "File not loaded";
    }
    else{
        int n=0;
        fscanf(input,"%d",&n); //get n
        //int *ai = new int[(n*2)+1];
        vector<int> a_i[5001]; 
        for(int i = 1; i <= (n*2); i++){ //get 2n and set them in a vector of vectors
            int temp;
            //fscanf(input,"%d",&ai[i]);
            fscanf(input,"%d",&temp);
            a_i[temp].push_back(i); //each element to the array with the position
        }    
        bool pair = true;
        for(int i = 0; i < 5001; i++){
            if(a_i[i].size() % 2 != 0){
                pair = false;
                break;
            }
        }
        if(pair == false){fprintf(output,"%d",-1);}
        else{
            bool line = true;
            for(int i = 0; i < 5001; i++){
                int amount = a_i[i].size();
                for(int j = 2; j <= amount; j=j+2){
                    if(line){line=false;}
                    else{ fprintf(output,"\n");}
                    fprintf(output,"%d %d",a_i[i][j-2],a_i[i][j-1]);
                }
            }
        }
        //std::cout<<input->rdbuf();
        /*fprintf(output,"%d""\n",n);
        
        for(int i = 0; i < (n*2); i++){
            //fprintf(output,"%d"" ",ai[i]);
        }*/
    }
    fclose(input);
    fclose(output);
    return 0;
    
}