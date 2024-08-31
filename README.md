<h1 align="center"> Mini_talk Project </h1>
<p> The mini_talk project is about devoloping a connection between two devices, a server and a client, and create communication between them, in this case, 
  the client must send a message to the server and the server should interpretate it and display the same message in the terminal.</p>


### Main developed areas:
<p> - Understanding and handling of signals;</p>
<p> - Stablishing simple connections;</p>
<p> - Bitwise;</p>


## How to use it:
If you wanna wanna use it, you should clone the repositiory:
```bash
git clone repository
```
After it, you will enter the directory and do:
```bash
cd mini_talk
make bonus
```
Then you are going to open 2 terminals, one you will open the server:
```bash
./server 
```
The other you will open the client followed by PID, that were display by the server, and the message that you wanna send:
```bash
./client SERVER PID "MESSAGE"
```

## Program Development:
<p> In order to develop the program</p>

### Conection:
<p> To better understand the connection, it's needed to understand the PID. The PID is the Process ID, an unique number assigned to each running process in an
  operating system. It distinguishes concurrent processes, facilitating their management and resource allocation.</p>
<p>Basically, what our program is doing is, because we are running inside the same system, we are sending the signals throught the processes inside it.
<p> In case of the bonus, the client also receive one signal throught the conection,this signal is the check that the server received the full message. The 
  signal sent by the server to the client, is only possible, because when we send the a signal with the library signals.h, it also send with it a group 
  of information about the sender, including its PID.</p>

### Bitwise and Signal handling:
<p> These itens are linked becuase it was available only two signal (SIGUSR1 and SIGUSR2) to send the messages from the client to the sever.So in order to send the
  characters it was needed to send them in bits, so one of the signals would be interpreted as 0 and the other as 1.</p>  
<p> When some signal are combined (could be 8 in case of ASCII characters, or more), they were going to represent the binary number of one character, then this character
  would be added to the string that will hold all the characters until receive the end of the message, the '\0', and then it would print it.</p>

