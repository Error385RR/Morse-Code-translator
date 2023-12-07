#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define F 523
#define d 300
#define d1 500

int morse_ASCII();

int main(){
   
 morse_ASCII();

 getch();
    
return 0;
}



int morse_ASCII(){

    char input;

    FILE *ftranslator;
    ftranslator = fopen("translator.txt", "r");

    while (input != EOF)
    {

    input = fgetc(ftranslator);
  
    

    switch (input)
    {
     case 'a':
            printf("A: .-\n");
            Beep(F, d);
            Beep(F, d1);
            break;
        case 'b':
            printf("B: -... \n");
            Beep(F, d1);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            break;
        case 'c':
            printf("C: -.-. \n");
            Beep(F, d1);
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d);
            break;
        case 'd':
            printf("D: -.. \n");
            Beep(F, d1);
            Beep(F, d);
            Beep(F, d);
            break;
        case 'e':
            printf("E: . \n");
            Beep(F, d);
            break;
        case 'f':
            printf("F: ..-. \n");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d);
            break;
        case 'g':
            printf("G: --. \n");
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d);
            break;
        case 'h':
            printf("H: .... \n");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            break;
        case 'i':
            printf("I: .. \n");
            Beep(F, d);
            Beep(F, d);
            break;
        case 'j':
            printf("J: .--- \n");
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d1);
            break;
        case 'k':
            printf("K: -.- \n");
            Beep(F, d1);
            Beep(F, d);
            Beep(F, d1);
            break;
        case 'l':
            printf("L: .-.. \n");
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d);
            Beep(F, d);
            break;
        case 'm':
            printf("M: -- \n");
            Beep(F, d1);
            Beep(F, d1);
            break;
        case 'n':
            printf("N: -. \n");
            Beep(F, d1);
            Beep(F, d);
            break;
        case 'o':
            printf("O: --- \n");
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d1);
            break;
        case 'p':
            printf("P: .--. \n");
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d);
            break;
        case 'q':
            printf("Q: --.- \n");
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d);
            Beep(F, d1);
            break;
        case 'r':
            printf("R: .-. \n");
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d);
            break;
        case 's':
            printf("S: ... \n");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            break;
        case 't':
            printf("T: - \n");
            Beep(F, d1);
            break;
        case 'u':
            printf("U: ..- \n");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d1);
            break;
        case 'v':
            printf("V: ...- \n");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d1);
            break;
        case 'w':
            printf("W: .-- \n");
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d1);
            break;
        case 'x':
            printf("X: -..- \n");
            Beep(F, d1);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d1);
            break;
        case 'y':
            printf("Y: -.-- \n");
            Beep(F, d);
            break;
        case 'z':
            printf("Z: --.. \n");
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d);
            Beep(F, d);
            break;
        case ' ':
            printf(" \n");
            break;
        case '0':
            printf("0: -----");
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d1);
            break;
        case '1':
            printf("1: .----");
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d1);
            break;
        case '2':
            printf("1: ..---");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d1);
            Beep(F, d1);
            break;
        case '3':
            printf("3: ...--");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d1);
            Beep(F, d1);
            break;
        case '4':
            printf("4: ....-");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d1);
            break;
        case '5':
            printf("4: .....");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            break;
        case '6':
            printf("4: .....");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            break;
        case '7':
            printf("4: .....");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            break;
        case '8':
            printf("4: .....");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            break;
        case '9':
            printf("4: .....");
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            Beep(F, d);
            break;
        default:
            printf("Error_Unknown");
            
    }


    }
    
   
    fclose(ftranslator);

    return 0;
}