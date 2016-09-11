int __fastcall AnimateSprite(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (_BYTE *)(a1 + 63);
  call_via_r1(a1, *(void **)((char *)&sAnimFuncs + (*(_BYTE *)(a1 + 63) & 4)));
  if ( !gAffineAnimsDisabled )
    call_via_r1(v1, *(&sAffineAnimFuncs + ((unsigned int)*v2 << 28 >> 31)));
  return v4;
}
