<h1 align="center">
	🖨️ ft_printf
</h1>

## 💡 About the project

The goal of this project is pretty straightforward. You will recode printf(). You will mainly learn about using a variable number of arguments. How cool is that?? It is actually pretty cool :)


## 📝 Requirements

**Mandatory part:**

- Don’t implement the buffer management of the original printf().
- Your function has to handle the following conversions: cspdiuxX%
- Your function will be compared against the original printf().
- You must use the command ar to create your library. Using the libtool command is forbidden.
- Your libftprintf.a has to be created at the root of your repository.
- You have to implement the following conversions:
	- %c Prints a single character.
	- %s Prints a string (as defined by the common C convention).
	- %p The void * pointer argument has to be printed in hexadecimal format.
	- %d Prints a decimal (base 10) number.
	- %i Prints an integer in base 10.
	- %u Prints an unsigned decimal (base 10) number.
	- %x Prints a number in hexadecimal (base 16) lowercase format.
	- %X Prints a number in hexadecimal (base 16) uppercase format.
	- %% Prints a percent sign

**Bonus part:**

- Manage all the following flags: ’# +’ (Yes, one of them is a space)

## 📋 Testing

To compile, navigate to the project directory and run:

```shell
$ make
```

This will create a static library (.a file) that can be linked with other programs.
