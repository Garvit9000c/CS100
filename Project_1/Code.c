/*Read a Sentence from File.txt ,& state Weather its good or not?, "a good sentence must be palindrome & difference between total char and Upper case char>0  */
/*Task1 read file.txt store its input in string using (fgets function)*/  
/*Task2 check weather str is palindrom if yes store flag=True else flag=false(strrev funtion*/
/*Task3 find x=(Number of upper case char)-(total char) , in str(isuppper funtion)*/
/*Task4 find mod(x), if its >0 and flag==true, print its a good sentence otherwise bad sentence(fabs function)*/
/*Code Below This*/
#include <stdio.h>
int main()
{
    //Task1 start
    FILE *fp;
    char str[60];
    fp=fopen("file.txt","r");
    fgets(str,60,fp);
    fclose(fp);
    //Task1 end 
    
    
    return(0);
}
