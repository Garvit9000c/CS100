/*Read a Sentence from File.txt ,& state Weather its good or not?, "a good sentence must be palindrome & difference between total char and Upper case char>0  */
/*Task1 read file.txt store its input in string using (fgets function)*/  
/*Task2 check weather str is palindrom if yes store flag=1 else flag=2 (strrev funtion)*/
/*Task3 find x=(Number of upper case char)-(total char) , in str(isuppper funtion)*/
/*Task4 find mod(x), if its >0 and flag==true, print its a good sentence otherwise bad sentence(fabs function)*/
/*Code Below This*/
#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main()
{
    //Task1 --Garvit
    FILE *fp;
    char str[34];
    fp=fopen("file.txt","r");
    fgets(str,60,fp);
    fclose(fp);
    
    //Task2 --Dhruvi
    char temp[34];
    strcpy(temp,str); //temp=s
    int flag;
    strrev(str);
    if(strcmp(str, temp) == 0){
        flag=1;
    }
    else{
        flag=0;
    }
      
     
    // Task3 --Divesh
    int x,b=0 ;
    int i,a;
    a=sizeof(str);
    //a=total no. of char in string
    //b=total no. of upper char in string
    //x=diffrence of a and b in modulus
    for(i=0;i<=a;i++)
    {
        if(isupper(str[i]))
        b++;
    }
    x=a-b;
      
    //task4 --Dinesh 
    x=fabs(x);
    printf("\nx=%d flag=%d\n",x,flag);
    if(x>0 & flag==1)
    {
    printf("it's a good statement");
    }
    else{
    printf("it's a bad statement");
    }      
          
    return(0);
}



