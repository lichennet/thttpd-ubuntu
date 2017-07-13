#include <stdio.h>                                            
int  main()                                                   
{                                                                 
char buf[1024] = {0};

read(0, buf, sizeof(buf));

    printf("Content-type: text/html\n\n");                        
    printf("<html>\n");                                            
    printf("<head>\n");                                            
    printf("<title>CGI Output</title>\n");                         
    printf("</head>\n");                                           

    printf("<body>");                                             
    printf("<h1> Hellow, world. </h1>");                           

printf("<h2>");
printf("content: %s", buf);
printf("</h2>");

    printf("</body>");                                           
    printf("</html>\n");                                         

    return 0;                                                    
}
