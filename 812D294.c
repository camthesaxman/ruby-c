int __fastcall sub_812D294(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@3
  _BYTE *v3; // r2@5
  int v4; // r0@5
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
    sub_80787B0(a1, 0);
  v2 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 <= 39 )
  {
    if ( *(_WORD *)(v1 + 46) & 1 )
    {
      v3 = (_BYTE *)(v1 + 62);
      LOBYTE(v4) = *(_BYTE *)(v1 + 62) & 0xFB;
    }
    else
    {
      v3 = (_BYTE *)(v1 + 62);
      v4 = *(_BYTE *)(v1 + 62) | 4;
    }
    *v3 = v4;
  }
  if ( (signed int)*(_WORD *)(v1 + 46) > 30 )
    *(_BYTE *)(v1 + 62) &= 0xFBu;
  if ( *(_WORD *)(v1 + 46) == 61 )
  {
    oamt_set_x3A_32(v1, (int)move_anim_8072740);
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 34) += *(_WORD *)(v1 + 38);
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 46) = 20;
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
    *(_DWORD *)(v1 + 28) = sub_8078B34;
  }
  return v6;
}
