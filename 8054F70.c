int sub_8054F70()
{
  char *v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = &byte_3000583;
  do
    *v0-- = -128;
  while ( (signed int)v0 >= (signed int)&byte_3000580 );
  return v2;
}
