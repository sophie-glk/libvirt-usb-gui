# libvirt-usb-gui

A qt gui for passing through usb devices to a vm using libvirt.

### Compiling

```
qmake
make
```


### How to use

Make sure you can use the "sudo virsh " command without a password or change the sudo command in the top right
to something like gksu or kdesudo.
If the command requires it enable "Quotes" to wrap the entire command in double quotes.

Add a vm-id, select it and double click on the usb device you want to pass through. 
Double click it again to detach it.

![alt text](./screenshot.png)
