# cryptographer

For this new project, it was thought to make a cryptographer, some will wonder what is that?
well a cryptographer roughly serves to encode words, links or anything "sensitive" 
that you do not want others to know.

### Table of Contents
* [General functions](#General-functions)
* [Program instructions](#program-instructions)
* [Functios](#Functions)
* [Structs](#Structs)
* [Program](#Program)
<!-- * [License](#license) -->

### General functions
Once I have understood this, I will talk about what will make up my program.
for the encryption methods we will have the following:

- Morse code
- Cesar encryption
- Inverse cesar encryption
- Aerenautic phonetic alphabet

In the same way, the cryptographer will work in the opposite way, 
so that we can decrypt a word by selecting the encryption method.

### Program instructions
the program can run in the GDB online compiler
instructions for use:
When running the program, all the following files must be integrated:
* [main.c](https://github.com/farydcortes/C/blob/main/PIA/CRIP/criptografo_version_2.2.c)
* [crip.c](https://github.com/farydcortes/C/blob/main/PIA/CRIP/crip.h)
* [bin.h](https://github.com/farydcortes/C/blob/main/PIA/CRIP/bin.h)

Once we have all the files, we will compile the main.c.
After that, we will run the program, when doing so it will throw a welcome followed by the options menu, to access one of those you have to type its corresponding number.
Now you can enter the word or text you want and the program will throw it to you encoded in the method you chose.

### Functions
```
char *getcode(char *cadena)
```
This function is responsible for giving us the already encrypted code

```
void iniciarmorse ();
void iniciarcesar ();
void iniciarrevcesar ();
void iniciaralphabet();
```
These voids are used to initialize the encryption process depending on the mode we select

### Structs
```
struct crip {
	char letra;		//we declare vectors for the code, one for the letters and another for its code
	char codigo[6];
	 
};
```
through this structure we handle the codes.

### Program

#### interface

<p align="center">
<img src="https://github.com/farydcortes/C/blob/main/PIA/Interface.PNG">
</p>


#### Outputs

<p align="center">
<img src="https://github.com/farydcortes/C/blob/main/PIA/morse.PNG">
</p>

* Morse code output example



<p align="center">
<img src="https://github.com/farydcortes/C/blob/main/PIA/csr.PNG">
</p>

* Output example using cesar encryption



<p align="center">
<img src="https://github.com/farydcortes/C/blob/main/PIA/cesari.PNG">
</p>

* Output example using reverse caesar cipher



<p align="center">
<img src="https://github.com/farydcortes/C/blob/main/PIA/aph.PNG">
</p>

* Example of output using the aeronautical phonetic alphabet method


## References

* [Brian W. Kernighan, Dennis M. Ritchie - The C Programming Language, Second Edition (1988).](http://cslabcms.nju.edu.cn/problem_solving/images/c/cc/The_C_Programming_Language_%282nd_Edition_Ritchie_Kernighan%29.pdf)
* Examples made in class.
* [c-refcard.](https://users.ece.utexas.edu/~adnan/c-refcard.pdf)


