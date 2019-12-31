#include<stdio.h>
#include<string.h>
void search(char* pat, char* txt){
    int m = strlen(pat);
    int n = strlen(txt);
    // A loop to slide pat[] one by one .
    for (int i = 0; i < n - m; i++)
    {
        int j;
        for (j = 0; i < m; i++){
            if (txt[i + j] != pat[j])
                break;
        } 
        if (j == m){
           printf("%d, ", i);
        }        
    }   
}

// Driver progarm to test the program .
int main(){
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);
    return 0;
}