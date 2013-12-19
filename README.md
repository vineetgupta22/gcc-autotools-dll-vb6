GCC-Autotools-DLL-VB6
====
In this Repo we are going to create a DLL Library File through GCC and Autotools and then
Link it to Other Project which is in VB6. Here I have provided a snapshot about Prequist
Product and why I have choosen each to Create this Repo.


GCC
===
GNU Compiler Collection (GCC) is a compiler system produced by the GNU Project 
supporting various programming languages. I have choosen the GCC as it can be
used wide variety of hardware and/or operating systems. OS specific compilers
provided by hardware or OS vendors can differ substantially, complicating
both the software's source code and the scripts that invoke the compiler to
build it. With GCC, most of the compiler is the same on every platform, so
only code that explicitly uses platform-specific features must be rewritten
for each system.


Autotools
=========
The GNU build system, also known as the **Autotools**, is a suite of programming 
tools designed to assist in making source code packages portable to many Unix-like
systems. The GNU automatic build system has three important tools which are:

  - Autoconf,

  - Automake

  - Libtool,
  
Above three tools were designed to help the portability of software to
multiple platforms. Such autotools also help improve the readability of
code and speed up the development cycle of software packages.

DLL/Library
===
DLL is known as Dyanamic Link Library, it is Microsoft's implementation of
the shared library concept in the Microsoft Windows and OS/2 operating systems.
Many OS uses different names to describe Library Files. So, we can say that
A library that contains code and data that can be used by more than one program
at the same time. If the code of the library is accessed during the build of the
invoking program, then the library is called a *static library*. An alternative i
to build the executable of the invoking program and distribute that, independently
from the library implementation.


GIT
===
Development work starts from single file and then it starts to expanding
and it grows large and require work on Mutiple Platforms and Mutiple
Hardwares. As, they become more and more difficult to main them without
Automation. We spent weeks, months, years maintaining source code and 
fixing, porting and development and other things. Difficulty to main
souce code is smartly done by Git, which is cross platform and it gives
edge to Development of Code.


VB6
===
Visual Basic is a third-generation event-driven programming language and
Integrated Development Environment (IDE) from Microsoft for its 
COM programming model first released in 1991. Microsoft intends Visual Basic
to be relatively easy to learn and use. Visual Basic was derived from BASIC
and enables the Rapid Application Development (RAD) of Graphical User Interface (GUI) 
applications, access to databases using Data Access Objects (DAO), Remote Data 
Objects (RDO), or ActiveX Data Objects (ADO), and creation of ActiveX controls
and objects.

Purpose of the Repo
====
The Purpose of the Repo is to Create Library file which can be used to link other
EXE. So, we are goiing to create Independent Library Implementation and then link
that Library to VB6 Executable to perform diffent work through Library. We are going
to create the Library in C and then Going to Convert that Library to DLL and then
Link it to VB6 EXE.

The Main reason for development of this repo that on Internet Various Articles or
Codes are Provided on How to Create a Library? or How to Link Library? How to Create
Autotools Project? and many things. But the way to create Dyanamic Library throug
GCC Autotools is very difficult to find and thus building this repo to provide an
Example to other.



License
=======
19th December, 2013

The author disclaims copyright to this source code. In place of
a legal notice, here is a blessing:

  - May you do good and not evil.
  
  - May you find forgiveness for yourself and forgive others.
  
  - May you share freely, never taking more than you give.
