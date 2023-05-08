#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * error_exit - print an error message and exit with status code 98
 * @msg: the error message to print
 */
void error_exit(char *msg)
{
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

/**
 * print_magic - print the magic bytes from an ELF header
 * @e_ident: pointer to the ELF header
 */
void print_magic(unsigned char *e_ident)
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", e_ident[i]);
    printf("\n");
}

/**
 * print_class - print the ELF class from an ELF header
 * @e_ident: pointer to the ELF header
 */
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
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
            printf("<unknown: %02x>\n", e_ident[EI_CLASS]);
            break;
    }
}

/**
 * print_data - print the data encoding from an ELF header
 * @e_ident: pointer to the ELF header
 */
void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
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
            printf("<unknown: %02x>\n", e_ident[EI_DATA]);
            break;
    }
}
/**
 * print_version - print the ELF version from an ELF header
 * @e_ident: pointer to the ELF header
 */
void print_version(unsigned char *e_ident)
{
    printf("  Version:                           ");
    switch (e_ident[EI_VERSION])
    {
        case EV_NONE:
            printf("none\n");
            break;
        case EV_CURRENT:
            printf("1 (current)\n");
            break;
        default:
            printf("<unknown: %02x>\n", e_ident[EI_VERSION]);
            break;
    }
}

/**
 * print_osabi - print the operating system and ABI from an ELF header
 * @e_ident: pointer to the ELF header
 */
void print_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI])
    {
        case ELFOSABI_NONE:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_SYSV:
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
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
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
printf("<unknown: %02x>\n", e_ident[EI_OSABI]);
break;
}
}
/**

main - entry point for the program

@argc: the number of command-line arguments

@argv: an array of command-line argument strings

Return: 0 if successful, otherwise 1
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr e_hdr;
ssize_t bytes_read;

if (argc != 2)
error_exit("Usage: elf_header elf_filename");

fd = open(argv[1], O_RDONLY);
if (fd < 0)
error_exit("Unable to open file");

bytes_read = read(fd, &e_hdr, sizeof(e_hdr));
if (bytes_read < sizeof(e_hdr))
error_exit("Unable to read ELF header");

close(fd);

printf("ELF Header:\n");
print_magic(e_hdr.e_ident);
print_class(e_hdr.e_ident);
print_data(e_hdr.e_ident);
print_version(e_hdr.e_ident);
print_osabi(e_hdr.e_ident);

return (0);
}
