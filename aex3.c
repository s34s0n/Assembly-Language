#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[] )
{
    
    int  rot_value ;

    if(getenv("rot_value")==NULL)
    {
        rot_value=13;
    }
    else
     {   rot_value = atoi(getenv("rot_value"));
    
    }

    char * string = argv[1];

    int n = 0, Swap = 0;

    int i;
    for(i=0; string[i] != '\0'; i++)
     {
          if(string[i] >='a' && string[i] <='z')
             {
 
                n = 'z' - string[i];
                if( rot_value > n )
                 {
                    Swap = rot_value - n - 1;
                    string[i] = 'a';
                    string[i] += Swap;
                 }
          else
             {

                string[i]+= rot_value;
             }
    }
           else if(string[i] >='A' && string[i] <='Z')
                        { 
                      n = 'Z' - string[i];

                      if( rot_value > n )
                       {
                          Swap = rot_value - n - 1;
                          string[i] = 'A';
                          string[i] += Swap;

                       }


                      
               else
                {string[i] += rot_value;}

}
               }
       

      int j;
      for(j = 0; string[j] !='\0'; j++)
        {
             printf("%c", string[j]);
        }

        printf("\n");

        return 0;
}
