int __fastcall sub_80FC9E4(unsigned __int8 a1)
{
  int v1; // r2@1
  _WORD *v2; // r3@2
  unsigned int v3; // r5@2
  unsigned __int8 i; // r7@2
  unsigned int v5; // r2@4
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = 0;
  if ( (unsigned __int8)byte_3005DF0 > 0u )
  {
    do
    {
      v2 = (_WORD *)(dword_3005DEC
                   + 2 * ((unsigned __int8)byte_3005DFC + v1) * (unsigned __int8)byte_3005E04
                   + 2 * (unsigned __int8)byte_3005DE8);
      v3 = 0;
      for ( i = v1 + 1; v3 < (unsigned __int8)byte_3005DF8; ++v2 )
      {
        if ( !(*v2 & 0x8000) )
        {
          LOWORD(v5) = *v2 & 0x1F;
          if ( (*v2 & 0x1F) > 31 - a1 )
            v5 = (31 - ((unsigned int)a1 >> 1)) & 0xFF;
          *v2 = ((_WORD)v5 << 10) | 32 * v5 | v5;
        }
        v3 = (v3 + 1) & 0xFF;
      }
      v1 = i;
    }
    while ( i < (unsigned int)(unsigned __int8)byte_3005DF0 );
  }
  return v7;
}
