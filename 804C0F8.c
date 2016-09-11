int __fastcall sub_804C0F8(int a1)
{
  int v1; // r2@2
  _WORD *v2; // r1@3
  int v3; // r12@4
  int v5; // [sp+0h] [bp-4h]@0

  if ( a1 << 24 )
  {
    v3 = dword_3004828;
    if ( (signed int)*(_WORD *)(dword_3004828 + 270) > -64 )
    {
      --*(_WORD *)(dword_3004828 + 270);
      v2 = (_WORD *)(v3 + 284);
      goto _0804C154;
    }
  }
  else
  {
    v1 = dword_3004828;
    if ( (signed int)*(_WORD *)(dword_3004828 + 272) <= 265 )
    {
      ++*(_WORD *)(dword_3004828 + 270);
      v2 = (_WORD *)(v1 + 284);
_0804C154:
      *v2 += 64;
      return v5;
    }
  }
  return v5;
}
