#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

void close_elf(int elf);
void close_elf(int elf);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);

/**
 * check_elf - confirms if ELF is a file
 * Description: exit code 98, if file is not ELF file.
 */
void check_elf(unsigned char *e_ident)
{
	for (index = 0; index < 4; index++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' && e_ident[i] != 'F') ? exit(98) : 0;
	}

/**
 * print_magic - Prints the magic numbers of an ELF header
 */

void print_magic(unsigned char *e_ident)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x%s", e_ident[i], (i == EI_NIDENT - 1) ? "\n" : " ");
	}

/**
 * print_data - Prints data of ELF header.
 */
	void print_data(unsigned char *e_ident)
	{
		printf("  Data:                              ");


		switch (e_ident[EI_DATA])
		{
			case ELFDATANONE: printf("none\n"); break;
					 case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
							  case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
							  default: printf("<unknown: %x>\n", e_ident[EI_CLASS]);
		}
	}

/**
 * print_class - prints ELF header class.
 */
	void print_class(unsigned char *e_ident)
		printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE: printf("none\n"); break;
				   case ELFCLASS32: printf("ELF32\n"); break;
						    case ELFCLASS64: printf("ELF64\n"); break;
						    default: printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_os.abi - prints OS/ABI on the given header.
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
				    case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
							case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
									     case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
												    case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
												    default: printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_version - prints a version of the ELF header.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT: printf(" (current)\n"); break;
		default: printf("\n"); break;
	}
}
/**
 * print_abi - prints the abi version of the header.
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",  e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the ELF header type-
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
printf("  Type:                              ");
switch (e_type)
{
	case ET_NONE: printf("NONE (None)\n"); break;
	default: printf("<unknown: %x>\n", e_type);
}
}
/**
 * print_entry - function that prints entry points of ELF header.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
}
