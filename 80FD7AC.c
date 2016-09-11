int __fastcall sub_80FD7AC(_WORD *a1, _WORD *a2, _WORD *a3)
{
  _WORD *v3; // r3@1
  _WORD *v4; // r10@1
  int v5; // r1@1
  int result; // r0@3
  unsigned int v7; // r0@4
  int v8; // r5@4
  int v9; // r8@4
  unsigned int v10; // r7@4
  unsigned int v11; // r6@4
  unsigned int v12; // r1@4
  unsigned __int16 v13; // r0@8
  unsigned int v14; // r2@10
  unsigned int v15; // r0@11
  int v16; // [sp+4h] [bp-24h]@4

  v3 = a1;
  v4 = a2;
  v5 = *a1;
  if ( v5 != *v4 || *a3 != v5 )
  {
    v7 = *v4;
    v8 = v7 & 0x1F;
    v7 <<= 16;
    v9 = (v7 >> 21) & 0x1F;
    v16 = (v7 >> 26) & 0x1F;
    v10 = (signed int)((*v3 & 0x1F) + (((unsigned int)*v3 << 16 >> 21) & 0x1F) + (((unsigned int)*v3 << 16 >> 26) & 0x1F))
        / 3 & 0xFFFF;
    v11 = (v8 + v9 + v16) / 3 & 0xFFFF;
    v12 = (signed int)((*a3 & 0x1F) + (((unsigned int)*a3 << 16 >> 21) & 0x1F) + (((unsigned int)*a3 << 16 >> 26) & 0x1F))
        / 3 & 0xFFFF;
    if ( v10 != v11 || v12 != v11 )
    {
      if ( v10 <= v11 )
        v13 = v11 - v10;
      else
        v13 = v10 - v11;
      v14 = v13;
      if ( v12 <= v11 )
        LOWORD(v15) = v11 - v12;
      else
        LOWORD(v15) = v12 - v11;
      v15 = (unsigned __int16)v15;
      if ( v14 >= (unsigned __int16)v15 )
        v15 = v14;
      result = ((signed int)(v8 * ((31 - v15) & 0xFFFF)) / 31 & 0xFFFF | ((signed int)(v16 * ((31 - v15) & 0xFFFF)) / 31 << 10) & 0x3FFFFFF | 32 * ((signed int)(v9 * ((31 - v15) & 0xFFFF)) / 31 & 0xFFFF)) & 0xFFFF;
    }
    else
    {
      result = *v4;
    }
  }
  else
  {
    result = *v4;
  }
  return result;
}
