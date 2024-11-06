#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[BUFFER_SIZE] = {0};
    char message[BUFFER_SIZE];

    // Create socket
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Socket creation error");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        perror("Invalid address or address not supported");
        return -1;
    }

    // Connect to the server
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection Failed");
        return -1;
    }

    // Get input message from the user
    printf("Enter a message to send to the server: ");
    fgets(message, BUFFER_SIZE, stdin);

    // Send the message to the server
    send(sock, message, strlen(message), 0);
    printf("Message sent to server.\n");

    // Read the server's response
    int valread = read(sock, buffer, BUFFER_SIZE);
    if (valread > 0) {
        // Print the server's response, which includes the vowel and consonant counts
        printf("Server response: %s\n", buffer);
    } else {
        printf("Failed to receive response from server.\n");
    }

    // Close the socket
    close(sock);
    return 0;
}

