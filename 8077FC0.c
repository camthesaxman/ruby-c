int __fastcall sub_8077FC0(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  int v3; // r6@1
  int v4; // r2@2
  int v5; // r1@3
  int v6; // r0@4
  unsigned int *v7; // r1@4
  int v8; // r4@7

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = (unsigned __int8)sub_8077ABC(BYTE3(v1), 1u);
  if ( sub_8076BE0() << 24 )
    return v3;
  if ( battle_side_get_owner(v2) << 24 )
  {
    v5 = 4 * v2 + 33650688;
    if ( !*(_WORD *)(4 * v2 + 0x2017802) )
    {
      v6 = 25 * *(_WORD *)(2 * v2 + 0x2024A6A);
      v7 = (unsigned int *)&unk_30045C0;
_0807802A:
      v8 = GetMonData((int)&v7[v6], 11, v4) & 0xFFFF;
      goto _08078046;
    }
  }
  else
  {
    v5 = 4 * v2 + 33650688;
    if ( !*(_WORD *)(4 * v2 + 0x2017802) )
    {
      v6 = 25 * *(_WORD *)(2 * v2 + 0x2024A6A);
      v7 = dword_3004360;
      goto _0807802A;
    }
  }
  v8 = *(_WORD *)(v5 + 2);
_08078046:
  if ( battle_side_get_owner(v2) << 24 )
    v3 = (v3 - sub_8077DD8(v2, v8)) & 0xFF;
  return v3;
}
