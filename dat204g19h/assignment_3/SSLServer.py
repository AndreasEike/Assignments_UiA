from socket import *
from ssl import create_default_context, Purpose

serverPort=8443

context=create_default_context(Purpose.CLIENT_AUTH)
context.load_cert_chain(certfile='example.crt', keyfile='example.key')

serverSocket = socket(AF_INET, SOCK_STREAM)

# Allow reusing the port number if left in the wait state.
serverSocket.setsockopt(SOL_SOCKET, SO_REUSEADDR, 1)
serverSocket.bind(('localhost', serverPort))
serverSocket.listen(1)

print("The server is listening.")

while True:
    connectionSocket, address = serverSocket.accept()

    sslSocket = context.wrap_socket(connectionSocket, server_side=True)
    message = sslSocket.recv(1024).decode()
    modifiedMessage = message.upper()

    sslSocket.send(modifiedMessage.encode())
    sslSocket.shutdown(SHUT_RDWR)
    sslSocket.close()
