import socket
import sys
 
TCP_IP = '127.0.0.1'   # Symbolic name, meaning all available interfaces
TCP_PORT = 7001 # Arbitrary non-privileged port
BUFFER_SIZE = 2**20

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
print 'Socket created'
 
# #Bind socket to local host and port
# try:
#     s.bind((HOST, PORT))
# except socket.error as msg:
#     print 'Bind failed. Error Code : ' + str(msg[0]) + ' Message ' + msg[1]
#     sys.exit()
     
# print 'Socket bind complete'
 
# #Start listening on socket
# s.listen(10)
# print 'Socket now listening'

# #now keep talking with the client
# while 1:
#     #wait to accept a connection - blocking call
#     conn, addr = s.accept()
#     print 'Connected with ' + addr[0] + ':' + str(addr[1])
     
# s.close()

s.connect((TCP_IP, TCP_PORT))
# s.send(MESSAGE)
for packet_num in xrange(20):
	data = s.recv(BUFFER_SIZE)
	print str(packet_num) + ":" + data
print "Finished"
s.close()
