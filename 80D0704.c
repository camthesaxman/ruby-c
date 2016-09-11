int __fastcall sub_80D0704(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  _WORD *v3; // r1@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( !(v2 << 16) )
  {
    v3 = &byte_3004B28[40 * *(_WORD *)(v1 + 48)] + 2 * *(_WORD *)(v1 + 50);
    --*v3;
    FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
    obj_delete_but_dont_free_vram(v1);
  }
  return v5;
}
