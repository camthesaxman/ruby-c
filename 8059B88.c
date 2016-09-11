int __fastcall sub_8059B88(char a1)
{
  char v1; // r4@1
  char *v2; // r1@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1 & 1;
  BYTE1(dword_30048A0[9 * v202E85D]) = BYTE1(dword_30048A0[9 * v202E85D]) & 0xDF | 32 * (a1 & 1);
  if ( TestPlayerAvatarFlags(8u) << 24 )
  {
    v2 = &gSprites[68 * BYTE2(dword_30048A0[9 * v202E85D + 6]) + 62];
    *v2 = *v2 & 0xFB | 4 * v1;
  }
  return v4;
}
