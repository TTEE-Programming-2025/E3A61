#include <stdio.h> 
#include <stdlib.h>


// �M���ù�

void clearScreen() {

    system("CLS");

}

// ����w��e��

void showWelcomeScreen() 
{

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

    int correctPassword = 2024;

    printf("�п�J4��ƱK�X: ");
	 
    scanf("%d", &password);
    
    while (getchar() != '\n');



    if (password == correctPassword) 
	{

        printf("�K�X���T�A���߶i�J�t�ΡC\n");
        printf("�Ы�ENTER��i�J�U�@�B\n");
        getchar();
        
        clearScreen();  // �M���ù�

        return 1;

    } 
	else 
	{ 

        printf("\a�K�X���~�A�·Э��s��J�C\n");

        return 0;
   
    }

}
// �P�_�r������
void checkCharacterType() 
{
      char inputChar;
      printf("\n========== �D��� ==========\n");
      printf("1. 'A'....'Z':Uppercase\n");
      printf("2. 'a'....'z':Lowercase\n");
      printf("3. '0'....'9':Digit\n");
      printf("4. Otherwise:�B����\n");
      printf("�п�J�@�Ӧr��: ");
      fflush(stdin); // �M����J�w��
      scanf(" %c", &inputChar);

     if (inputChar >= 'A' && inputChar <= 'Z') 
	 {
      printf("Uppercase\n");
     } 
      else if (inputChar >= 'a' && inputChar <= 'z') 
	     {
           printf("Lowercase\n");
         } 
		 else if (inputChar >= '0' && inputChar <= '9') 
		 {
           printf("Digit\n");
         } 
		 else 
		 {
           printf("E3A61 �B����\n"); 
         }
}
int main() {


     
    showWelcomeScreen();
    
     // ���ϥΪ̿�J�K�X�A���쥿�T����

    while (!checkPassword());

     // �P�_�r������
    checkCharacterType();

    system("PAUSE");  // �Ȱ��ù�

    return 0;

}



