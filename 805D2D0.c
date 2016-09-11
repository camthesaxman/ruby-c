int __fastcall FieldObjectCB_BerryTree(int a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * *(_WORD *)(a1 + 46)];
  if ( !(*(_WORD *)(a1 + 60) & 1) )
  {
    get_berry_tree_graphics((int)v2, a1);
    *(_WORD *)(v1 + 60) |= 1u;
  }
  meta_step(v2);
  return v4;
}
