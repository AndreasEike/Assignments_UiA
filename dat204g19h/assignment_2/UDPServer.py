from socket import *

serverPort = 12000
serverSocket = socket(AF_INET, SOCK_DGRAM)
serverSocket.bind(('', serverPort))

print("Server is ready to receive.")

while True:
    message, clientAdress = serverSocket.recvfrom(2048)

    print("message received!")

    modifiedMessage = message.decode().upper()
    serverSocket.sendto(modifiedMessage.encode(), clientAdress)
