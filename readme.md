Sarah Price
s198041
Assesment 4- HashFunction
HashFunction Documentation


Description: create a solution that generates a color hash code according to what is put into the Main function

File: HashFunction.h

  Description: generates a random id number consistly based on input
  
  Operations:
  
     -Name: badHsh
     Description: implementation of a basic addition hash
     Type: unsigned int
     Visibility: private
  
     -Name: BKDRHsh
     Description: Hash function by Brian Kernighan and Dennis Richie
     Type: unsigned int
     Visibility: private
  
     -Name: colorHsh
     Description: custom color hash
     Type: unsigned int
     Visibility: private
  
     -Name: randomHsh
      Description: hash based on numbers with numbers that arent actually significant
      Type: unsigned int
      Visibility: private
  
  Attributes:
  
      -Name: HashFunc
      Description: default hash function
      Type: typedef
      Visibility: private
         
      -Name: defaultHash
      Description: a helper to access a default hash function
      Type: static
      Visibility: private   
       
  File: main.h
  
  Description: where main functions are called. Runs on start up
  
    Operations:
         
         -Name: main
         Description: the only function in main.cpp; runs on start up
         Type: int
         Visibility: private
  
[raycheat]:https://www.raylib.com/cheatsheet/cheatsheet.html

## License

MIT License - Copyright (c) 2018 Academy of Interactive Entertainment

For more information, see the [license][lic] file.

Third party works are attributed under [thirdparty.md][3p].

[lic]:license.md
[3p]:thirdparty.md
[raylib]:https://github.com/raysan5/raylib
