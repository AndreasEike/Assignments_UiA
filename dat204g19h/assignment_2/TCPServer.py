from socket import *

serverPort = 12000
serverSocket = socket(AF_INET, SOCK_STREAM)

# Allow reusing the port number if left in the wait state
serverSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)

serverSocket.bind(('', serverPort))
serverSocket.listen(1)

print("Server is ready to receive.")

while True:
    connectionSocket, address = serverSocket.accept()
    message = connectionSocket.recv(1024).decode()

    modifiedMessage = message.upper()
    connectionSocket.send(modifiedMessage.encode())
    connectionSocket.close()
