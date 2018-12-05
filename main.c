#include <stdio.h>
#include <stdlib.h>
void  threegreylevels(int image[]);
void fourgreylevels(int image[], int numar);
void twogreylevels(int image[]);
int numar;
int main(){
    
    FILE *img1;
    img1 = fopen("/Users/kb00709/Desktop/Balloon.run", "r");
    int greylevelvalue;
    int image[1600];
    //int i;
    //int j;
  
    //int a;
    int x;
    if (img1 == NULL){
        printf("Error Reading File\n");
        exit (0);
    }
    
    for (x= 0; x < 1600; x++){
        fscanf(img1, "%d", &image[x] );
        if (image[x]==0 && image[x+1]==0){
            x=1600;
        }
        numar++;
    }
    greylevelvalue=image[2];
    
    
    if (greylevelvalue==3){
        
        threegreylevels(image);
    }
    
    if (greylevelvalue==2){
        
        twogreylevels(image);
    }
    
    
    if (greylevelvalue>3){
        
        fourgreylevels(image, numar);
        
    }
    return 0;
}
void twogreylevels(int image[]) {
    int a, j, count, i;
    count=0;
    for (i = 0; i < numar+1; i++){
        printf("%d", image[i]);
        
    }
    
    printf("\n");
    for (i = 3; i<numar+1; i+=2){
        
        
        
        if(image[i]==0){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf("#");
                count++;
                
            } }
        if(image[i]==1){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf("0");
                count++;
            } }
    }}



void threegreylevels(int image[]) {
    int a, j, count, i;
    count=0;
    for (i = 0; i < numar+1; i++){
        printf("%d", image[i]);
        
    }
    
    printf("\n");
    for (i = 3; i<numar+1; i+=2){
        
        
        
        if(image[i]==0){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf("#");
                count++;
                
            } }
        if(image[i]==1){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf(".");
                count++;
            } }
        if(image[i]==2){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf(" ");
                count++;
                
            }
            
            
        } }}

void fourgreylevels(int image[], int numar) {
    int a, j, count, i;
    count=0;
    for (i = 0; i < numar+1; i++){
        printf("%d", image[i]);
        
    }
    
    
    printf("\n");
    for (i = 3; i<numar+1; i+=2){
        
        
        
        if(image[i]==0){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf("#");
                count++;
                
            } }
        if(image[i]==1){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf(":");
                count++;
            } }
        if(image[i]==2){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf(".");
                count++;
                
            }
            
        }
        if(image[i]==3){
            a=image[i+1];
            for(j=1; j<a+1; j++){
                if(count==image[0]){
                    printf("\n");
                    count=0;}
                printf(" ");
                count++;
                
            }
            
        }
        
        
        
    } }


