/*Read a Sentence from File.txt ,& state Weather its good or not?, "a good sentence must be palindrome & difference between total char and Upper case char>0  */
/*Task1 read file.txt store its input in string using (fgets function)*/  
/*Task2 check weather str is palindrom if yes store flag=1 else flag=2 (strrev funtion)*/
/*Task3 find x=(Number of upper case char)-(total char) , in str(isuppper funtion)*/
/*Task4 find mod(x), if its >0 and flag==true, print its a good sentence otherwise bad sentence(fabs function)*/
/*Code Below This*/
#include <stdio.h>
#include <string.h>
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
    //Task1 start
    FILE *fp;
    char str[60];
    fp=fopen("file.txt","r");
    fgets(str,60,fp);
    fclose(fp);
    
    //Task2
    char temp[60];
    strcpy(temp,str); //temp=s
    int flag;
    strrev(str);
    if(strcmp(str, temp) == 0){
        flag=1;
    }
    else{
        flag=0;
    }
    return(0);
}


