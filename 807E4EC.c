int __fastcall sub_807E4EC(int a1)
{
  int v1; // r7@1
  __int16 v2; // r6@3
  __int16 v3; // r0@3
  __int16 v4; // r4@3
  int v5; // r0@3
  int v6; // r0@3
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 48) )
    *(_WORD *)(a1 + 48) = 361;
  *(_WORD *)(a1 + 48) = ((unsigned int)(2 * (1103515245 * *(_WORD *)(a1 + 48) + 12345)) >> 17) % 0x258;
  v2 = gUnknown_0839AAC4[2 * v202FEC4];
  v3 = *(_WORD *)(a1 + 48) % 30;
  v4 = v3;
  *(_WORD *)(v1 + 50) = 8 * v3;
  v5 = *(_WORD *)(v1 + 48) / 30;
  v4 <<= 7;
  *(_WORD *)(v1 + 50) = v4;
  v6 = v5 << 16 >> 9;
  *(_WORD *)(v1 + 52) = v6;
  *(_WORD *)(v1 + 50) = v4 - gUnknown_0839AABC[2 * v202FEC4] * v2;
  *(_WORD *)(v1 + 52) = v6 - gUnknown_0839AABC[2 * v202FEC4 + 1] * v2;
  StartSpriteAnim(v1, 0);
  *(_WORD *)(v1 + 54) = 0;
  *(_BYTE *)(v1 + 62) &= 0xFDu;
  *(_WORD *)(v1 + 46) = v2;
  return v8;
}
