int __fastcall sub_80D94CC(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 == -1 )
  {
    *(_WORD *)(v1 + 46) = 6;
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
    *(_DWORD *)(v1 + 28) = sub_8078B34;
    oamt_set_x3A_32(v1, (int)sub_80D9524);
  }
  return v4;
}
