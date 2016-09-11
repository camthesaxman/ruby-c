int __fastcall sub_80F0A74(unsigned __int16 a1, char a2)
{
  unsigned int v2; // r6@1
  char v3; // r7@1
  int v4; // r7@1
  int v6; // [sp+24h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  sub_80F700C(33589128, a1);
  v4 = v3 & 0x1F;
  BasicInitMenuWindow((int)&gWindowConfig_81E70D4);
  sub_80729D8(33589128, 97, 8 * v4, 0);
  if ( v2 < v200D158 && *(_BYTE *)(8 * v2 + 0x200CEED) )
    sub_8095C8C(100724736, 0x1Du, v4, (int)&gUnknown_083E039C, 0, 0, 1, 2u, 1u);
  else
    sub_8095C8C(100724736, 0x1Du, v4, (int)&gUnknown_083E03A0, 0, 0, 1, 2u, 1u);
  return v6;
}
