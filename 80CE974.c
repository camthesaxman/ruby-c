int __fastcall sub_80CE974(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int *v3; // r0@4
  __int16 v4; // r0@5
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52) + 1;
  *(_WORD *)(v1 + 52) = v2;
  if ( v2 > 1 )
  {
    *(_WORD *)(v1 + 52) = 0;
    ++*(_WORD *)(v1 + 46);
  }
  if ( (signed int)*(_WORD *)(v1 + 46) <= 64 )
  {
    *(_WORD *)(v1 + 54) = gSineTable[*(_WORD *)(v1 + 46)] / 6;
    v4 = gSineTable[*(_WORD *)(v1 + 46)] / 13;
    *(_WORD *)(v1 + 56) = v4;
    *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + v4) & 0xFF;
    *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 48), *(_WORD *)(v1 + 54));
  }
  else
  {
    v3 = &dword_3004B20[10 * *(_WORD *)(v1 + 50)];
    --*((_WORD *)v3 + 7);
    obj_delete_but_dont_free_vram(v1);
  }
  return v6;
}
