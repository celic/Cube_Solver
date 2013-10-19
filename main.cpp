#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char startMatrix[54];
char tempMatrix[54];
char workingMatrix[54];
int permutations = 0;
int temp;

bool arraysEqual(char i[54], char j[54]){
    temp = 0;
    for (int k = 0; k < 54; k++){
        if (i[k] != j[k]){
            temp++;
        }
    }
    if (temp == 0){
        return true;
    } else {
        return false;
    }
}

void R(){
    tempMatrix[0] = workingMatrix[0];
    tempMatrix[1] = workingMatrix[1];
    tempMatrix[2] = workingMatrix[34];
    tempMatrix[3] = workingMatrix[35];
    tempMatrix[4] = workingMatrix[36];
    tempMatrix[5] = workingMatrix[5];
    tempMatrix[6] = workingMatrix[6];
    tempMatrix[7] = workingMatrix[7];
    tempMatrix[8] = workingMatrix[14];
    tempMatrix[9] = workingMatrix[15];
    tempMatrix[10] = workingMatrix[8];
    tempMatrix[11] = workingMatrix[9];
    tempMatrix[12] = workingMatrix[10];
    tempMatrix[13] = workingMatrix[11];
    tempMatrix[14] = workingMatrix[12];
    tempMatrix[15] = workingMatrix[13];
    tempMatrix[16] = workingMatrix[44];
    tempMatrix[17] = workingMatrix[17];
    tempMatrix[18] = workingMatrix[18];
    tempMatrix[19] = workingMatrix[19];
    tempMatrix[20] = workingMatrix[20];
    tempMatrix[21] = workingMatrix[21];
    tempMatrix[22] = workingMatrix[42];
    tempMatrix[23] = workingMatrix[43];
    tempMatrix[24] = workingMatrix[24];
    tempMatrix[25] = workingMatrix[25];
    tempMatrix[26] = workingMatrix[26];
    tempMatrix[27] = workingMatrix[27];
    tempMatrix[28] = workingMatrix[28];
    tempMatrix[29] = workingMatrix[29];
    tempMatrix[30] = workingMatrix[30];
    tempMatrix[31] = workingMatrix[31];
    tempMatrix[32] = workingMatrix[32];
    tempMatrix[33] = workingMatrix[33];
    tempMatrix[34] = workingMatrix[22];
    tempMatrix[35] = workingMatrix[23];
    tempMatrix[36] = workingMatrix[16];
    tempMatrix[37] = workingMatrix[37];
    tempMatrix[38] = workingMatrix[38];
    tempMatrix[39] = workingMatrix[39];
    tempMatrix[40] = workingMatrix[40];
    tempMatrix[41] = workingMatrix[41];
    tempMatrix[42] = workingMatrix[2];
    tempMatrix[43] = workingMatrix[3];
    tempMatrix[44] = workingMatrix[4];
    tempMatrix[45] = workingMatrix[45];
    tempMatrix[46] = workingMatrix[46];
    tempMatrix[47] = workingMatrix[47];
    
    memcpy(workingMatrix, tempMatrix, sizeof(tempMatrix));
}

