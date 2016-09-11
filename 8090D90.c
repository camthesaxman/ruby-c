signed int __fastcall sub_8090D90(int a1, unsigned __int8 a2)
{
  unsigned int v2; // r0@1
  int v3; // r4@1
  unsigned int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r2@9
  _BYTE *v7; // r1@12
  char v8; // r3@12
  unsigned int v9; // r2@13

  v2 = (a1 << 16) - 0x10000;
  v3 = (v2 >> 19) & 0xFF;
  v4 = (unsigned int)(0x1000000 << ((v2 >> 16) & 7)) >> 24;
  v5 = 0;
  if ( a2 == 1 )
  {
    v9 = *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x2024ECC) & v4;
    if ( *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x2024ECC) & (unsigned __int8)v4 )
    {
      if ( v9 != (*(_BYTE *)(((v2 >> 19) & 0xFF) + 0x2024F00) & v4)
        || v9 != (*(_BYTE *)(((v2 >> 19) & 0xFF) + 0x202606C) & v4)
        || v9 != (*(_BYTE *)(((v2 >> 19) & 0xFF) + 0x20291C0) & v4) )
      {
        v8 = ~(_BYTE)v4;
        *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x2024ECC) &= ~(_BYTE)v4;
        v7 = (_BYTE *)(v3 + 33705728);
        goto _08090E8E;
      }
      return 1;
    }
  }
  else if ( (signed int)a2 > 1 )
  {
    if ( a2 == 2 )
    {
      *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x2024F00) |= v4;
      *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x202606C) |= v4;
      *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x20291C0) |= v4;
    }
    else if ( a2 == 3 )
    {
      *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x2024ECC) |= v4;
    }
  }
  else if ( !a2 )
  {
    v6 = *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x2024F00) & v4;
    if ( *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x2024F00) & (unsigned __int8)v4 )
    {
      if ( v6 != (*(_BYTE *)(((v2 >> 19) & 0xFF) + 0x202606C) & v4)
        || v6 != (*(_BYTE *)(((v2 >> 19) & 0xFF) + 0x20291C0) & v4) )
      {
        v7 = (_BYTE *)(v3 + 33705728);
        v8 = ~(_BYTE)v4;
_08090E8E:
        *v7 &= v8;
        *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x202606C) &= v8;
        *(_BYTE *)(((v2 >> 19) & 0xFF) + 0x20291C0) &= v8;
        return 0;
      }
      return 1;
    }
  }
  return v5;
}
