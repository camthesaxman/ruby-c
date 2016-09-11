int __fastcall sub_804333C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v2;
  if ( v2 > 30 )
  {
    v3 = *(_WORD *)(v1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v3;
    if ( v3 <= 20 )
    {
      *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 20) & 0xFF;
      *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 48), 2);
      if ( *(_WORD *)(v1 + 46) == 15 )
      {
        audio_play(23);
        StartSpriteAnim(v1, 2);
      }
    }
    else
    {
      *(_DWORD *)(v1 + 28) = sub_80433A0;
      *(_WORD *)(v1 + 46) = 0;
      *(_WORD *)(v1 + 50) = 0;
    }
  }
  return v5;
}
