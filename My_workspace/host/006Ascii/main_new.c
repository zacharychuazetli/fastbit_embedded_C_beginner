
#include<stdio.h>

int main(void)
{

    char c1,c2,c3,c4,c5,c6;
    printf("Enter any 6 characters of your choice \n");
    fflush(stdout);

    c1 = getchar();
    getchar(); 		//this getchar is used to clear the special character, whether be it \n or ' ' due to space or tab
    c2 = getchar();
    getchar();		//this getchar is used to clear the special character
    c3 = getchar();
    getchar();		//this getchar is used to clear the special character
    c4 = getchar();
    getchar();		//this getchar is used to clear the special character
    c5 = getchar();
    getchar();		//this getchar is used to clear the special character
    c6 = getchar();

    printf("\nASCII codes : %u,%u,%u,%u,%u,%u",c1,c2,c3,c4,c5,c6);
    fflush(stdout);

	printf("\nPress enter key to exit the application \n");
	fflush(stdout);
    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();


}
