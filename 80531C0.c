int __fastcall update_saveblock1_field_object_coords(unsigned __int8 a1, __int16 a2, __int16 a3)
{
  __int16 v3; // r4@1
  int v4; // r1@1
  signed int v5; // r3@1
  int v7; // [sp+8h] [bp-4h]@0

  v3 = a2;
  v4 = 0;
  v5 = 33710932;
  while ( *(_BYTE *)v5 != a1 )
  {
    v5 += 24;
    if ( ++v4 > 63 )
      return v7;
  }
  *(_WORD *)(v5 + 4) = v3;
  *(_WORD *)(v5 + 6) = a3;
  return v7;
}
