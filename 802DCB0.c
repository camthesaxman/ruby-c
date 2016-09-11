int __fastcall sub_802DCB0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r0@1
  int v3; // r4@1
  int v4; // r6@1
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 12);
  v4 = *((_BYTE *)v2 + 8);
  if ( (unsigned __int8)battle_type_is_double(v2) == 1 && v4 == *(_WORD *)(2 * (v3 ^ 2) + 0x2024A6A) )
    v3 ^= 2u;
  move_anim_start_t4(v3, v3);
  dword_3004B20[10 * v1] = (int)sub_802DD10;
  return v6;
}
