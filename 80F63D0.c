signed int sub_80F63D0()
{
  unsigned int v0; // r6@3
  int v1; // r3@4
  int v2; // r2@10
  unsigned int v3; // r6@10
  char v4; // r0@11
  unsigned int v6; // [sp+0h] [bp-14h]@3

  if ( v2008FE6 == 14 )
  {
    v2 = 64;
    BYTE3(v6) |= 0x40u;
    BYTE1(v6) = 14;
    v3 = 0;
    do
    {
      v4 = GetMonData((int)&dword_3004360[25 * v3], 81, v2);
      if ( v4 )
      {
        BYTE2(v6) = BYTE2(v6) & 0xE0 | v3 & 0x1F;
        LOBYTE(v6) = v4;
        sub_80F4944(&v6);
      }
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 5 );
    sub_80F49F4();
    ++v2008FE6;
    return 0;
  }
  if ( v2008FE6 == 15 )
    return 0;
  v6 |= 0x40000000u;
  v0 = 0;
  do
  {
    v1 = (unsigned __int8)GetBoxMonData(
                            (unsigned int *)(2400 * v2008FE6 + 80 * v2008FE7 + 33751204),
                            81,
                            (_BYTE *)0x20300A4);
    if ( v1 )
    {
      v6 = v6 & 0xFFFF00FF | (v2008FE6 << 8);
      v6 = (v6 & 0xFFE0FFFF | ((v2008FE7 & 0x1F) << 16)) & 0xFFFFFF00 | v1;
      sub_80F4944(&v6);
    }
    ++v2008FE7;
    if ( v2008FE7 == 30 )
    {
      v2008FE7 = 0;
      ++v2008FE6;
      if ( v2008FE6 == 14 )
        break;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0xE );
  return 1;
}
