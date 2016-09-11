int __fastcall sub_80518CC(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@1
  __int16 v3; // r0@7
  __int16 v4; // r0@9
  __int16 v5; // r0@11
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    v4 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v4;
    if ( v4 > 20 )
      ++*(_WORD *)(v1 + 46);
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 )
    {
      v5 = *(_WORD *)(v1 + 48) + 4;
      *(_WORD *)(v1 + 48) = v5;
      if ( v5 > 176 )
      {
        ++*(_BYTE *)dword_3004854;
        DestroySprite(v1);
      }
    }
  }
  else if ( !v2 )
  {
    v3 = *(_WORD *)(v1 + 48) + 8;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 > 92 )
    {
      *(_WORD *)(v1 + 48) = 92;
      ++*(_WORD *)(v1 + 46);
      audio_play(21);
    }
  }
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 48);
  return v7;
}
