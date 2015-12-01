//
//  clang-atomics.m
//  Test23
//
//  Created by Guillaume Lessard on 2015-05-21.
//  Copyright (c) 2015 Guillaume Lessard. All rights reserved.
//

#import "clang-atomics.h"

// See: http://clang.llvm.org/doxygen/stdatomic_8h_source.html
//      http://clang.llvm.org/docs/LanguageExtensions.html#c11-atomic-builtins
//      http://en.cppreference.com/w/c/atomic/atomic_compare_exchange


const void* ReadVoidPtr(void** ptr)
{
  return __c11_atomic_load((_Atomic(void*)*)ptr, __ATOMIC_RELAXED);
}

const void* SyncReadVoidPtr(void** ptr)
{
  return __c11_atomic_load((_Atomic(void*)*)ptr, __ATOMIC_SEQ_CST);
}

void StoreVoidPtr(const void* val, void** ptr)
{
  __c11_atomic_store((_Atomic(void*)*)ptr, (void*)val, __ATOMIC_RELAXED);
}

void SyncStoreVoidPtr(const void* val, void** ptr)
{
  __c11_atomic_store((_Atomic(void*)*)ptr, (void*)val, __ATOMIC_SEQ_CST);
}

const void* SwapVoidPtr(const void* val, void** ptr)
{
  return __c11_atomic_exchange((_Atomic(void*)*)ptr, (void*)val, __ATOMIC_SEQ_CST);
}

_Bool CASVoidPtr(void** current, const void* future, void** ptr)
{
  return __c11_atomic_compare_exchange_weak((_Atomic(void*)*)ptr, (void**)current, (void*)future, __ATOMIC_SEQ_CST, __ATOMIC_RELAXED);
}


long ReadWord(long *ptr)
{
  return __c11_atomic_load((_Atomic(long)*)ptr, __ATOMIC_RELAXED);
}

long SyncReadWord(long *ptr)
{
  return __c11_atomic_load((_Atomic(long)*)ptr, __ATOMIC_SEQ_CST);
}

void StoreWord(long val, long* ptr)
{
  __c11_atomic_store((_Atomic(long)*)ptr, val, __ATOMIC_RELAXED);
}

void SyncStoreWord(long val, long* ptr)
{
  __c11_atomic_store((_Atomic(long)*)ptr, val, __ATOMIC_SEQ_CST);
}

long SwapWord(long val, long *ptr)
{
  return __c11_atomic_exchange((_Atomic(long)*)ptr, val, __ATOMIC_SEQ_CST);
}

long AddWord(long increment, long* ptr)
{
  return __c11_atomic_fetch_add((_Atomic(long)*)ptr, increment, __ATOMIC_SEQ_CST);
}

long SubWord(long increment, long* ptr)
{
  return __c11_atomic_fetch_sub((_Atomic(long)*)ptr, increment, __ATOMIC_SEQ_CST);
}

long IncrementWord(long* ptr)
{
  return __c11_atomic_fetch_add((_Atomic(long)*)ptr, 1, __ATOMIC_SEQ_CST);
}

long DecrementWord(long* ptr)
{
  return __c11_atomic_fetch_sub((_Atomic(long)*)ptr, 1, __ATOMIC_SEQ_CST);
}

_Bool CASWord(long* current, long future, long* ptr)
{
  return __c11_atomic_compare_exchange_weak((_Atomic(long)*)ptr, current, future, __ATOMIC_SEQ_CST, __ATOMIC_RELAXED);
}


int Read32(int *ptr)
{
  return __c11_atomic_load((_Atomic(int)*)ptr, __ATOMIC_RELAXED);
}

int SyncRead32(int *ptr)
{
  return __c11_atomic_load((_Atomic(int)*)ptr, __ATOMIC_SEQ_CST);
}

void Store32(int val, int* ptr)
{
  __c11_atomic_store((_Atomic(int)*)ptr, val, __ATOMIC_RELAXED);
}

void SyncStore32(int val, int* ptr)
{
  __c11_atomic_store((_Atomic(int)*)ptr, val, __ATOMIC_SEQ_CST);
}

int Swap32(int val, int *ptr)
{
  return __c11_atomic_exchange((_Atomic(int)*)ptr, val, __ATOMIC_SEQ_CST);
}

int Add32(int increment, int* ptr)
{
  return __c11_atomic_fetch_add((_Atomic(int)*)ptr, increment, __ATOMIC_SEQ_CST);
}

int Sub32(int increment, int* ptr)
{
  return __c11_atomic_fetch_sub((_Atomic(int)*)ptr, increment, __ATOMIC_SEQ_CST);
}

int Increment32(int* ptr)
{
  return __c11_atomic_fetch_add((_Atomic(int)*)ptr, 1, __ATOMIC_SEQ_CST);
}

int Decrement32(int* ptr)
{
  return __c11_atomic_fetch_sub((_Atomic(int)*)ptr, 1, __ATOMIC_SEQ_CST);
}

_Bool CAS32(int* current, int future, int* ptr)
{
  return __c11_atomic_compare_exchange_weak((_Atomic(int)*)ptr, current, future, __ATOMIC_SEQ_CST, __ATOMIC_RELAXED);
}


long long Read64(long long *ptr)
{
  return __c11_atomic_load((_Atomic(long long)*)ptr, __ATOMIC_RELAXED);
}

long long SyncRead64(long long *ptr)
{
  return __c11_atomic_load((_Atomic(long long)*)ptr, __ATOMIC_SEQ_CST);
}

void Store64(long long val, long long* ptr)
{
  __c11_atomic_store((_Atomic(long long)*)ptr, val, __ATOMIC_RELAXED);
}

void SyncStore64(long long val, long long* ptr)
{
  __c11_atomic_store((_Atomic(long long)*)ptr, val, __ATOMIC_SEQ_CST);
}

long long Swap64(long long val, long long *ptr)
{
  return __c11_atomic_exchange((_Atomic(long long)*)ptr, val, __ATOMIC_SEQ_CST);
}

long long Add64(long long increment, long long* ptr)
{
  return __c11_atomic_fetch_add((_Atomic(long long)*)ptr, increment, __ATOMIC_SEQ_CST);
}

long long Sub64(long long increment, long long* ptr)
{
  return __c11_atomic_fetch_sub((_Atomic(long long)*)ptr, increment, __ATOMIC_SEQ_CST);
}

long long Increment64(long long* ptr)
{
  return __c11_atomic_fetch_add((_Atomic(long long)*)ptr, 1, __ATOMIC_SEQ_CST);
}

long long Decrement64(long long* ptr)
{
  return __c11_atomic_fetch_sub((_Atomic(long long)*)ptr, 1, __ATOMIC_SEQ_CST);
}

_Bool CAS64(long long* current, long long future, long long* ptr)
{
  return __c11_atomic_compare_exchange_weak((_Atomic(long long)*)ptr, current, future, __ATOMIC_SEQ_CST, __ATOMIC_RELAXED);
}