void U(){
    tempMatrix[0] = workingMatrix[8];
    tempMatrix[1] = workingMatrix[9];
    tempMatrix[2] = workingMatrix[10];
    tempMatrix[3] = workingMatrix[3];
    tempMatrix[4] = workingMatrix[4];
    tempMatrix[5] = workingMatrix[5];
    tempMatrix[6] = workingMatrix[6];
    tempMatrix[7] = workingMatrix[7];
    tempMatrix[8] = workingMatrix[16];
    tempMatrix[9] = workingMatrix[17];
    tempMatrix[10] = workingMatrix[18];
    tempMatrix[11] = workingMatrix[11];
    tempMatrix[12] = workingMatrix[12];
    tempMatrix[13] = workingMatrix[13];
    tempMatrix[14] = workingMatrix[14];
    tempMatrix[15] = workingMatrix[15];
    tempMatrix[16] = workingMatrix[24];
    tempMatrix[17] = workingMatrix[25];
    tempMatrix[18] = workingMatrix[26];
    tempMatrix[19] = workingMatrix[19];
    tempMatrix[20] = workingMatrix[20];
    tempMatrix[21] = workingMatrix[21];
    tempMatrix[22] = workingMatrix[22];
    tempMatrix[23] = workingMatrix[23];
    tempMatrix[24] = workingMatrix[0];
    tempMatrix[25] = workingMatrix[1];
    tempMatrix[26] = workingMatrix[2];
    tempMatrix[27] = workingMatrix[27];
    tempMatrix[28] = workingMatrix[28];
    tempMatrix[29] = workingMatrix[29];
    tempMatrix[30] = workingMatrix[30];
    tempMatrix[31] = workingMatrix[31];
    tempMatrix[32] = workingMatrix[32];
    tempMatrix[33] = workingMatrix[33];
    tempMatrix[34] = workingMatrix[34];
    tempMatrix[35] = workingMatrix[35];
    tempMatrix[36] = workingMatrix[36];
    tempMatrix[37] = workingMatrix[37];
    tempMatrix[38] = workingMatrix[38];
    tempMatrix[39] = workingMatrix[39];
    tempMatrix[40] = workingMatrix[46];
    tempMatrix[41] = workingMatrix[47];
    tempMatrix[42] = workingMatrix[40];
    tempMatrix[43] = workingMatrix[41];
    tempMatrix[44] = workingMatrix[42];
    tempMatrix[45] = workingMatrix[43];
    tempMatrix[46] = workingMatrix[44];
    tempMatrix[47] = workingMatrix[45];
    
    memcpy(workingMatrix, tempMatrix, sizeof(tempMatrix));
}

void F(){
    tempMatrix[0] = workingMatrix[6];
    tempMatrix[1] = workingMatrix[7];
    tempMatrix[2] = workingMatrix[0];
    tempMatrix[3] = workingMatrix[1];
    tempMatrix[4] = workingMatrix[2];
    tempMatrix[5] = workingMatrix[3];
    tempMatrix[6] = workingMatrix[4];
    tempMatrix[7] = workingMatrix[5];
    tempMatrix[8] = workingMatrix[46];
    tempMatrix[9] = workingMatrix[9];
    tempMatrix[10] = workingMatrix[10];
    tempMatrix[11] = workingMatrix[11];
    tempMatrix[12] = workingMatrix[12];
    tempMatrix[13] = workingMatrix[13];
    tempMatrix[14] = workingMatrix[44];
    tempMatrix[15] = workingMatrix[45];
    tempMatrix[16] = workingMatrix[16];
    tempMatrix[17] = workingMatrix[17];
    tempMatrix[18] = workingMatrix[18];
    tempMatrix[19] = workingMatrix[19];
    tempMatrix[20] = workingMatrix[20];
    tempMatrix[21] = workingMatrix[21];
    tempMatrix[22] = workingMatrix[22];
    tempMatrix[23] = workingMatrix[23];
    tempMatrix[24] = workingMatrix[24];
    tempMatrix[25] = workingMatrix[25];
    tempMatrix[26] = workingMatrix[32];
    tempMatrix[27] = workingMatrix[33];
    tempMatrix[28] = workingMatrix[34];
    tempMatrix[29] = workingMatrix[29];
    tempMatrix[30] = workingMatrix[30];
    tempMatrix[31] = workingMatrix[31];
    tempMatrix[32] = workingMatrix[14];
    tempMatrix[33] = workingMatrix[15];
    tempMatrix[34] = workingMatrix[8];
    tempMatrix[35] = workingMatrix[35];
    tempMatrix[36] = workingMatrix[36];
    tempMatrix[37] = workingMatrix[37];
    tempMatrix[38] = workingMatrix[38];
    tempMatrix[39] = workingMatrix[39];
    tempMatrix[40] = workingMatrix[40];
    tempMatrix[41] = workingMatrix[41];
    tempMatrix[42] = workingMatrix[42];
    tempMatrix[43] = workingMatrix[43];
    tempMatrix[44] = workingMatrix[26];
    tempMatrix[45] = workingMatrix[27];
    tempMatrix[46] = workingMatrix[28];
    tempMatrix[47] = workingMatrix[47];
    
    memcpy(workingMatrix, tempMatrix, sizeof(tempMatrix));
}

