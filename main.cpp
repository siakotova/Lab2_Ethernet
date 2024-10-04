#include "mbed.h"
#include "EthernetInterface.h"
EthernetInterface net;

int main()
{
    char mac[6];
    mbed_mac_address(mac);
    printf("\r\rmbed's MAC address is %02x:%02x:%02x:%02x:%02x:%02x\n\r", mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
    
    // Connect to net

    // Show the network address
    const char *ip = net.get_ip_address();
    printf("IP address is: %s\n\r", ip ? ip : "None");

    // Open a socket on the network interface net using a TCPSocket

    //Connect to a website (gethostbyname)
    
    //set port

    //connect

    // Send a simple http get request

    //Receive http response recv()

    //Print Response

    // Close the socket to return its memory and bring down the network interface

    // Bring down the ethernet interface
    net.disconnect();
    printf("Done\n\r");
}
