int __fastcall sub_81278D8(int a1)
{
  int v1; // r4@1
  int *v2; // r5@2
  char *v3; // r0@4
  unsigned __int8 v5; // [sp+0h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-4h]@7

  v1 = a1;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(
           *(_BYTE *)(a1 + 46),
           *(_WORD *)(v1 + 48) & 0xFF,
           *(_WORD *)(v1 + 50) & 0xFF,
           &v5) << 24)
    && (v2 = &dword_30048A0[9 * v5], *((_BYTE *)v2 + 2) & 8) )
  {
    v3 = &gSprites[68 * *((_BYTE *)v2 + 4)];
    *(_WORD *)(v1 + 32) = *((_WORD *)v3 + 16);
    *(_WORD *)(v1 + 34) = *((_WORD *)v3 + 17);
    *(_BYTE *)(v1 + 67) = v3[67];
    sub_806487C(v1, 0);
    if ( v2[4] != *(_DWORD *)(v1 + 52) )
    {
      *(_WORD *)(v1 + 52) = *((_WORD *)v2 + 8);
      *(_WORD *)(v1 + 54) = *((_WORD *)v2 + 9);
      if ( !(*(_BYTE *)(v1 + 62) & 4) )
        audio_play(0x46u);
    }
  }
  else
  {
    FieldEffectStop(v1, 0x22u);
  }
  return v6;
}