void L(){
    tempMatrix[0] = workingMatrix[40];
    tempMatrix[1] = workingMatrix[1];
    tempMatrix[2] = workingMatrix[2];
    tempMatrix[3] = workingMatrix[3];
    tempMatrix[4] = workingMatrix[4];
    tempMatrix[5] = workingMatrix[5];
    tempMatrix[6] = workingMatrix[46];
    tempMatrix[7] = workingMatrix[47];
    tempMatrix[8] = workingMatrix[8];
    tempMatrix[9] = workingMatrix[9];
    tempMatrix[10] = workingMatrix[10];
    tempMatrix[11] = workingMatrix[11];
    tempMatrix[12] = workingMatrix[12];
    tempMatrix[13] = workingMatrix[13];
    tempMatrix[14] = workingMatrix[14];
    tempMatrix[15] = workingMatrix[15];
    tempMatrix[16] = workingMatrix[16];
    tempMatrix[17] = workingMatrix[17];
    tempMatrix[18] = workingMatrix[38];
    tempMatrix[19] = workingMatrix[39];
    tempMatrix[20] = workingMatrix[32];
    tempMatrix[21] = workingMatrix[21];
    tempMatrix[22] = workingMatrix[22];
    tempMatrix[23] = workingMatrix[23];
    tempMatrix[24] = workingMatrix[30];
    tempMatrix[25] = workingMatrix[31];
    tempMatrix[26] = workingMatrix[24];
    tempMatrix[27] = workingMatrix[25];
    tempMatrix[28] = workingMatrix[26];
    tempMatrix[29] = workingMatrix[27];
    tempMatrix[30] = workingMatrix[28];
    tempMatrix[31] = workingMatrix[29];
    tempMatrix[32] = workingMatrix[0];
    tempMatrix[33] = workingMatrix[33];
    tempMatrix[34] = workingMatrix[34];
    tempMatrix[35] = workingMatrix[35];
    tempMatrix[36] = workingMatrix[36];
    tempMatrix[37] = workingMatrix[37];
    tempMatrix[38] = workingMatrix[6];
    tempMatrix[39] = workingMatrix[7];
    tempMatrix[40] = workingMatrix[20];
    tempMatrix[41] = workingMatrix[41];
    tempMatrix[42] = workingMatrix[42];
    tempMatrix[43] = workingMatrix[43];
    tempMatrix[44] = workingMatrix[44];
    tempMatrix[45] = workingMatrix[45];
    tempMatrix[46] = workingMatrix[18];
    tempMatrix[47] = workingMatrix[19];
    
    memcpy(workingMatrix, tempMatrix, sizeof(tempMatrix));
}

