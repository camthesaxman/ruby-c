int sub_80940E4()
{
  unsigned int v0; // r2@1
  _WORD *v1; // r1@1
  int v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v0 = 0;
  v1 = (_WORD *)100679680;
  do
  {
    *v1 = 0;
    v2 = (v0 << 16) + 0x10000;
    ++v1;
    v0 = (unsigned int)v2 >> 16;
  }
  while ( v2 >> 16 <= 1023 );
  return v4;
}
