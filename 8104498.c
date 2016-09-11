int __fastcall sub_8104498(int a1)
{
  int v1; // r7@1
  int v2; // r0@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-2Ch]@1
  char v6[8]; // [sp+4h] [bp-28h]@1
  char v7; // [sp+Ch] [bp-20h]@1
  int v8; // [sp+28h] [bp-4h]@3

  v1 = a1;
  memcpy(&v5, (const char *)&gUnknown_083ECC1C, 4);
  memcpy(v6, (const char *)&gUnknown_083ECC20, 8);
  memcpy(&v7, (const char *)&gUnknown_083ECC28, 8);
  sub_8102D28(*(_WORD *)(v1 + 16) << 16 >> 24);
  v2 = *(_WORD *)(v1 + 16) - 4;
  *(_WORD *)(v1 + 16) = v2;
  v3 = 4 - (v2 << 16 >> 24);
  sub_8105688(*(_WORD *)&v6[2 * v3]);
  sub_81057E8(*((_WORD *)&v7 + v3));
  StartSpriteAnimIfDifferent((int)&gSprites[68 * v200003F], *((_BYTE *)&v5 + v3));
  if ( (signed int)*(_WORD *)(v1 + 16) <= 256 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 16) = 256;
    *(_WORD *)(v1 + 18) = 0;
  }
  return v8;
}
