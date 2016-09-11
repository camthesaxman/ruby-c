int __fastcall npc_pal_op_A(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a2;
  v3 = *(_WORD *)(GetFieldObjectGraphicsInfo(*(_BYTE *)(a1 + 5)) + 4);
  if ( v3 != 4607 )
  {
    pal_patch_for_npc(v3, v2);
    sub_807D78C(v2);
  }
  return v5;
}