void B(){
    tempMatrix[0] = workingMatrix[0];
    tempMatrix[1] = workingMatrix[1];
    tempMatrix[2] = workingMatrix[2];
    tempMatrix[3] = workingMatrix[3];
    tempMatrix[4] = workingMatrix[4];
    tempMatrix[5] = workingMatrix[5];
    tempMatrix[6] = workingMatrix[6];
    tempMatrix[7] = workingMatrix[7];
    tempMatrix[8] = workingMatrix[8];
    tempMatrix[9] = workingMatrix[9];
    tempMatrix[10] = workingMatrix[36];
    tempMatrix[11] = workingMatrix[37];
    tempMatrix[12] = workingMatrix[38];
    tempMatrix[13] = workingMatrix[13];
    tempMatrix[14] = workingMatrix[14];
    tempMatrix[15] = workingMatrix[15];
    tempMatrix[16] = workingMatrix[22];
    tempMatrix[17] = workingMatrix[23];
    tempMatrix[18] = workingMatrix[16];
    tempMatrix[19] = workingMatrix[17];
    tempMatrix[20] = workingMatrix[18];
    tempMatrix[21] = workingMatrix[19];
    tempMatrix[22] = workingMatrix[20];
    tempMatrix[23] = workingMatrix[21];
    tempMatrix[24] = workingMatrix[42];
    tempMatrix[25] = workingMatrix[25];
    tempMatrix[26] = workingMatrix[26];
    tempMatrix[27] = workingMatrix[27];
    tempMatrix[28] = workingMatrix[28];
    tempMatrix[29] = workingMatrix[29];
    tempMatrix[30] = workingMatrix[40];
    tempMatrix[31] = workingMatrix[41];
    tempMatrix[32] = workingMatrix[32];
    tempMatrix[33] = workingMatrix[33];
    tempMatrix[34] = workingMatrix[34];
    tempMatrix[35] = workingMatrix[35];
    tempMatrix[36] = workingMatrix[30];
    tempMatrix[37] = workingMatrix[31];
    tempMatrix[38] = workingMatrix[24];
    tempMatrix[39] = workingMatrix[39];
    tempMatrix[40] = workingMatrix[10];
    tempMatrix[41] = workingMatrix[11];
    tempMatrix[42] = workingMatrix[12];
    tempMatrix[43] = workingMatrix[43];
    tempMatrix[44] = workingMatrix[44];
    tempMatrix[45] = workingMatrix[45];
    tempMatrix[46] = workingMatrix[46];
    tempMatrix[47] = workingMatrix[47];
    
    memcpy(workingMatrix, tempMatrix, sizeof(tempMatrix));
}

void D(){
    tempMatrix[0] = workingMatrix[0];
    tempMatrix[1] = workingMatrix[1];
    tempMatrix[2] = workingMatrix[2];
    tempMatrix[3] = workingMatrix[3];
    tempMatrix[4] = workingMatrix[28];
    tempMatrix[5] = workingMatrix[29];
    tempMatrix[6] = workingMatrix[30];
    tempMatrix[7] = workingMatrix[7];
    tempMatrix[8] = workingMatrix[8];
    tempMatrix[9] = workingMatrix[9];
    tempMatrix[10] = workingMatrix[10];
    tempMatrix[11] = workingMatrix[11];
    tempMatrix[12] = workingMatrix[4];
    tempMatrix[13] = workingMatrix[5];
    tempMatrix[14] = workingMatrix[6];
    tempMatrix[15] = workingMatrix[15];
    tempMatrix[16] = workingMatrix[16];
    tempMatrix[17] = workingMatrix[17];
    tempMatrix[18] = workingMatrix[18];
    tempMatrix[19] = workingMatrix[19];
    tempMatrix[20] = workingMatrix[12];
    tempMatrix[21] = workingMatrix[13];
    tempMatrix[22] = workingMatrix[14];
    tempMatrix[23] = workingMatrix[23];
    tempMatrix[24] = workingMatrix[24];
    tempMatrix[25] = workingMatrix[25];
    tempMatrix[26] = workingMatrix[26];
    tempMatrix[27] = workingMatrix[27];
    tempMatrix[28] = workingMatrix[20];
    tempMatrix[29] = workingMatrix[21];
    tempMatrix[30] = workingMatrix[22];
    tempMatrix[31] = workingMatrix[31];
    tempMatrix[32] = workingMatrix[38];
    tempMatrix[33] = workingMatrix[39];
    tempMatrix[34] = workingMatrix[32];
    tempMatrix[35] = workingMatrix[33];
    tempMatrix[36] = workingMatrix[34];
    tempMatrix[37] = workingMatrix[35];
    tempMatrix[38] = workingMatrix[36];
    tempMatrix[39] = workingMatrix[37];
    tempMatrix[40] = workingMatrix[40];
    tempMatrix[41] = workingMatrix[41];
    tempMatrix[42] = workingMatrix[42];
    tempMatrix[43] = workingMatrix[43];
    tempMatrix[44] = workingMatrix[44];
    tempMatrix[45] = workingMatrix[45];
    tempMatrix[46] = workingMatrix[46];
    tempMatrix[47] = workingMatrix[47];
    
    memcpy(workingMatrix, tempMatrix, sizeof(tempMatrix));
}

void Ri(){
    R();
    R();
    R();
}

