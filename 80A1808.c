int __fastcall sub_80A1808(int a1, int a2, int a3)
{
  unsigned __int16 v3; // r6@1
  int v4; // r8@1
  char *v5; // r7@1

  v3 = GetMonData(a1, 65, a3);
  v4 = (unsigned __int8)CreateSprite(33705612, 40, 64);
  v5 = &gSprites[68 * v4];
  FreeSpriteOamMatrix((int)v5);
  *((_WORD *)v5 + 23) = v3;
  dword_2020020[17 * v4] = (int)sub_80A1888;
  if ( sub_8040A3C(v3) << 24 )
    v5[63] &= 0xFEu;
  else
    v5[63] |= 1u;
  return v4;
}
