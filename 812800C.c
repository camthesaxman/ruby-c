int __fastcall sub_812800C(int a1, int a2)
{
  int v2; // r4@1
  __int16 v3; // r1@1
  __int16 v4; // r2@2
  unsigned int v5; // r5@4
  __int16 v7; // [sp+0h] [bp-1Ch]@1
  __int16 v8; // [sp+2h] [bp-1Ah]@1
  int v9; // [sp+18h] [bp-4h]@8

  v2 = a2;
  v7 = *(_WORD *)(a1 + 16);
  v3 = *(_WORD *)(a1 + 18);
  v8 = *(_WORD *)(a1 + 18);
  if ( !*(_WORD *)(v2 + 38) )
  {
    v4 = v7;
    if ( v7 != *(_WORD *)(v2 + 58) || v3 != *(_WORD *)(v2 + 60) )
    {
      *(_WORD *)(v2 + 56) = 0;
      *(_WORD *)(v2 + 58) = v4;
      *(_WORD *)(v2 + 60) = v8;
      v5 = 1;
      while ( 1 )
      {
        MoveCoords(v5, &v7, &v8);
        if ( (unsigned __int8)MapGridGetZCoordAt(v7, v8) == 3 )
          break;
        v5 = (v5 + 1) & 0xFF;
        v7 = *(_WORD *)(v2 + 58);
        v8 = *(_WORD *)(v2 + 60);
        if ( v5 > 4 )
          return v9;
      }
      ++*(_WORD *)(v2 + 56);
    }
  }
  return v9;
}