void Ui(){
    U();
    U();
    U();
}

void Fi(){
    F();
    F();
    F();
}

void Li(){
    L();
    L();
    L();
}

void Bi(){
    B();
    B();
    B();
}

void Di(){
    D();
    D();
    D();
}

void print_cube(char workingMatrix[48]){

    int start_index = 0;
    int end_index = 8;

    cout << endl;

    // Print top
    for(int i = 0; i < 9; i++){

        // A line break for rows of 3
        if(i > 0 && i % 3 == 0) cout << endl;
        
        cout << workingMatrix[i] << " ";
    }
    cout << endl;

    // Print left
    for(int i = 9; i < 18; i++){

        // A line break for rows of 3
        if(i > 0 && i % 3 == 0) cout << endl;
        
        cout << workingMatrix[i] << " ";
    }
    cout << endl;

    // Print front
    for(int i = 18; i < 27; i++){

        // A line break for rows of 3
        if(i > 0 && i % 3 == 0) cout << endl;
        
        cout << workingMatrix[i] << " ";
    }
    cout << endl;

    // Print right
    for(int i = 27; i < 36; i++){

        // A line break for rows of 3
        if(i > 0 && i % 3 == 0) cout << endl;
        
        cout << workingMatrix[i] << " ";
    }
    cout << endl;

    // Print back
    for(int i = 36; i < 45; i++){

        // A line break for rows of 3
        if(i > 0 && i % 3 == 0) cout << endl;
        
        cout << workingMatrix[i] << " ";
    }
    cout << endl;

    // Print bottom
    for(int i = 45; i < 54; i++){

        // A line break for rows of 3
        if(i > 0 && i % 3 == 0) cout << endl;
        
        cout << workingMatrix[i] << " ";
    }
    cout << endl;
}

int main(int argc, const char* argv[]){

    startMatrix[0] = 'w';
    startMatrix[1] = 'w';
    startMatrix[2] = 'w';
    startMatrix[3] = 'w';
    startMatrix[4] = 'w';    // White Center
    startMatrix[5] = 'w';
    startMatrix[6] = 'w';
    startMatrix[7] = 'w';
    startMatrix[8] = 'w';

    startMatrix[9] = 'r';
    startMatrix[10] = 'r';
    startMatrix[11] = 'r';
    startMatrix[12] = 'r';
    startMatrix[13] = 'r';  // Red Center
    startMatrix[14] = 'r';
    startMatrix[15] = 'r';
    startMatrix[16] = 'r';
    startMatrix[17] = 'r';

    startMatrix[18] = 'y';
    startMatrix[19] = 'y';
    startMatrix[20] = 'y';
    startMatrix[21] = 'y';
    startMatrix[22] = 'y';  // Yellow Center
    startMatrix[23] = 'y';
    startMatrix[24] = 'y';
    startMatrix[25] = 'y';
    startMatrix[26] = 'y';

    startMatrix[27] = 'o';
    startMatrix[28] = 'o';
    startMatrix[29] = 'o';
    startMatrix[30] = 'o';
    startMatrix[31] = 'o';  // Orange Center
    startMatrix[32] = 'o';
    startMatrix[33] = 'o';
    startMatrix[34] = 'o';
    startMatrix[35] = 'o';

    startMatrix[36] = 'g';
    startMatrix[37] = 'g';
    startMatrix[38] = 'g';
    startMatrix[39] = 'g';
    startMatrix[40] = 'g';  // Green Center
    startMatrix[41] = 'g';
    startMatrix[42] = 'g';
    startMatrix[43] = 'g';
    startMatrix[44] = 'g';

    startMatrix[45] = 'b';
    startMatrix[46] = 'b';
    startMatrix[47] = 'b';
    startMatrix[48] = 'b';
    startMatrix[49] = 'b';  // Blue Center
    startMatrix[50] = 'b';
    startMatrix[51] = 'b';
    startMatrix[52] = 'b';
    startMatrix[53] = 'b';
    
    memcpy(workingMatrix, startMatrix, sizeof(startMatrix));

    print_cube(workingMatrix);

    return 0;
}