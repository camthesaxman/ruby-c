int __fastcall sub_80E2EE8(int a1)
{
  _WORD *v1; // r1@3
  int v3; // [sp+4h] [bp-4h]@0

  if ( *(_WORD *)(a1 + 46) )
  {
    --*(_WORD *)(a1 + 46);
  }
  else
  {
    v1 = &byte_3004B28[40 * *(_WORD *)(a1 + 48)] + 2 * *(_WORD *)(a1 + 50);
    --*v1;
    obj_delete_but_dont_free_vram(a1);
  }
  return v3;
}
