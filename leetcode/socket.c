#include <stdio.h>
#include <sys/socket.h>
#include<string.h>


int main(){
    int sockid = socket(AF_INET, SOCK_STREAM, 0);
    if(sockid>0){
        printf("Socket successfully created");
    }else{
        printf("Socket is not created");
    }
    return 0;
}
