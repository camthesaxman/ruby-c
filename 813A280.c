int __fastcall sub_813A280(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  _BYTE *v3; // r4@1
  int v4; // r0@3
  int v5; // r1@4
  int v6; // r0@7
  int v7; // r1@9
  int v8; // r0@10
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  v3 = &byte_3004B28[40 * a1];
  if ( word_30017A0 & 0x40 )
  {
    if ( *(_WORD *)v3 )
    {
      audio_play(5u);
      v4 = (unsigned __int8)MoveMenuCursor(-1);
      *(_WORD *)v3 = v4;
      if ( !*((_WORD *)v3 + 9) )
      {
        v5 = (signed __int16)(*((_WORD *)v3 + 1) + v4);
        if ( (signed __int16)v5 != *((_WORD *)v3 + 2) )
          goto _0813A358;
_0813A34C:
        sub_813AD58(0xFFFF);
        return v10;
      }
      return v10;
    }
    if ( !*((_WORD *)v3 + 1) )
      return v10;
    audio_play(5u);
    --*((_WORD *)v3 + 1);
    sub_813AE0C(v1);
    v6 = *((_WORD *)v3 + 9);
_0813A394:
    if ( v6 )
      MoveMenuCursor(0);
    return v10;
  }
  if ( !(word_30017A0 & 0x80) )
  {
    if ( word_300179E & 4 )
    {
      if ( !*((_WORD *)v3 + 9) )
      {
        if ( *(_WORD *)v3 + *((_WORD *)v3 + 1) != *((_WORD *)v3 + 2) )
        {
          audio_play(5u);
          *((_WORD *)v3 + 9) = 1;
          *((_WORD *)v3 + 8) = *(_WORD *)v3 + *((_WORD *)v3 + 1);
          sub_813AD58(65527);
        }
        sub_813ABE8(v1);
        return v10;
      }
      audio_play(5u);
_0813A420:
      sub_813AA30(v1, 0);
      sub_813AE0C(v1);
      return v10;
    }
    if ( word_300179E & 1 )
    {
      audio_play(5u);
      if ( *((_WORD *)v3 + 9) )
        goto _0813A420;
      if ( *((_WORD *)v3 + 1) + *(_WORD *)v3 != *((_WORD *)v3 + 2) )
      {
        sub_813A4B4(v1);
        return v10;
      }
    }
    else
    {
      if ( !(word_300179E & 2) )
        return v10;
      audio_play(5u);
      if ( *((_WORD *)v3 + 9) )
      {
        sub_813AA30(v2, 1);
        sub_813AE0C(v2);
        return v10;
      }
      sub_8072DEC(*((_WORD *)v3 + 9));
    }
    sub_813A468(v1);
    return v10;
  }
  v7 = *(_WORD *)v3;
  if ( v7 == *((_WORD *)v3 + 4) - 1 )
  {
    if ( *((_WORD *)v3 + 1) + v7 == *((_WORD *)v3 + 2) )
      return v10;
    audio_play(5u);
    ++*((_WORD *)v3 + 1);
    sub_813AE0C(v1);
    v6 = *((_WORD *)v3 + 9);
    goto _0813A394;
  }
  audio_play(5u);
  v8 = (unsigned __int8)MoveMenuCursor(1);
  *(_WORD *)v3 = v8;
  if ( !*((_WORD *)v3 + 9) )
  {
    v5 = (signed __int16)(*((_WORD *)v3 + 1) + v8);
    if ( (signed __int16)v5 != *((_WORD *)v3 + 2) )
    {
_0813A358:
      sub_813AD58(*(_WORD *)(4 * v5 + 0x2025BCC));
      return v10;
    }
    goto _0813A34C;
  }
  return v10;
}
