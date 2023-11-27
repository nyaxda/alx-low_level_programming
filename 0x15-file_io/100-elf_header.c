#inclidenttyude <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void elf_checker(unsigned char *identty);
void mag_prnt(unsigned char *identty);
void class_prnt(unsigned char *identty);
void data_prnt(unsigned char *identty);
void vrsn_prnt(unsigned char *identty);
void abiprnt(unsigned char *identty);
void osabi_prnt(unsigned char *identty);
void type_prnt(unsigned int e_type, unsigned char *identty);
void entrnce(unsigned long int e_entry, unsigned char *identty);
void elftermnt(int elf);

/**
 * elf_checker - Checks if a file is an ELF file.
 * @identty: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void elf_checker(unsigned char *identty)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (identty[index] != 127 &&
			identty[index] != 'E' &&
			identty[index] != 'L' &&
			identty[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * mag_prnt - Prints the magic numbers of an ELF header.
 * @identty: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void mag_prnt(unsigned char *identty)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", identty[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_prnt - Prints the class of an ELF header.
 * @identty: A pointer to an array containing the ELF class.
 */
void class_prnt(unsigned char *identty)
{
	printf("  Class:                             ");

	switch (identty[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", identty[EI_CLASS]);
	}
}

/**
 * data_prnt - Prints the data of an ELF header.
 * @identty: A pointer to an array containing the ELF class.
 */
void data_prnt(unsigned char *identty)
{
	printf("  Data:                              ");

	switch (identty[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", identty[EI_CLASS]);
	}
}

/**
 * vrsn_prnt - Prints the version of an ELF header.
 * @identty: A pointer to an array containing the ELF version.
 */
void vrsn_prnt(unsigned char *identty)
{
	printf("  Version:                           %d",
		   identty[EI_VERSION]);

	switch (identty[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * osabi_prnt - Prints the OS/ABI of an ELF header.
 * @identty: A pointer to an array containing the ELF version.
 */
void osabi_prnt(unsigned char *identty)
{
	printf("  OS/ABI:                            ");

	switch (identty[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", identty[EI_OSABI]);
	}
}

/**
 * abiprnt - Prints the ABI version of an ELF header.
 * @identty: A pointer to an array containing the ELF ABI version.
 */
void abiprnt(unsigned char *identty)
{
	printf("  ABI Version:                       %d\n",
		   identty[EI_ABIVERSION]);
}

/**
 * type_prnt - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @identty: A pointer to an array containing the ELF class.
 */
void type_prnt(unsigned int e_type, unsigned char *identty)
{
	if (identty[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entrnce - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @identty: A pointer to an array containing the ELF class.
 */
void entrnce(unsigned long int e_entry, unsigned char *identty)
{
	printf("  Entry point address:               ");

	if (identty[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (identty[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * elftermnt - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void elftermnt(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);

		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		elftermnt(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		elftermnt(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_checker(header->identty);
	printf("ELF Header:\n");
	mag_prnt(header->identty);
	class_prnt(header->identty);
	data_prnt(header->identty);
	vrsn_prnt(header->identty);
	osabi_prnt(header->identty);
	abiprnt(header->identty);
	type_prnt(header->e_type, header->identty);
	entrnce(header->e_entry, header->identty);

	free(header);
	elftermnt(o);
	return (0);
}