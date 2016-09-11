int __fastcall do_boulder_dust(unsigned __int8 a1)
{
  int v1; // r6@1
  signed __int16 v2; // r5@1
  int *v3; // r1@8
  int v5; // [sp+0h] [bp-20h]@3
  int v6; // [sp+4h] [bp-1Ch]@3
  unsigned __int8 v7; // [sp+8h] [bp-18h]@3
  int v8; // [sp+Ch] [bp-14h]@3
  int v9; // [sp+1Ch] [bp-4h]@8

  v1 = a1;
  v2 = 0;
  v4000050 = 16194;
  v4000052 = 4096;
  v400000A = v400000A & 0xFC | 1;
  v400000B &= 0x3Fu;
  if ( !(sub_8076BE0() << 24) )
    v400000A = v400000A & 0xF3 | 4;
  word_30042C0 = 0;
  word_30041B4 = 0;
  v4000014 = 0;
  v4000016 = 0;
  sub_8078914((int)&v5);
  v8 = 0;
  v40000D4 = &v8;
  v40000D8 = v6;
  v40000DC = -2063596544;
  LZDecompressVram((int)&gBattleAnimBackgroundTilemap_SandstormBrew, v6);
  LZDecompressVram((int)&gBattleAnimBackgroundImage_SandstormBrew, v5);
  LoadCompressedPalette((int)&gBattleAnimSpritePalette_261, 16 * v7, 32);
  if ( sub_8076BE0() << 24 )
    sub_80763FC(v7, v6, 0, 0);
  if ( word_3004B00[0] && battle_side_get_owner(v202F7C8) << 24 )
    v2 = 1;
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 4) = v2;
  *v3 = (int)sub_80DD190;
  return v9;
}
