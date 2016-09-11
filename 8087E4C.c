int __fastcall sub_8087E4C(int a1)
{
  int v1; // r6@1
  char *v2; // r2@2
  __int16 v3; // r4@2
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( sub_807D770() << 24 )
  {
    v2 = &gSprites[68 * v202E85C];
    v3 = v2[41];
    *((_WORD *)v2 + 19) = -(signed __int16)(-2 * v3 + *((_WORD *)v2 + 17) + v3 + gSpriteCoordOffsetY);
    BYTE1(dword_30048A0[9 * v202E85D]) &= 0xDFu;
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 10) = 8;
    *(_WORD *)(v1 + 12) = 1;
    *(_WORD *)(v1 + 36) = (unsigned int)(unsigned __int8)v2[66] >> 6;
    *(_WORD *)(v1 + 38) = (unsigned __int8)player_get_direction_lower_nybble();
    audio_play(0x2Du);
  }
  return v5;
}
