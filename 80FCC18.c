int __fastcall sub_80FCC18(unsigned __int8 a1)
{
  int v1; // r8@1
  int v2; // r2@1
  char *v3; // r3@2
  _WORD *v4; // r4@3
  unsigned int v5; // r5@3
  unsigned __int8 i; // r6@3
  char *v7; // ST00_4@5
  int v9; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( (unsigned __int8)byte_3005DF0 > 0u )
  {
    v3 = &byte_3005DF8;
    do
    {
      v4 = (_WORD *)(dword_3005DEC
                   + 2 * (unsigned __int8)byte_3005E04 * ((unsigned __int8)byte_3005DFC + v2)
                   + 2 * (unsigned __int8)byte_3005DE8);
      v5 = 0;
      for ( i = v2 + 1; v5 < (unsigned __int8)*v3; ++v4 )
      {
        if ( !(*v4 & 0x8000) )
        {
          v7 = v3;
          *v4 = sub_80FD3D0(v4, v1);
          v3 = v7;
        }
        v5 = (v5 + 1) & 0xFF;
      }
      v2 = i;
    }
    while ( i < (unsigned int)(unsigned __int8)byte_3005DF0 );
  }
  return v9;
}
