#include "prime.h"
#include "../../evsets/list/list_utils.h"

// 2018 | Coffee Lake  | Inclusive LLC with 12 Ways | 4 Repeats
void traverse_Intel_Core_i7_9700K(uint64_t* arr) {
  int i;
  for(i=0; i<9; i+=4) {
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+3]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+3]);
    maccess((void *) arr[i+3]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+0]);
  }
}

// 2017 | Kaby Lake    | Inclusive LLC with 16 Ways | 2 Repeats
void traverse_Intel_Core_i7_7700K(uint64_t* arr) {
  int i;
  for(i=0; i<13; i+=4) {
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+3]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+3]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+3]);
  }
}

// 2017 | Kaby Lake    | Inclusive LLC with 12 Ways | 3 Repeats
void traverse_Intel_Core_i5_7500 (uint64_t* arr) {
  int i;
  for(i=0; i<9; i+=4) {
    maccess((void *) arr[i+3]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+3]);
  }
}

// 2015 | Skylake      | Inclusive LLC with 16 Ways | 3 Repeats
void traverse_Intel_Core_i7_6700 (uint64_t* arr) {
  // int i;
  // for(i=0; i<13; i+=4) {
  //   maccess((void *) arr[i+0]);
  //   maccess((void *) arr[i+1]);
  //   maccess((void *) arr[  0]);
  //   maccess((void *) arr[  0]);
  //   maccess((void *) arr[i+2]);
  //   maccess((void *) arr[  0]);
  //   maccess((void *) arr[  0]);
  //   maccess((void *) arr[i+3]);
  //   maccess((void *) arr[i+0]);
  //   maccess((void *) arr[i+1]);
  //   maccess((void *) arr[i+2]);
  //   maccess((void *) arr[i+3]);
  //   maccess((void *) arr[i+0]);
  //   maccess((void *) arr[i+1]);
  //   maccess((void *) arr[i+2]);
  //   maccess((void *) arr[i+3]);
  // }

  // prime pattern from plru training with address space 3-67
  // maccess((void *) arr[0x16]);
  // maccess((void *) arr[0x3c]);
  // maccess((void *) arr[0xc]);
  // maccess((void *) arr[0x20]);
  // maccess((void *) arr[0x21]);
  // maccess((void *) arr[0x40]);
  // maccess((void *) arr[0x2e]);
  // maccess((void *) arr[0x19]);
  // maccess((void *) arr[0x1b]);
  // maccess((void *) arr[0x3e]);
  // maccess((void *) arr[0x41]);
  // maccess((void *) arr[0x26]);
  // maccess((void *) arr[0xd]);
  // maccess((void *) arr[0x43]);
  // maccess((void *) arr[0x28]);
  // maccess((void *) arr[0x27]);
  // maccess((void *) arr[0x12]);
  // maccess((void *) arr[0x19]);
  // maccess((void *) arr[0x24]);

  // prime pattern from brrip training with address space 0-15 (hasn't fully converged)
  // maccess((void *) arr[0xf]);
  // maccess((void *) arr[0xd]);
  // maccess((void *) arr[0xb]);
  // maccess((void *) arr[0xc]);
  // maccess((void *) arr[0x7]);
  // maccess((void *) arr[0x5]);
  // maccess((void *) arr[0x2]);
  // maccess((void *) arr[0x9]);
  // maccess((void *) arr[0x4]);
  // maccess((void *) arr[0x6]);
  // maccess((void *) arr[0x1]);
  // maccess((void *) arr[0xa]);
  // maccess((void *) arr[0x0]);
  // maccess((void *) arr[0xe]);
  // maccess((void *) arr[0xc]);
  // maccess((void *) arr[0x3]);
  // maccess((void *) arr[0xf]);
  // maccess((void *) arr[0x7]);

  // prime pattern for plru training with l3 block size 64
     maccess((void *) arr[7]);
     maccess((void *) arr[12]);
     maccess((void *) arr[11]);
     maccess((void *) arr[15]);
     maccess((void *) arr[9]);
     maccess((void *) arr[4]);
     maccess((void *) arr[10]);
     maccess((void *) arr[3]);
     maccess((void *) arr[5]);
     maccess((void *) arr[2]);
     maccess((void *) arr[8]);
     maccess((void *) arr[1]);
     maccess((void *) arr[14]);
     maccess((void *) arr[12]);
     maccess((void *) arr[0]);
     maccess((void *) arr[7]);
     maccess((void *) arr[13]);
     maccess((void *) arr[6]);
     maccess((void *) arr[11]);
     maccess((void *) arr[4]); 
}

// 2015 | Skylake      | Inclusive LLC with 12 Ways | 4 Repeats
void traverse_Intel_Core_i5_6500 (uint64_t* arr) {
  int i;
  for(i=0; i<9; i+=4) {
    maccess((void *) arr[i+3]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+3]);
  }
}

// 2013 | Haswell      | Inclusive LLC with 16 Ways | 3 Repeats
void traverse_Intel_Core_i7_4790 (uint64_t* arr) {
  int i;
  for(i=0; i<13; i+=4) {
    maccess((void *) arr[i+3]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+3]);
  }
}

// 2013 | Haswell      | Inclusive LLC with 12 Ways | 2 Repeats
void traverse_Intel_Core_i5_4590 (uint64_t* arr) {
  int i;
  for(i=0; i<10; i+=1) {
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
  }
}

// 2012 | Ivy Bridge   | Inclusive LLC with 16 Ways | 3 Repeats
void traverse_Intel_Core_i7_3770 (uint64_t* arr) {
  int i;
  for(i=0; i<13; i+=4) {
    maccess((void *) arr[i+3]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+3]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+3]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+0]);
  }
}

// 2012 | Ivy Bridge   | Inclusive LLC with 12 Ways | 2 Repeats
void traverse_Intel_Core_i5_3450 (uint64_t* arr) {
  int i;
  for(i=0; i<10; i+=1) {
    maccess((void *) arr[i+2]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
  }
}

// 2011 | Sandy Bridge | Inclusive LLC with 12 Ways | 5 Repeats
void traverse_Intel_Core_i5_2400 (uint64_t* arr) {
  int i;
  for(i=0; i<10; i+=1) {
    maccess((void *) arr[i+0]);
    maccess((void *) arr[  0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
    maccess((void *) arr[i+0]);
    maccess((void *) arr[i+1]);
    maccess((void *) arr[i+2]);
  }
}

// 2019 | Xeon Silver  | Non-Inclusive LLC with 12 Ways | 1 Repeat
void traverse_Intel_Xeon_Silver_4208(Elem *list)
{
  // Fences at every two accesses against hardware stride prefetching [?]
	__asm__ volatile
	(		
		"mfence;"
		"movq (%%rcx), %%rcx;"
		"movq (%%rcx), %%rcx;"
		"mfence;"
		"movq (%%rcx), %%rcx;"
		"movq (%%rcx), %%rcx;"
		"mfence;"
		"movq (%%rcx), %%rcx;"
		"movq (%%rcx), %%rcx;"
		"mfence;"
		"movq (%%rcx), %%rcx;"
		"movq (%%rcx), %%rcx;"
		"mfence;"
		"movq (%%rcx), %%rcx;"
		"movq (%%rcx), %%rcx;"
		"mfence;"
		"movq (%%rcx), %%rcx;"
		"movq (%%rcx), %%rcx;"
		: // no output
		: "c" (list)
		: "cc", "memory"
	);
}

