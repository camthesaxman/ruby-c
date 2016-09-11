int __fastcall sub_80DB92C(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  unsigned int v3; // r0@3
  unsigned int v4; // r4@3
  unsigned int v5; // r6@3
  char *v6; // r0@4
  char *v7; // r0@6
  int v9; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v4000052 = ((16 - *(_WORD *)(a1 + 52)) << 8) | *(_WORD *)(a1 + 52);
  v2 = *(_WORD *)(a1 + 52) - 1;
  *(_WORD *)(v1 + 52) = v2;
  if ( v2 == -1 )
  {
    if ( !(sub_8076BE0() << 24) )
    {
      v3 = battle_get_side_with_given_state(1u) << 24;
      v4 = v3 >> 24;
      v5 = v3 >> 24;
      if ( b_side_obj__get_some_boolean(v3 >> 24) << 24 )
      {
        v6 = &gSprites[68 * *(_BYTE *)(v4 + 33704928) + 62];
        *v6 &= 0xFBu;
      }
      if ( b_side_obj__get_some_boolean(v5 ^ 2) << 24 )
      {
        v7 = &gSprites[68 * *(_BYTE *)((v5 ^ 2) + 0x2024BE0) + 62];
        *v7 &= 0xFBu;
      }
    }
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_DWORD *)(v1 + 28) = sub_80DB9E4;
  }
  return v9;
}
