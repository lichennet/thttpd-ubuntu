#include <stdio.h>                                            
int  main()                                                   
{                                                                 
char buf[1024] = {0};
char color[16] = {0};
/* color=xxxx */
read(0, buf, sizeof(buf));
sscanf(buf, "color=%s\n", color);

    printf("Content-type: text/html\n\n");                        
    printf("<html>\n");                                            
    printf("<head>\n");                                            
    printf("<title>CGI Output</title>\n");                         
    printf("</head>\n");                                           

    printf("<body bgcolor=\"%s\">", color);                                             
    printf("<h1> Hello world! </h1>"); 

#if 1
printf("<h2>");
printf("%s", buf);
printf("</h2>");
#endif

    printf("</body>");                                           
    printf("</html>\n");                                         

    return 0;                                                    
}
