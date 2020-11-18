#include <stdio.h>
#include <stdlib.h>
void main(){
        char arr0[5];
        char arr1[] = {'P','C','E','L','A','V','a','M','c','B'};
        char arr2[] = {'P','C','E','L','A','V','a','M','c','B','D','p'};
        char arr3[] = {'C','E','V','A','M','c','D','p'};
        float  arr4[] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,0.1,0.01};
        float  arr5[] = {1,2,0.5,0.25,0.1,0.05,5,10};
        while(1){
            char arr0[7];
            int j=0;
            int k=0;
            int l=0;
            int m=0;
            int n=0;
            float o=0;
            float p=0;
            float q=0;
            printf("\n\nInput Characters: ");
            scanf("%s",arr0);
            while(arr0[j]!='\0'){
                j++;
            }
            printf("Input has %d Characters", j);
            if(j==4){
                while(l==0 && k<10){
                    if(arr0[l]==arr1[k]){
                        printf("\nBand %d: %d",l+1,k);
                        m=k;
                        l++;
                        k=0;
                    }else{
                        k++;
                    }
                }
                while(l==1 && k<10){
                    if(arr0[l]==arr1[k]){
                        printf("\nBand %d: %d",l+1,k);
                        n=k;
                        l++;
                        k=0;
                    }else{
                        k++;
                    }
                }
                while(l==2 && k<12){
                    if(arr0[l]==arr2[k]){
                        printf("\nBand %d: %1.2f",l+1,arr4[k]);
                        o=arr4[k];
                        l++;
                        k=0;
                    }else{
                        k++;
                    }
                    
                }
                while(l==3 && k<10){
                    if(arr0[l]==arr3[k]){
                        printf("\nBand %d: %1.2f",l+1,arr5[k]);
                        p=arr5[k];
                        l++;
                        k=0;
                    }else{
                        k++;
                    }
                    
                }
                q=(((m*10)+n)*o);
                printf("\nTOTAL: %1.2f Ohm  %c%1.2f%c ",q,241,p,37);
            }else{
                if(j==5){
                    
                }else{
                    if(j==6){
                        
                    }else{
                        printf("\nInput must have 4 or 5 or 6 characters\n");
                    }
                }
            }
        }
    }



