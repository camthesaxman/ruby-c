signed int __fastcall sub_8078874(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r2@6
  int v5; // r0@7
  unsigned int *v6; // r1@7

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( !(sub_8076BE0() << 24) )
  {
    if ( *(_BYTE *)(v2 + 33704562) == 255 )
      return 0;
    if ( battle_side_get_owner(v2) << 24 )
    {
      v5 = 25 * *(_WORD *)(2 * v2 + 0x2024A6A);
      v6 = (unsigned int *)&unk_30045C0;
    }
    else
    {
      v5 = 25 * *(_WORD *)(2 * v3 + 0x2024A6A);
      v6 = dword_3004360;
    }
    if ( !GetMonData((int)&v6[v5], 57, v4) )
      return 0;
    return 1;
  }
  if ( v202F7C8 == v2 || v202F7C9 == v2 )
    return 1;
  return 0;
}
