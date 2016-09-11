int __fastcall sub_80E82BC(int a1)
{
  int v1; // r3@1
  __int16 v2; // r1@2
  int v3; // r5@3
  unsigned int v4; // r4@3
  int v5; // r7@3
  unsigned int i; // r1@3
  int v7; // r0@6
  __int16 v8; // r0@9
  int v9; // r0@10
  int v11; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 48) )
  {
    v2 = v2001087;
    if ( v2001087 )
    {
      v3 = v2001086 & 0xFFFF;
      v4 = v2001085 & 0xFFFF;
      v5 = 0;
      for ( i = 0; i < v4; i = (i + 1) & 0xFFFF )
        v5 = (v5 + *(_BYTE *)(i + 2 * v3 + 33558668)) & 0xFFFF;
      if ( v3 == v2001084 )
      {
        *(_WORD *)(a1 + 34) = 96;
        v7 = 7 * v4 + 3;
      }
      else
      {
        *(_WORD *)(a1 + 34) = 8 * (2 * v2001086 + v200108A) + 8;
        v7 = v2001088 + v5 + 11 * v4;
      }
      *(_WORD *)(v1 + 32) = 8 * v7 + 4;
      *(_WORD *)(v1 + 36) = -6;
      *(_WORD *)(v1 + 46) = 0;
    }
    else
    {
      v8 = *(_WORD *)(a1 + 46) + 1;
      *(_WORD *)(v1 + 46) = v8;
      if ( v8 > 2 )
      {
        *(_WORD *)(v1 + 46) = v2;
        v9 = *(_WORD *)(v1 + 36) + 1;
        *(_WORD *)(v1 + 36) = v9;
        if ( v9 << 16 > 0 )
          *(_WORD *)(v1 + 36) = -6;
      }
    }
  }
  return v11;
}
