#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>

using namespace std;

char startMatrix[54];
char tempMatrix[54];
char workingMatrix[54];
char printingMatrix[108];
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

void print_cube(char matrix[]){

    // Initialize printingMatrix, 12x9 of ' '
    for(int i = 0; i < 108; i++){
        printingMatrix[i] = ' ';
    }

    // printingMatrix is a 12x9 of peices, or a 4x3 of 'faces' of the cube

    // Transfer matrix into printingMatrix
    int start = 0;
    int end = 9;

    // 4 faces in length
    for(int i = 0; i < 4; i++){
        
        // 3 faces in height
        for(int j = 0; j < 3; j++){
            
            // Leave these faces blank
            if(i == 0 && j == 0) continue;
            if(i == 2 && j == 0) continue;
            if(i == 3 && j == 0) continue;
            if(i == 0 && j == 2) continue;
            if(i == 2 && j == 2) continue;
            if(i == 3 && j == 2) continue;

            // 9 peices in a face
            for(int k = start; k < end; k++){

                int col = k%3;
                int row = floor((k - start)/3);

                printingMatrix[i*3 + j*3*12 + col + row*12] = matrix[k];
            }

            // Move begin and end points to the next face
            start += 9;
            end += 9;
        }
    }

    // Print out whole printingMatrix
    for(int i = 0; i < 108; i++){

        if(i != 0 && i % 12 == 0) cout << endl;
        cout << printingMatrix[i] << ' ';
    }

    cout << endl;
}

int main(int argc, const char* argv[]){

    // Top
    startMatrix[0] = 'b';
    startMatrix[1] = 'b';
    startMatrix[2] = 'b';
    startMatrix[3] = 'b';
    startMatrix[4] = 'b';    // Blue Center
    startMatrix[5] = 'b';
    startMatrix[6] = 'b';
    startMatrix[7] = 'b';
    startMatrix[8] = 'b';

    // Left
    startMatrix[9] = 'o';
    startMatrix[10] = 'o';
    startMatrix[11] = 'o';
    startMatrix[12] = 'o';
    startMatrix[13] = 'o';  // Orange Center
    startMatrix[14] = 'o';
    startMatrix[15] = 'o';
    startMatrix[16] = 'o';
    startMatrix[17] = 'o';

    // Front
    startMatrix[18] = 'w';
    startMatrix[19] = 'w';
    startMatrix[20] = 'w';
    startMatrix[21] = 'w';
    startMatrix[22] = 'w';  // White Center
    startMatrix[23] = 'w';
    startMatrix[24] = 'w';
    startMatrix[25] = 'w';
    startMatrix[26] = 'w';

    // Right
    startMatrix[27] = 'r';
    startMatrix[28] = 'r';
    startMatrix[29] = 'r';
    startMatrix[30] = 'r';
    startMatrix[31] = 'r';  // Orange Center
    startMatrix[32] = 'r';
    startMatrix[33] = 'r';
    startMatrix[34] = 'r';
    startMatrix[35] = 'r';

    // Back
    startMatrix[36] = 'y';
    startMatrix[37] = 'y';
    startMatrix[38] = 'y';
    startMatrix[39] = 'y';
    startMatrix[40] = 'y';  // Yellow Center
    startMatrix[41] = 'y';
    startMatrix[42] = 'y';
    startMatrix[43] = 'y';
    startMatrix[44] = 'y';

    // Bottom
    startMatrix[45] = 'g';
    startMatrix[46] = 'g';
    startMatrix[47] = 'g';
    startMatrix[48] = 'g';
    startMatrix[49] = 'g';  // Green Center
    startMatrix[50] = 'g';
    startMatrix[51] = 'g';
    startMatrix[52] = 'g';
    startMatrix[53] = 'g';
    
    print_cube(startMatrix);

    return 0;
}