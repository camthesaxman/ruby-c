int __fastcall sub_811C4F0(int a1)
{
  int v1; // r4@1
  signed int v2; // r6@1
  __int16 v3; // r0@5
  int v4; // r2@5
  int v5; // r3@6
  int v6; // r2@7
  int v7; // r1@7
  int v8; // r3@7
  char *v9; // r1@7
  unsigned int v10; // r0@7
  char *v11; // r1@9
  unsigned int v12; // r0@9
  signed int v13; // r0@11

  v1 = a1;
  v200C000 = 0;
  v2 = 1;
  v200C018 -= 8;
  v200C01A += 8;
  if ( (signed int)*(_WORD *)(a1 + 16) <= 79 )
    *(_WORD *)(a1 + 16) += 2;
  if ( (signed int)*(_WORD *)(a1 + 16) > 80 )
    *(_WORD *)(a1 + 16) = 80;
  v3 = *(_WORD *)(a1 + 14) + 1;
  *(_WORD *)(v1 + 14) = v3;
  v4 = *(_WORD *)(v1 + 16);
  if ( v3 & 1 )
  {
    LOWORD(v5) = 0;
    v2 = 0;
    if ( !(v4 & 0x8000) )
    {
      do
      {
        v6 = (signed __int16)v5;
        v7 = 80 - (signed __int16)v5;
        v8 = ((signed __int16)v5 + 80) & 0xFFFF;
        v9 = (char *)word_3004DE0 + (v7 << 16 >> 15);
        v10 = *(_WORD *)v9;
        if ( v10 <= 0xF )
        {
          v2 = 1;
          *(_WORD *)v9 = v10 + 1;
        }
        v11 = (char *)word_3004DE0 + (v8 << 16 >> 15);
        v12 = *(_WORD *)v11;
        if ( v12 <= 0xF )
        {
          v2 = 1;
          *(__int16 *)((char *)word_3004DE0 + (v8 << 16 >> 15)) = v12 + 1;
        }
        v5 = (v6 + 1) & 0xFFFF;
        v13 = (signed __int16)(v6 + 1);
        v4 = *(_WORD *)(v1 + 16);
      }
      while ( v13 <= *(_WORD *)(v1 + 16) );
    }
  }
  if ( v4 == 80 && !v2 )
    ++*(_WORD *)(v1 + 8);
  ++v200C000;
  return 0;
}
