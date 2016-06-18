#include <stdio.h>

int main()
{
    int height=8;
    
    printf("Hello, World!\n");
    for (int i=0;i<height;i++)
     {
      for (int j=0;j<=height;j++)
       printf("%c",(j<height-i-1)?' ':'#');
      printf("\n");
     }
    
    printf("Single loop\n");
    for (int i=0;i<height*(height+2);i++)
     {
       int  line = i/(height+2);
       // int  eol = (i+1)%(height+2);
       int  pos = i%(height+2);
       printf("%c", // " %c%d",
        (pos==height+1)?'\n':((pos<height-line-1)?' ':'#')
        // pos
        );
     }

    
    return 0;
}

