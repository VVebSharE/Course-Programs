# 25. Write a Program that works as chat application between client and server.

from socket import socket, AF_INET, SOCK_DGRAM
sock = socket(AF_INET, SOCK_DGRAM)
sock.bind(('localhost', 5628))
while True:
    msg, addr = sock.recvfrom(8192) # This is the amount of bytes to read at maximum
    print("Got message from %s: %s" % (addr, msg))

