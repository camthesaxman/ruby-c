signed int sub_80F4D88()
{
  unsigned int v0; // r7@4
  unsigned __int8 v1; // r0@7
  int *v2; // r2@12
  unsigned int i; // r7@12
  unsigned int v5; // [sp+0h] [bp-24h]@4

  if ( v2008FE6 == 14 )
  {
    v2 = (int *)&v5;
    BYTE3(v5) |= 0x40u;
    BYTE1(v5) = v2008FE6;
    for ( i = 0; i < v2008828; i = (i + 1) & 0xFFFF )
    {
      if ( !GetMonData((int)&dword_3004360[25 * i], 45, (int)v2) )
      {
        BYTE2(v5) = BYTE2(v5) & 0xE0 | i & 0x1F;
        LOBYTE(v5) = GetMonData((int)&dword_3004360[25 * i], v20087D8, 34776);
        sub_80F4944(&v5);
      }
    }
    sub_80F49F4();
    v20087DA = v2008FE4;
    ++v2008FE6;
  }
  else
  {
    if ( v2008FE6 == 15 )
      return 0;
    v5 |= 0x40000000u;
    v0 = 0;
    do
    {
      if ( GetBoxMonData((unsigned int *)(2400 * v2008FE6 + 80 * v2008FE7 + 33751204), 11, (_BYTE *)v2008FE7)
        && !GetBoxMonData((unsigned int *)(2400 * v2008FE6 + 80 * v2008FE7 + 33751204), 45, (_BYTE *)v2008FE7) )
      {
        v5 = v5 & 0xFFFF00FF | (v2008FE6 << 8);
        v5 = v5 & 0xFFE0FFFF | ((v2008FE7 & 0x1F) << 16);
        v1 = GetBoxMonData((unsigned int *)(2400 * v2008FE6 + 80 * v2008FE7 + 33751204), v20087D8, (_BYTE *)0x20087D8);
        v5 = v5 & 0xFFFFFF00 | v1;
        sub_80F4944(&v5);
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
  }
  return 1;
}
