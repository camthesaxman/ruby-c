int sub_8047D58()
{
  unsigned __int16 v0; // r0@1
  signed int v1; // r1@1
  signed int v2; // r5@3
  char *v3; // r8@3
  int v4; // r4@3
  int v5; // r0@5
  unsigned __int16 v6; // r0@5
  signed int v7; // r1@5
  signed int v8; // r5@7
  char *v9; // r8@7
  int v10; // r4@7
  signed int v12; // [sp+0h] [bp-30h]@4
  signed int v13; // [sp+4h] [bp-2Ch]@4
  signed int v14; // [sp+8h] [bp-28h]@4
  int v15; // [sp+Ch] [bp-24h]@4
  signed int v16; // [sp+10h] [bp-20h]@4
  signed int v17; // [sp+14h] [bp-1Ch]@4
  int v18; // [sp+2Ch] [bp-4h]@9

  v0 = StringLength((_BYTE *)0x2024EA4);
  v1 = 0;
  if ( v0 > 5u )
    v1 = 1;
  v2 = 0;
  v3 = &gTradeUnknownSpriteCoords[4 * v1 + 1];
  v4 = (unsigned __int8)gTradeUnknownSpriteCoords[4 * v1] << 16;
  do
  {
    v12 = 322765000;
    v13 = 136364012;
    v14 = 136364068;
    v15 = 0;
    v16 = 136194320;
    v17 = 134222353;
    LOWORD(v12) = v2 + 200;
    CreateSprite((int)&v12, SHIWORD(v4), (unsigned __int8)*v3);
    v4 += 0x200000;
    ++v2;
  }
  while ( v2 <= 2 );
  v5 = GetMultiplayerId();
  v6 = StringLength((_BYTE *)&unk_3002978 + 28 * (((v5 << 24) ^ 0x1000000u) >> 24));
  v7 = 0;
  if ( v6 > 5u )
    v7 = 1;
  v8 = 0;
  v9 = &gTradeUnknownSpriteCoords[4 * v7 + 3];
  v10 = (unsigned __int8)gTradeUnknownSpriteCoords[4 * v7 + 2] << 16;
  do
  {
    v12 = 322765000;
    v13 = 136364012;
    v14 = 136364068;
    v15 = 0;
    v16 = 136194320;
    v17 = 134222353;
    LOWORD(v12) = v8 + 203;
    CreateSprite((int)&v12, SHIWORD(v10), (unsigned __int8)*v9);
    v10 += 0x200000;
    ++v8;
  }
  while ( v8 <= 2 );
  nullsub_5(5, 0);
  return v18;
}
