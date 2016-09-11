int sub_80E8A7C()
{
  unsigned int v0; // r5@1
  char *v1; // r0@2
  unsigned int v2; // r5@3
  char *v3; // r0@4
  int v5; // [sp+0h] [bp-2Ch]@1
  signed int v6; // [sp+4h] [bp-28h]@1
  void **v7; // [sp+8h] [bp-24h]@1
  int v8; // [sp+Ch] [bp-20h]@1
  signed int v9; // [sp+10h] [bp-1Ch]@1
  signed int v10; // [sp+14h] [bp-18h]@1
  int v11; // [sp+28h] [bp-4h]@5

  v5 = 2;
  v6 = 138263776;
  v7 = &gSpriteAnimTable_83DBCF8;
  v8 = 0;
  v9 = 136194320;
  v10 = 135170937;
  v0 = 0;
  do
  {
    v1 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&v5, 0, (4718592 * v0 + 5505024) >> 16)];
    *(_DWORD *)(4 * v0 + 0x20010AC) = v1;
    *((_WORD *)v1 + 23) = v0;
    *(_BYTE *)(*(_DWORD *)(4 * v0 + 0x20010AC) + 63) = *(_BYTE *)(*(_DWORD *)(4 * v0 + 0x20010AC) + 63) & 0xFD | 2 * (v0 & 1);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 1 );
  LOWORD(v5) = 3;
  v7 = &gUnknown_083DBD10;
  v2 = 0;
  do
  {
    v3 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&v5, (2621440 * v2 + 9306112) >> 16, 88)];
    *(_DWORD *)(4 * v2 + 0x20010B4) = v3;
    *((_WORD *)v3 + 23) = v2;
    *(_BYTE *)(*(_DWORD *)(4 * v2 + 0x20010B4) + 1) = *(_BYTE *)(*(_DWORD *)(4 * v2 + 0x20010B4) + 1) & 0x3F | 0x40;
    *(_BYTE *)(*(_DWORD *)(4 * v2 + 0x20010B4) + 3) = *(_BYTE *)(*(_DWORD *)(4 * v2 + 0x20010B4) + 3) & 0x3F | 0x40;
    StartSpriteAnim(*(_DWORD *)(4 * v2 + 0x20010B4), v2);
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 1 );
  sub_80E8958(0);
  sub_80E88F0();
  return v11;
}
