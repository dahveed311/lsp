#include <unistd.h>
#include <fcntl.h>
struct record {
        int id;
        char name[80];
};

void main() {
        int fd, size = sizeof(struct record);
        struct record info;
        fd = open("datafile", O_RDWR);
        lseek(fd, size, SEEK_SET); // Skip one record
        read(fd, &info, size); // read second record
        
        info.id = 99; // modify record
        lseek(fd, -size, SEEK_CUR); // backspace one record position
        write(fd, &info, size);

        close(fd);
}
