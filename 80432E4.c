int __fastcall sub_80432E4(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  _BYTE *v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 <= 20 )
  {
    *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 20) & 0xFF;
    *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 48), 1);
    if ( *(_WORD *)(v1 + 46) == 15 )
    {
      audio_play(23);
      v3 = StartSpriteAnim(v1, 1);
      sub_80435FC(v3);
    }
  }
  else
  {
    *(_DWORD *)(v1 + 28) = sub_804333C;
    *(_WORD *)(v1 + 46) = 0;
  }
  return v5;
}
