#include <iostream> 
#include <string.h> 
using namespace std; 
  
 
bool isInterleaved(char* A, char* B, char* C) 
{ 
    // Find lengths of the two strings 
    int M = strlen(A), N = strlen(B); 
  
  
    bool IL[M+1][N+1]; 
  
    memset(IL, 0, sizeof(IL)); // Initialize all values as false. 
  
    // C can be an interleaving of A and B only of sum 
    // of lengths of A & B is equal to length of C. 
    if ((M+N) != strlen(C)) 
       return false; 
  
    // Process all characters of A and B 
    for (int i=0; i<=M; ++i) 
    { 
        for (int j=0; j<=N; ++j) 
        { 
            // two empty strings have an empty string 
            // as interleaving 
            if (i==0 && j==0) 
                IL[i][j] = true; 
  
            // A is empty 
            else if (i==0 && B[j-1]==C[j-1]) 
                IL[i][j] = IL[i][j-1]; 
  
            // B is empty 
            else if (j==0 && A[i-1]==C[i-1]) 
                IL[i][j] = IL[i-1][j]; 
  
            // Current character of C matches with current character of A, 
            // but doesn't match with current character of B 
            else if(A[i-1]==C[i+j-1] && B[j-1]!=C[i+j-1]) 
                IL[i][j] = IL[i-1][j]; 
  
            // Current character of C matches with current character of B, 
            // but doesn't match with current character of A 
            else if (A[i-1]!=C[i+j-1] && B[j-1]==C[i+j-1]) 
                IL[i][j] = IL[i][j-1]; 
  
            // Current character of C matches with that of both A and B 
            else if (A[i-1]==C[i+j-1] && B[j-1]==C[i+j-1]) 
                IL[i][j]=(IL[i-1][j] || IL[i][j-1]) ; 
        } 
    } 
  
    return IL[M][N]; 
} 
  
// A function to run test cases 
void test(char *A, char *B, char *C) 
{ 
    if (isInterleaved(A, B, C)) 
        cout << C <<" is interleaved of " << A <<" and " << B << endl; 
    else
        cout << C <<" is not interleaved of " << A <<" and " << B << endl; 
} 
  
  
// Driver program to test above functions 
int main() 
{ 
    test("XXY", "XXZ", "XXZXXXY"); 
    test("XY" ,"WZ" ,"WZXY"); 
    test ("XY", "X", "XXY"); 
    test ("YX", "X", "XXY"); 
    test ("XXY", "XXZ", "XXXXZY"); 
    return 0; 
} 
