int __fastcall update_saveblock1_field_object_movement_behavior(unsigned __int8 a1, char a2)
{
  int v2; // r3@1
  signed int v3; // r2@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = 0;
  v3 = 33710932;
  while ( *(_BYTE *)v3 != a1 )
  {
    v3 += 24;
    if ( ++v2 > 63 )
      return v5;
  }
  *(_BYTE *)(v3 + 9) = a2;
  return v5;
}
