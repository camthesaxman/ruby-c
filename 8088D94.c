int __fastcall sub_8088D94(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8088FA4(*(_BYTE *)(a1 + 10)) << 24 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 12) = 16;
    SetPlayerAvatarTransitionFlags(1u);
    FieldObjectSetSpecialAnim(&dword_30048A0[9 * v202E85D], 2);
  }
  return v3;
}
