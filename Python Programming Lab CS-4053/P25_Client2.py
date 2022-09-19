# 25. Write a Program that works as chat application between client and server.

from socket import socket, AF_INET, SOCK_DGRAM
s = socket(AF_INET, SOCK_DGRAM)
msg = ("Hello you there! from client 1").encode('utf-8') # socket.sendto() takes bytes as input, hence we must
# encode the string first.
for i in range(10000):
    s.sendto(msg, ('localhost', 5628))
