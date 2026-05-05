#include <stdio.h>

typedef struct
{
    size_t size;
    int free;
} header_t;

#define HEAP_SIZE 1024

static unsigned char heap[HEAP_SIZE];
static size_t offset = 0;

void my_free_all()
{
    offset = 0;
}

void my_free(void *ptr)
{
    header_t *hdr = (header_t *)ptr - 1;
    hdr->free = 1;
}

void *my_malloc(size_t size)
{
    size_t i = 0;

    while (i < offset)
    {
        header_t *hdr = (header_t *)(heap + i);

        if (hdr->free && hdr->size >= size)
        {
            void *ptr = (void *)(hdr + 1);
            hdr->free = 0;
            return ptr;
        }

        i += sizeof(header_t) + hdr->size;
    }

    if (size + sizeof(header_t) + offset > HEAP_SIZE)
        return NULL;

    header_t *hdr = (header_t *)(heap + offset);

    hdr->size = size;
    hdr->free = 0;

    offset += sizeof(header_t);

    void *ptr = heap + offset;

    offset = offset + size;
    return ptr;
}

int main()
{
    printf("Offset: %zu\n", offset);

    void *a = my_malloc(1000-16);

    printf("a = %p\n", a);

    void *b = my_malloc(24-16);

    printf("Offset: %zu\n", offset);

    // a are not in use anymore
    
    my_free(a);

    void *c = my_malloc(512);
    printf("c = %p\n", c);

    printf("Offset: %zu\n", offset);
}
