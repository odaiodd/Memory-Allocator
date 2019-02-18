#include "memoryAllocator.h"
#include <stdio.h>

typedef struct MemoryAllocator MemoryAllocator{
	void* memoryPool;
	size_t size;
	
}MemoryAllocator;

// free is 1
MemoryAllocator* MemoryAllocator_init(void* memoryPool,size_t size){
	MemoryAllocator* allocator = (MemoryAllocator*)malloc(sizeof(MemoryAllocator));
	unsigned short mask = 1;
	*(*size_t)memoryPool = size | mask ;
	allocator->size = size;
	allocator->memoryPool = memoryPool;
	return allocator;
}

void* MemoryAllocator_allocate(MemoryAllocator* allocator size_t size){
	
}

