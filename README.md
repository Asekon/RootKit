This is a rootkit which was tested on ubuntu-16.04.6-desktop-amd64 (Linux 4.4),but it should be easy to port to different kernel versions.


Install
--

Clone the repository
```
git clone
```

Enter the folder
```
cd RootKit
```

Compile
```
sudo make
```

Insert the module as root
```
insmod RootKit.ko
```

Uninstall
--

remove the module as root
```
rmmod RootKit
```

References
--
Wikipedia Rootkit
https://en.wikipedia.org/wiki/Rootkit

Linux Device Drivers
http://lwn.net/Kernel/LDD3/

LKM HACKING
https://www.thc.org/papers/LKM_HACKING.html

Memset's blog
http://memset.wordpress.com/

Linux on-the-fly kernel patching without LKM
http://phrack.org/issues/58/7.html

WRITING A SIMPLE ROOTKIT FOR LINUX
http://big-daddy.fr/repository/Documentation/Hacking/Security/Malware/Rootkits/writing-rootkit.txt

Linux Cross Reference
http://lxr.free-electrons.com/
