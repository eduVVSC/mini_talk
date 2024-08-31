## Mini_talk Project
<p> The mini_talk project is about devoloping a connection between two devices, a server and a client, and create communication between them, in this case, the client must send a message to the server and the server should interpretate it and display the same message in the terminal.</p>


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
<p> The connection between them is stablished by the Pid of the server, and the client send the signals throught it. In case of the bonus, the client also receive one signal throught the conection,
this signal is the check that the server received the full message.</p>
<p> The signal sent by the server to the client, is only possible, because when a </p>

### Bitwise and Signal handling:
<p> </p>

