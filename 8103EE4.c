int __fastcall sub_8103EE4(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@2
  __int16 v3; // r1@3
  signed int v4; // r0@3
  signed int v5; // r4@3
  __int16 v6; // r5@3
  int v7; // r3@3
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 48) )
  {
    v2 = *(_WORD *)(a1 + 52) - 1;
    *(_WORD *)(v1 + 52) = v2;
    if ( v2 == -1 )
    {
      *(_WORD *)(v1 + 60) = 0;
      *(_WORD *)(v1 + 52) = 1;
      v3 = *(_WORD *)(v1 + 56);
      LOWORD(v4) = v3 + *(_WORD *)(v1 + 54);
      *(_WORD *)(v1 + 54) = v4;
      v5 = 4;
      v6 = *(_WORD *)(v1 + 50);
      v7 = *(_WORD *)(v1 + 50);
      if ( *(_WORD *)(v1 + 50) )
        v5 = 8;
      v4 = (signed __int16)v4;
      if ( (signed __int16)v4 > 0 )
      {
        if ( v4 >= v5 )
          *(_WORD *)(v1 + 56) = -v3;
        goto _08103F40;
      }
      *(_WORD *)(v1 + 60) = 1;
      *(_WORD *)(v1 + 56) = -v3;
      if ( v7 )
      {
        *(_WORD *)(v1 + 50) = v6 - 1;
_08103F40:
        if ( *(_WORD *)(v1 + 50) )
          *(_WORD *)(v1 + 52) *= 2;
        goto _08103F4E;
      }
    }
_08103F4E:
    sub_8085D08(gUnknown_083EDD30[*(_WORD *)(v1 + 46)], *(_BYTE *)(v1 + 54), *(_BYTE *)(v1 + 54), *(_BYTE *)(v1 + 54));
  }
  return v9;
}
