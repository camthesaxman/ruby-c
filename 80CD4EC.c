int __fastcall sub_80CD4EC(int a1)
{
  int v1; // r5@1
  signed int v2; // r0@3
  signed __int16 v3; // r6@9
  signed __int16 v4; // r7@9
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 6) )
  {
    v2 = *(_WORD *)(a1 + 6);
    if ( v2 == 2 )
    {
      v4 = -8;
_080CD54A:
      v3 = 8;
      goto _080CD54C;
    }
    if ( v2 > 2 )
    {
      if ( v2 != 3 )
        goto _080CD548;
      v4 = 8;
      v3 = -8;
    }
    else
    {
      if ( v2 != 1 )
      {
_080CD548:
        v4 = 8;
        goto _080CD54A;
      }
      v3 = -8;
      v4 = -8;
    }
_080CD54C:
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 46) = 6;
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + v4;
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + v3;
    *(_DWORD *)(v1 + 28) = sub_8078B34;
    oamt_set_x3A_32(v1, (int)sub_80CD654);
    return v6;
  }
  *(_WORD *)(a1 + 46) = 3;
  *(_WORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 50) = 0;
  *(_DWORD *)(a1 + 28) = sub_80782D8;
  oamt_set_x3A_32(a1, (int)sub_80CD5A8);
  return v6;
}
