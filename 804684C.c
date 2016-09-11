int __fastcall sub_804684C(int a1)
{
  int v1; // r4@1
  signed int v2; // r5@1
  int v3; // r1@1
  int v4; // r2@4
  int v5; // r1@4
  int v6; // r0@5
  int v7; // r2@17
  int v8; // r1@17
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = *(_WORD *)(a1 + 52) & 0xFF;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *(_WORD *)(a1 + 38) = -(signed __int16)cosine(*(_WORD *)(a1 + 56), *(_WORD *)(a1 + 54));
      v7 = *(_WORD *)(v1 + 52);
      v8 = *(_WORD *)(v1 + 56) - 4 - (v7 << 16 >> 24);
      *(_WORD *)(v1 + 56) = v8;
      if ( v8 << 16 <= 0 )
      {
        *(_WORD *)(v1 + 56) = 0;
        *(_WORD *)(v1 + 52) = v7 & 0xFF00;
      }
    }
  }
  else
  {
    *(_WORD *)(a1 + 38) = -(signed __int16)cosine(*(_WORD *)(a1 + 56), *(_WORD *)(a1 + 54));
    v4 = *(_WORD *)(v1 + 52);
    v5 = *(_WORD *)(v1 + 56) + 4 + (v4 << 16 >> 24);
    *(_WORD *)(v1 + 56) = v5;
    if ( (signed __int16)v5 <= 63 )
      goto _08046902;
    *(_WORD *)(v1 + 54) -= 10;
    *(_WORD *)(v1 + 52) = v4 + 257;
    v6 = (v4 + 257) << 16 >> 24;
    if ( v6 == 4 )
      v2 = 1;
    if ( v6 == 2 )
    {
      audio_play(57);
      goto _08046902;
    }
    if ( v6 > 2 )
    {
      if ( v6 == 3 )
      {
        audio_play(58);
        goto _08046902;
      }
    }
    else if ( v6 == 1 )
    {
      audio_play(56);
      goto _08046902;
    }
    audio_play(59);
  }
_08046902:
  if ( v2 )
  {
    *(_WORD *)(v1 + 52) = 0;
    *(_WORD *)(v1 + 34) += cosine(64, 32);
    *(_WORD *)(v1 + 38) = 0;
    if ( *(_WORD *)(v1 + 60) )
    {
      *(_DWORD *)(v1 + 28) = sub_8046944;
      *(_WORD *)(v1 + 54) = 1;
      *(_WORD *)(v1 + 56) = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 28) = sub_8046C78;
    }
  }
  return v10;
}
