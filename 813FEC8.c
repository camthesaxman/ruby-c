int __fastcall sub_813FEC8(int a1)
{
  int v1; // r7@1
  int v2; // r4@1
  int v3; // r6@1
  int *v4; // r5@1
  __int16 v5; // r0@1
  signed int v6; // r0@3
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(v202F7C9 + 0x2024BE0);
  v3 = *(_WORD *)(a1 + 56) & 0xFF;
  v4 = &dword_3004B20[10 * v3];
  v5 = *((_WORD *)v4 + 5) + 1;
  *((_WORD *)v4 + 5) = v5;
  if ( v5 == 11 )
    audio_play(0x3Cu);
  v6 = *((_WORD *)v4 + 4);
  if ( v6 == 1 )
  {
    *((_WORD *)v4 + 14) += 32;
    obj_id_set_rotscale(v2, *((_WORD *)v4 + 14), *((_WORD *)v4 + 14), 0);
    *((_WORD *)v4 + 7) += *((_WORD *)v4 + 6);
    *(_WORD *)&gSprites[68 * v2 + 38] = -*((_WORD *)v4 + 7) >> 8;
    if ( (signed int)*((_WORD *)v4 + 14) <= 1151 )
      return v8;
    goto _0813FFCE;
  }
  if ( v6 <= 1 )
  {
    if ( *((_WORD *)v4 + 4) )
      goto _0813FFDC;
    sub_8078E70(v2, 0);
    *((_WORD *)v4 + 14) = 256;
    dword_3005F0C = 28;
    word_3005F14 = *(_WORD *)&gSprites[68 * v2 + 38]
                 + *(_WORD *)&gSprites[68 * v2 + 34]
                 - (*(_WORD *)(v1 + 38)
                  + *(_WORD *)(v1 + 34));
    word_3005F10 = ((unsigned int)(unsigned __int16)word_3005F14 << 8) / 0x1C;
    *((_WORD *)v4 + 6) = word_3005F10;
_0813FFCE:
    ++*((_WORD *)v4 + 4);
    return v8;
  }
  if ( v6 == 2 )
  {
    sub_8078F40(v2);
    gSprites[68 * v2 + 62] |= 4u;
    goto _0813FFCE;
  }
_0813FFDC:
  if ( (signed int)HIWORD(dword_3004B20[10 * v3 + 2]) > 10 )
  {
    DestroyTask(v3);
    StartSpriteAnim(v1, 2);
    *(_WORD *)(v1 + 56) = 0;
    *(_DWORD *)(v1 + 28) = sub_8140014;
  }
  return v8;
}
