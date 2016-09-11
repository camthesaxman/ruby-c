int sub_8094038()
{
  int v0; // r0@2
  unsigned int v1; // r2@2
  __int16 v2; // r4@3
  signed int v3; // r5@3
  int v4; // r1@4
  int v6; // [sp+18h] [bp-4h]@0

  if ( !v2000001 )
  {
    LOWORD(v0) = 0;
    v1 = 4;
    do
    {
      v2 = v0;
      v3 = v1 << 16;
      if ( *(_BYTE *)((signed __int16)v0 + 0x200000E) )
      {
        v4 = (v3 >> 15) + 100679680;
        *(_WORD *)(v4 + 960) = gUnknown_083B5F8C[4 * (signed __int16)v0] | 0x3000;
        *(_WORD *)(v4 + 962) = word_83B5F8E[4 * (signed __int16)v0] | 0x3000;
        *(_WORD *)(v4 + 1024) = word_83B5F90[4 * (signed __int16)v0] | 0x3000;
        *(_WORD *)((v3 >> 15) + 0x6004402) = word_83B5F92[4 * (signed __int16)v0] | 0x3000;
      }
      v1 = (unsigned int)(v3 + 196608) >> 16;
      v0 = ((signed __int16)v0 + 1) & 0xFFFF;
    }
    while ( (signed __int16)(v2 + 1) <= 7 );
  }
  return v6;
}
