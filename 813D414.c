int __fastcall sub_813D414(int a1)
{
  int v1; // r1@1
  int v2; // r0@2
  int v3; // r2@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) == 2 )
  {
    *(_DWORD *)(a1 + 28) = sub_813D484;
  }
  else
  {
    v2 = *(_WORD *)(a1 + 54) + 8;
    *(_WORD *)(v1 + 54) = v2;
    v3 = (*(_WORD *)((char *)gSineTable + (2 * v2 & 0x1FF)) / 16 + 64) & 0xFFFF;
    *(_WORD *)(v1 + 36) = *(_WORD *)((char *)gSineTable + (2 * (v3 + 64) & 0x1FF)) / 64;
    *(_WORD *)(v1 + 38) = *(_WORD *)((char *)gSineTable + (2 * v3 & 0x1FF)) / 64;
  }
  return v5;
}
