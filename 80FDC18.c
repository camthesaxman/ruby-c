int __fastcall sub_80FDC18(int a1)
{
  unsigned int v1; // r9@1
  unsigned int i; // r6@3
  int v3; // r3@5
  _WORD *v4; // r4@6
  unsigned __int8 v5; // r6@6
  char *v6; // r2@6
  unsigned __int8 v7; // r10@6
  int v8; // r7@8
  int v9; // r5@9
  unsigned int v10; // r3@9
  __int16 v11; // r0@11
  _WORD *v12; // r1@14
  int v14; // [sp+1Ch] [bp-4h]@0

  v1 = 223;
  if ( !(a1 << 24) )
    v1 = 255;
  for ( i = 0; i < v1; i = (i + 1) & 0xFF )
    *(_WORD *)(2 * i + dword_3005E08) = 0;
  *(_WORD *)(2 * v1 + dword_3005E08) = 15855;
  v3 = 0;
  if ( (unsigned __int8)byte_3005DF0 > 0u )
  {
    do
    {
      v4 = (_WORD *)(dword_3005DEC
                   + 2 * (unsigned __int8)byte_3005E04 * ((unsigned __int8)byte_3005DFC + v3)
                   + 2 * (unsigned __int8)byte_3005DE8);
      v5 = 0;
      v6 = &byte_3005DF8;
      v7 = v3 + 1;
      if ( (unsigned __int8)byte_3005DF8 > 0u )
      {
        do
        {
          if ( *v4 & 0x8000 )
          {
            *v4 = word_3005E0C;
            ++v5;
            v8 = (int)(v4 + 1);
          }
          else
          {
            v9 = sub_80FE038(v4) & 0xFFFF;
            v10 = 1;
            ++v5;
            v8 = (int)(v4 + 1);
            if ( v1 > 1 )
            {
              if ( *(_WORD *)(dword_3005E08 + 2) )
              {
                while ( *(_WORD *)(2 * v10 + dword_3005E08) != v9 )
                {
                  v10 = (v10 + 1) & 0xFF;
                  if ( v10 >= v1 )
                    goto _080FDD34;
                  v12 = (_WORD *)(2 * v10 + dword_3005E08);
                  if ( !*v12 )
                  {
                    *v12 = v9;
                    break;
                  }
                }
                v11 = word_3005E0C + v10;
              }
              else
              {
                *(_WORD *)(dword_3005E08 + 2) = v9;
                v11 = word_3005E0C + 1;
              }
              *v4 = v11;
            }
_080FDD34:
            v6 = &byte_3005DF8;
            if ( v10 == v1 )
              *v4 = v1;
          }
          v4 = (_WORD *)v8;
        }
        while ( v5 < (unsigned int)(unsigned __int8)*v6 );
      }
      v3 = v7;
    }
    while ( v7 < (unsigned int)(unsigned __int8)byte_3005DF0 );
  }
  return v14;
}
