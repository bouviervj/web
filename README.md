WEB
===


C/C++ JSON Web Service
======================
This project aims at deploying easily web services on C/C++ embedded development environment.
The web server support basic HTTP 1.1, cookies, compression and can handle SSL/TLS connections.

Basic idea is that you can deploy easily JSON web services.

Features
========
 * Embedded C/C++ webserver
 * JSON Web Services
 * JSON Session Context
 * HTTP 1.1
 * Cookies
 * Frames compression
 * Etags
 * SSL connections


Example
=======

After compiling when launching web project, the service is deployed automatically:

```C
jbv@jbv-Aspire-4820TG:~/projects/web$ ./web
Will start server with port (http_port) : 5555
Will start server with port (http_port) : 5556
Trying to load service libstubbed.so...
 Declaration: /module_fibo
 Declaration: /module_context
Exiting from load service
Waiting socket event ...
```


