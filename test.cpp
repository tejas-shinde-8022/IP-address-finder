#include <iostream>
#include <sys/socket.h>
#include <netdb.h>

int main()
{
    char hostname[1024];
    gethostname(hostname, 1024);
    struct hostent *host_entry;
    host_entry = gethostbyname(hostname);
    char *IPAddr = inet_ntoa(*((struct in_addr*)host_entry->h_addr_list[0]));
    std::cout << "My IP Address is: " << IPAddr<< std::endl;
    return 0;
}