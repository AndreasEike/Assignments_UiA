from socket import *

serverName = "localhost"
serverPort = 12000
clientSocket = socket(AF_INET, SOCK_STREAM)

clientSocket.connect((serverName, serverPort))

message=input("Input your message: ")
clientSocket.send(message.lower().encode())

modifiedMessage = clientSocket.recv(1024)

print("From server: ", modifiedMessage.decode())
clientSocket.close()
