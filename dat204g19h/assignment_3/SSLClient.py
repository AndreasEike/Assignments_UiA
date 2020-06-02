from socket import *
import ssl

serverName = 'localhost'
serverPort = 8443
clientSocket = socket(AF_INET, SOCK_STREAM)

context = ssl.create_default_context(cafile='example.crt', capath='.')
sslSocket = context.wrap_socket(clientSocket, server_hostname=serverName)

sslSocket.connect((serverName, serverPort))

message = input("Input your message: ")

sslSocket.send(message.encode())

modifiedMessage = sslSocket.recv(1024).decode()

print("Message from server: ", modifiedMessage)

sslSocket.close()
