int __fastcall sub_8045998(unsigned __int8 a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@1
  _BYTE *v3; // r0@1
  char *v4; // r5@1
  int v5; // r4@1
  int v6; // r7@1
  signed int v7; // r4@1
  int v9; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = StringCopy((_BYTE *)0x20238CC, &gUnknown_08400DE6);
  v3 = (_BYTE *)sub_8003504((int)v2, v2038808, 0xAu);
  StringAppend(v3, &gUnknown_08400DF0);
  v4 = &gSprites[68 * v1];
  v5 = 384 * (unsigned __int8)battle_get_per_side_status(*((_WORD *)v4 + 29) & 0xFF);
  sub_80034D4(v5 + 33555744, 33700044);
  v6 = v5 + 33555776;
  v7 = 6;
  do
  {
    CpuSet(v6, 32 * ((*((_WORD *)v4 + 2) & 0x3FF) + v7 % 8 + 24 + (v7 / 8 << 6)) + 100728832, 67108872);
    v6 += 64;
    ++v7;
  }
  while ( v7 < 11 );
  return v9;
}
