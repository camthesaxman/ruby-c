_BYTE *__fastcall sub_80EB544(_BYTE *a1, _WORD *a2, int a3, unsigned __int16 a4)
{
  _BYTE *v4; // r4@1
  _WORD *v5; // r5@1
  unsigned int v6; // r10@1
  unsigned int v7; // r8@1
  int v8; // r7@1
  unsigned int v9; // r6@2
  unsigned __int16 v10; // r9@2
  signed int v11; // r2@3
  signed int v12; // ST00_4@4
  int v13; // r1@7
  _BYTE *v14; // r4@7
  char v15; // r0@8
  _BYTE *v16; // r4@11

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = (unsigned int)((a3 << 16) - 0x10000) >> 16;
  v8 = 0;
  if ( a4 > 0u )
  {
    do
    {
      v9 = 0;
      v10 = v8 + 1;
      if ( v7 > 0 )
      {
        v11 = 0xFFFF;
        do
        {
          v12 = v11;
          v4 = sub_80EB3FC(v4, *v5);
          v11 = v12;
          if ( *v5 != v12 )
            *v4++ = 0;
          ++v5;
          v9 = (v9 + 1) & 0xFFFF;
        }
        while ( v9 < v7 );
      }
      v13 = *v5;
      ++v5;
      v14 = sub_80EB3FC(v4, v13);
      if ( v8 )
        v15 = -6;
      else
        v15 = -2;
      *v14 = v15;
      v4 = v14 + 1;
      v8 = (unsigned __int16)(v8 + 1);
    }
    while ( v10 < v6 );
  }
  v16 = v4 - 1;
  *v16 = -1;
  return v16;
}
