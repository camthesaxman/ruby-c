int __fastcall sub_80D96B8(int a1)
{
  int v1; // r5@1
  unsigned __int8 *v2; // r4@2
  __int16 v3; // r0@2
  signed __int16 v4; // r0@4
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
  {
    v2 = (unsigned __int8 *)33748937;
    v3 = (unsigned __int8)sub_8077ABC(v202F7C9, 0) + word_3004B04;
  }
  else
  {
    v2 = (unsigned __int8 *)33748936;
    v3 = (unsigned __int8)sub_8077ABC(v202F7C8, 0) + word_3004B04;
  }
  *(_WORD *)(v1 + 32) = v3;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(*v2, 1u) + word_3004B06;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 16 * word_3004B02) & 0x3FF;
  *(_WORD *)(v1 + 46) = 0;
  v4 = word_3004B02;
  if ( word_3004B02 == 1 )
  {
    *(_WORD *)(v1 + 58) = 3;
    *(_WORD *)(v1 + 60) = -3;
    goto _080D9792;
  }
  if ( word_3004B02 > 1 )
  {
    if ( word_3004B02 != 2 )
    {
      if ( word_3004B02 != 3 )
        goto _080D978A;
      goto _080D9784;
    }
    *(_WORD *)(v1 + 58) = -3;
    *(_WORD *)(v1 + 60) = 3;
_080D9792:
    *(_DWORD *)(v1 + 28) = sub_80D97A0;
    return v6;
  }
  if ( !word_3004B02 )
  {
    v4 = -3;
_080D9784:
    *(_WORD *)(v1 + 58) = v4;
    *(_WORD *)(v1 + 60) = v4;
    goto _080D9792;
  }
_080D978A:
  move_anim_8072740(v1);
  return v6;
}
