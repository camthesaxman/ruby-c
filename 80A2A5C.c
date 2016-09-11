int __fastcall objc_8097BBC(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 50), *(_WORD *)(a1 + 46));
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 50), *(_WORD *)(v1 + 46));
  *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 50) + 8) & 0xFF;
  v2 = *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 46) += 1 + (v2 << 16 >> 18);
  *(_WORD *)(v1 + 52) = v2 + 1;
  if ( *(_WORD *)(v1 + 48) == 28 )
    *(_DWORD *)(v1 + 28) = sub_80A2AB8;
  else
    ++*(_WORD *)(v1 + 48);
  return v4;
}
