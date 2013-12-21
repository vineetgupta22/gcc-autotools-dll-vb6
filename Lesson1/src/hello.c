/**
* 21st December, 2013
*
* The author disclaims copyright to this source code.  In place of
* a legal notice, here is a blessing:
*
*    May you do good and not evil.
*    May you find forgiveness for yourself and forgive others.
*    May you share freely, never taking more than you give.
*
************************************************************************/


  //This file is placed under include folder
  #include <hello.h>
  
  
  /**
  *   Function we would be calling from VB6. This function would return
  *   the string we want in vb6 project.
  *
  *   Point to Remember here that we have to add the __declspec(dllexport)
  *   before each function. As it will let Compiler know that the function
  *   can be called from outside any Program and another thing VB6 only
  *   understand the dllimport and dllexport things.
  *
  *   We will be setting fixed with string message for using pointer and other
  *   things would be done other lessons
  **/
  
  __declspec(dllexport) long hello_example ( char message[500] ) {
        /**
        *   Copy the string which you want to export
        *
        *   We are sending special character thus using string length
        *   function. As it will properly tell how much bytes/character
        *   to be copied.
        *
        *   We don't have to return any thing as the same memory blocks
        *   would be accessed by VB6 which are provided to the message
        *   
        **/
        strncpy(message, "Hello World!!!\n\nIts Working", strlen("Hello World!!!\n\nIts Working");
        
        
        return 0;
  }
  
  
