int __fastcall sub_812D724(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r2@5
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = *(_WORD *)(v1 + 48);
      *(_WORD *)(v1 + 38) -= v3 << 16 >> 24;
      *(_WORD *)(v1 + 48) = v3 - 96;
      if ( *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) > *(_WORD *)(v1 + 50) )
        move_anim_8072740(v1);
    }
  }
  else
  {
    sub_80787B0(v1, 0);
    *(_WORD *)(v1 + 48) = 2304;
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
    ++*(_WORD *)(v1 + 46);
  }
  return v5;
}
