int ma12_cond_if()
{
  int v0; // r4@1
  int v1; // r2@1
  int v2; // r1@1
  int v3; // r3@1
  int v5; // [sp+8h] [bp-4h]@0

  v0 = v202F7A4++;
  v1 = v202F7A4;
  v2 = *v202F7A4;
  v3 = v202F7A4++ + 1;
  if ( v2 == v202F7C4 )
    v202F7A4 = *(_BYTE *)(v1 + 1) + (*(_BYTE *)(v3 + 1) << 8) + (*(_BYTE *)(v3 + 2) << 16) + (*(_BYTE *)(v3 + 3) << 24);
  else
    v202F7A4 = v0 + 6;
  return v5;
}
