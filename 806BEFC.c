int __fastcall task_pc_turn_off(_BYTE *a1, unsigned __int8 a2)
{
  _BYTE *v2; // r2@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v2 = a1;
  v3 = *a1;
  if ( v3 )
    sub_806BA94(v3, v2[1], 0, a2);
  else
    sub_806B9A4(*v2, v2[1], a2);
  return v5;
}
