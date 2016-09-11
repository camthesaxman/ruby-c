int __fastcall sub_80769A4(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r1@1
  __int16 v3; // r0@1
  int v4; // r4@2
  unsigned int v5; // r0@2
  bool v6; // r5@4
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v3;
  if ( v3 != 1 )
  {
    v4 = *((_BYTE *)v2 + 12);
    v5 = (unsigned int)((battle_get_per_side_status(v4) << 24) - 0x1000000) >> 24;
    v6 = v5 > 1 && !(sub_8076BE0(v5) << 24);
    if ( b_side_obj__get_some_boolean(v4) << 24 )
      sub_8076464(v6);
    if ( (signed int)LOWORD(dword_3004B20[10 * v1 + 2]) > 1 && b_side_obj__get_some_boolean(v4 ^ 2) << 24 )
      sub_8076464(!v6);
    DestroyTask(v1);
  }
  return v8;
}
