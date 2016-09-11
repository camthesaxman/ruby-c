int __fastcall sub_80B6DE8(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@3
  int v5; // [sp+0h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-4h]@6

  v1 = a1;
  v2 = memcpy(&v5, &gUnknown_083CE2D8, 8);
  if ( sub_80B6F44(v2) << 24 != *(_WORD *)(v1 + 46) << 24 )
  {
    *(_WORD *)(v1 + 38) = 0;
    *(_WORD *)(v1 + 48) = 0;
_080B6E3A:
    *(_WORD *)(v1 + 50) = 0;
    return v6;
  }
  *(_WORD *)(v1 + 38) = *((_WORD *)&v5 + *(_WORD *)(v1 + 48));
  v3 = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v3;
  if ( v3 > 8 )
  {
    *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 1) & 3;
    goto _080B6E3A;
  }
  return v6;
}
