signed int __fastcall sub_8079B10(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int v2; // r5@1
  int v3; // r1@4
  int v4; // r2@5
  int v6; // r1@11

  v1 = 0;
  v2 = 4 * *(_WORD *)&gSprites[68 * a1 + 46] & 0x3FF;
  while ( *(_BYTE *)(v1 + 33704928) != a1 )
  {
    v1 = (v1 + 1) & 0xFFFF;
    if ( v1 > 3 )
      return 64;
  }
  if ( sub_8076BE0() << 24 )
  {
    v3 = v2019348;
    return gMonBackPicCoords[4 * v3 + 1];
  }
  if ( !(battle_side_get_owner(v1) << 24) )
  {
    if ( *(_WORD *)(v2 + 33650690) )
      v3 = *(_WORD *)(v2 + 33650690);
    else
      v3 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v1 + 0x2024A6A)], 11, v4) & 0xFFFF;
    return gMonBackPicCoords[4 * v3 + 1];
  }
  if ( *(_WORD *)(v2 + 33650690) )
    v6 = *(_WORD *)(v2 + 33650690);
  else
    v6 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v1 + 0x2024A6A), 11, v4) & 0xFFFF;
  return gMonFrontPicCoords[4 * v6 + 1];
}
