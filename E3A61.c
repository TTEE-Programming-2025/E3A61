#include <stdio.h> 
#include <stdlib.h>


// �M���ù�

void clearScreen() {

    system("CLS");

}

// ����w��e��

void showWelcomeScreen() {

    printf("**************************************\n");
    printf("*                  *                 *\n");
    printf("*  .           +   *         +       *\n");
    printf("*       +         ***   .        .   *\n");
    printf("*    .            ***                *\n");
    printf("*          .      ***                *\n");
    printf("*             +  *****      +        *\n");
    printf("*       .        *****               *\n");
    printf("*               *******              *\n");
    printf("*    +          *******         +    *\n");
    printf("*           .   *******     +        *\n");
    printf("*         +     *******          +   *\n");
    printf("*    .          *******      .       *\n");
    printf("*               *******              *\n");
    printf("*               *******              *\n");
    printf("*           *   *******   *    +     *\n");
    printf("*  .       ***  *******  ***      .  *\n");
    printf("*         ***** ******* *****        *\n");
    printf("*         ***** ******* *****    +   *\n");
    printf("*      .  ***** ******* *****        *\n");
    printf("*         ***** ******* *****        *\n");
    printf("*         ***** ******* *****   .    *\n");
    printf("*   +     ***** ******* *****        *\n");
    printf("*       * ***** ******* ***** *      *\n");
    printf("*      ** ***** ******* ***** **     *\n");
    printf("*     *** ***** ******* ***** ***    *\n");
    printf("*               * * * *              *\n");
    printf("*               * * * *              *\n");
    printf("*          Designed by �B����        *\n");

    printf("**************************************\n");
    printf("�Ы�ENTER��i�J�U�@�B\n");
 
    getchar();
    
    clearScreen();  // �M���ù�

}

// ��J�K�X

int checkPassword() 
{ 

    int password;

    int correctPassword = 8780;

    printf("�п�J4��ƱK�X: ");
	 
    scanf("%d", &password);
    
    while (getchar() != '\n');



    if (password == correctPassword) 
	{

        printf("�K�X���T�A���߶i�J�t�ΡC\n");

        return 1;

    } 
	else 
	{ 

        printf("\a�K�X���~�A�·Э��s��J�C\n");

        return 0;

    }

}
int main() {


     
    showWelcomeScreen();
    
     // ���ϥΪ̿�J�K�X�A���쥿�T����

    while (!checkPassword());



    system("PAUSE");  // �Ȱ��ù�

    return 0;

}



